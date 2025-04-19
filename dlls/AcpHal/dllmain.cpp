// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <stdlib.h> // Add this include at the top of the file
#include <cstdio>
#include <winternl.h>
#include <corecrt_startup.h>
#include <cstdint>
#include "AcpHal.h"
BOOL(__stdcall* CustomDllEntryPoint)(HMODULE, DWORD, LPVOID);
void* Block;

uintptr_t _security_cookie;
uint64_t _security_cookie_complement = 0xFFFFD466D2205DCDULL;

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved)
{
    BOOL success = TRUE;
    BOOL dll_custom_init_success = 0;

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:

        if (CustomDllEntryPoint)
        {
            dll_custom_init_success = 1;
            success = CustomDllEntryPoint(hModule, DLL_PROCESS_ATTACH, lpReserved);
        }

        if (success)
            success = ManageThreadLocalStorage(hModule, DLL_PROCESS_ATTACH, lpReserved);

        if (success)
            if (InitializeCriticalSectionWrapper( ) < 0)
                return FALSE;

        if (!success)
        {
            if (criticalSection)
            {
                //CleanupCriticalSectionResources(criticalSection);
                operator delete(criticalSection);
            }
            criticalSection = 0;
            ManageThreadLocalStorage(hModule, DLL_PROCESS_DETACH, nullptr);

            if (CustomDllEntryPoint)
                CustomDllEntryPoint(hModule, DLL_PROCESS_DETACH, nullptr);
        }
        break;

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
        if (dll_custom_init_success && CustomDllEntryPoint)
            success = CustomDllEntryPoint(hModule, ul_reason_for_call, lpReserved);

        if (success)
            success = ManageThreadLocalStorage(hModule, ul_reason_for_call, lpReserved);

        break;

    case DLL_PROCESS_DETACH:
        if (dll_custom_init_success && CustomDllEntryPoint)
            success = CustomDllEntryPoint(hModule, DLL_PROCESS_DETACH, lpReserved);

        ManageThreadLocalStorage(hModule, DLL_PROCESS_DETACH, lpReserved);
        if (criticalSection)
        {
            //CleanupCriticalSectionResources(criticalSection);
            operator delete(criticalSection);
        }
        criticalSection = 0;
        break;

    default:
        success = FALSE;
        break;
    }

    return success;
}
void amsg_exit(int exit_code)
{
    char message[ 64 ];
    sprintf_s(message, sizeof(message), "Critical Error: Exit Code %d", exit_code);
    MessageBoxA(NULL, message, "Critical Error", MB_ICONERROR | MB_OK);
    ExitProcess(exit_code);
}

void initterm(const _PVFV* first, const _PVFV* last)
{
    while (first < last)
    {
        if (*first)
            (*first)();
        ++first;
    }
}
const _PVFV First = NULL;
const _PVFV Last = NULL;
void* TlsCallbackListEnd;
uintptr_t InitializeSecurityCookie( )
{
    if (_security_cookie == 0x2B992DDFA232ULL)
    {
        FILETIME systemTimeAsFileTime = { 0 };
        LARGE_INTEGER performanceCount;
        DWORD cookie;

        GetSystemTimeAsFileTime(&systemTimeAsFileTime);

        cookie = systemTimeAsFileTime.dwLowDateTime;
        cookie |= systemTimeAsFileTime.dwHighDateTime << 32;
        cookie ^= GetCurrentProcessId( );
        cookie ^= GetCurrentThreadId( );
        cookie ^= (GetTickCount( ) << 24);
        cookie ^= GetTickCount( );

        QueryPerformanceCounter(&performanceCount);
        cookie ^= performanceCount.QuadPart;
        cookie ^= (performanceCount.LowPart << 32);

        cookie &= 0xFFFFFFFFFFFFULL;

        if (cookie == 0x2B992DDFA232ULL)
            cookie = 0x2B992DDFA233ULL;

        _security_cookie = cookie;
    }

    _security_cookie_complement = ~_security_cookie;

    return _security_cookie_complement;
}

BOOL __stdcall ManageThreadLocalStorage(HINSTANCE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    static volatile LONG64 tlsSynchronizationLock = 0;
    static int dll_pending_operations = 0;
    static int tlsInitializationState = 0; // 0: uninitialized, 1: initializing, 2: initialized

    LONG64 currentStackBase = reinterpret_cast<LONG64>(reinterpret_cast<PNT_TIB>(NtCurrentTeb( ))->StackBase);

    // Acquire synchronization lock
    while (_InterlockedCompareExchange64(&tlsSynchronizationLock, currentStackBase, 0) != 0)
        Sleep(10);

    BOOL result = TRUE;

    if (ul_reason_for_call == DLL_PROCESS_ATTACH)
    {
        if (tlsInitializationState != 0)
        {
            amsg_exit(31);
            result = FALSE;
            goto cleanup;
        }

        tlsInitializationState = 1;

        // TLS initialization
        initterm(&First, &Last);

        tlsInitializationState = 2;

        ++dll_pending_operations;
    }
    else if (ul_reason_for_call == DLL_PROCESS_DETACH)
    {
        if (dll_pending_operations <= 0 || tlsInitializationState != 2)
        {
            amsg_exit(31);
            result = FALSE;
            goto cleanup;
        }

        --dll_pending_operations;

        // TLS cleanup
        if (Block)
        {
            for (void (**callback)(void) = reinterpret_cast<void (**)(void)>(Block);
                 callback < reinterpret_cast<void (**)(void)>(TlsCallbackListEnd);
                 ++callback)
            {
                if (*callback)
                    (*callback)();
            }

            free(Block);
            Block = nullptr;
            TlsCallbackListEnd = nullptr;
        }

        tlsInitializationState = 0;
    }

cleanup:
    _InterlockedExchange64(&tlsSynchronizationLock, 0);
    return result;
}

HRESULT InitializeCriticalSectionWrapper( )
{
    if (criticalSection)
        return E_UNEXPECTED; // Already initialized.

    LPCRITICAL_SECTION css = (LPCRITICAL_SECTION)operator new(0xB8);
    if (!css)
        return E_OUTOFMEMORY;

    InitializeCriticalSection((LPCRITICAL_SECTION) &css->LockSemaphore);

    css->DebugInfo = nullptr;
    css->LockCount = 0;
    css->OwningThread = nullptr;

    css[ 3 ].DebugInfo = nullptr;
    *reinterpret_cast<__int64*>(&css[ 3 ].LockCount) = 0;
    css[ 3 ].OwningThread = nullptr;

    css[ 2 ].DebugInfo = nullptr;
    *reinterpret_cast<__int64*>(&css[ 2 ].LockCount) = 0;
    css[ 2 ].OwningThread = nullptr;
    css[ 2 ].LockSemaphore = nullptr;
    css[ 2 ].SpinCount = 0;

    reinterpret_cast<DWORD&>(css[ 1 ].LockSemaphore) = 0;
    reinterpret_cast<BYTE*>(&css[ 1 ].LockSemaphore)[ 4 ] = 0;
    css[ 3 ].LockSemaphore = nullptr;

    reinterpret_cast<DWORD*>(&css[ 1 ].SpinCount)[ 0 ] = 0x4000000;
    reinterpret_cast<DWORD*>(&css[ 1 ].SpinCount)[ 1 ] = 1130496;

    memset(&css[ 3 ].SpinCount, 0, 0x20);

    criticalSection = css;

    return S_OK;
}
HRESULT __stdcall QueueEventRequest(LPCRITICAL_SECTION criticalSection, HRESULT requestType, __int64 requestData)
{
    HRESULT result = S_OK;
    EnterCriticalSection(criticalSection);

    if (requestData || requestType == 0x80000006)
    {
        PRTL_CRITICAL_SECTION_DEBUG debugInfo = reinterpret_cast<PRTL_CRITICAL_SECTION_DEBUG>(criticalSection[3].DebugInfo);

        if (debugInfo->Type)
        {
            result = 0x8AC80003;
        }
        else
        {
            *(reinterpret_cast<int*>(&debugInfo->CreatorBackTraceIndex) + 1) = 0;
            *reinterpret_cast<__int64*>(reinterpret_cast<char*>(debugInfo) + 8) = 0;
            *reinterpret_cast<HRESULT*>(reinterpret_cast<char*>(debugInfo) + 16) = requestType;

            switch (requestType)
            {
            case 0x80000000:
                break;

            case 0x80000001:
                break;

            case 0x80000002:
                break;
            }

            ++reinterpret_cast<int*>(criticalSection[3].LockSemaphore)[1];
            debugInfo->Type = 1;

            debugInfo = reinterpret_cast<PRTL_CRITICAL_SECTION_DEBUG>(reinterpret_cast<char*>(debugInfo) + 256);

            if (reinterpret_cast<__int64>(debugInfo) >= reinterpret_cast<__int64>(criticalSection[3].OwningThread))
                debugInfo = reinterpret_cast<PRTL_CRITICAL_SECTION_DEBUG>(criticalSection[3].DebugInfo);

            criticalSection[3].LockCount = reinterpret_cast<LONG>(debugInfo);
        }
    }
    else
    {
        result = E_INVALIDARG; // E_INVALIDARG
    }

    LeaveCriticalSection(criticalSection);
    return result;
}
