#include "pch.h"

NtAllocateVirtualMemory_t NtAllocateVirtualMemory;
NtFreeVirtualMemory_t NtFreeVirtualMemory;

//Ignoring this as for now (just hope it's not being used and it's not useful.)
__int64 NlsUpdateLocale_X() {
    return 0();
}

void WakeByAddressSingle_X(PVOID Address) {
    WakeByAddressSingle(Address);
}

void WakeByAddressAll_X(PVOID Address) {
    WakeByAddressAll(Address);
}

BOOL __stdcall WaitOnAddress_X(volatile void* Address, PVOID CompareAddress, SIZE_T AddressSize, DWORD dwMilliseconds)
{
    return WaitOnAddress(Address, CompareAddress, AddressSize, dwMilliseconds);
}

BOOL ToolingMemoryStatus_X(LPTOOLINGMEMORYSTATUS buffer)
{
    __int64 SystemInformation[4];

    if (buffer->dwLength != 40)
    {
        SetLastError(0x57u);
        return FALSE;
    }

    NTSTATUS Status = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)(0x96 | 0x80), SystemInformation, 0x20u, 0i64);
    if (!NT_SUCCESS(Status))
    {
        SetLastError(Status);
        return FALSE;
    }

    buffer->ullTotalMem = SystemInformation[0];
    buffer->ullAvailMem = SystemInformation[1];
    buffer->ulPeakUsage = SystemInformation[2];
    buffer->ullPageTableUsage = SystemInformation[3];

    return TRUE;
}

BOOL TitleMemoryStatus_X(LPTITLEMEMORYSTATUS Buffer)
{
    __int64 ProcessInformation[10]; // [rsp+30h] [rbp-68h] BYREF

    if (Buffer->dwLength != 80)
    {
        SetLastError(0x57u);
        return false;
    }

    NTSTATUS Status = NtQueryInformationProcess(
        (HANDLE)0xFFFFFFFFFFFFFFFFi64,
        (PROCESSINFOCLASS)(0x3A | 0x3A),
        ProcessInformation,
        0x48u,
        0i64);

    if (!NT_SUCCESS(Status))
    {
        SetLastError(Status);
        return FALSE;
    }

    Buffer->ullTotalMem = ProcessInformation[0];
    Buffer->ullAvailMem = ProcessInformation[0] - ProcessInformation[1];

    Buffer->ullLegacyUsed = ProcessInformation[2];
    Buffer->ullAvailMem = ProcessInformation[4] - ProcessInformation[2];

    Buffer->ullTitleUsed = ProcessInformation[5];
    Buffer->ullTitleUsed = ProcessInformation[5] - ProcessInformation[6];

    //// @Patoke todo: what is this doing? it's writing outside the bounds of TITLEMEMORYSTATUS
    //*(DWORD*)((uint8_t*)Buffer + 64) = ProcessInformation[7];
    //*(DWORD*)((uint8_t*)Buffer + 72) = ProcessInformation[8];

    // equivalent to the previous code
    auto* nextBuffer = Buffer++;
    nextBuffer->dwLength = ProcessInformation[7];
    nextBuffer->dwReserved = ProcessInformation[8];

    return TRUE;
}

// We ignore setting this as we actually don't care about this.
bool SetThreadpoolAffinityMask_X()
{
    return true;
}

BOOL SetThreadName_X(HANDLE hThread, const WCHAR* lpThreadName)
{
    UNICODE_STRING DestinationString;

    RtlInitUnicodeString(&DestinationString, lpThreadName);
    NTSTATUS Status = NtSetInformationThread(hThread, ThreadNameInformation, &DestinationString, 0x10u);
    if (NT_SUCCESS(Status))
        return TRUE;
    return FALSE;
}

void QueryProcessorSchedulingStatistics_X(PPROCESSOR_SCHEDULING_STATISTICS ProcessorSchedulingStatistics)
{
    LARGE_INTEGER frequency = { 0 };
    LARGE_INTEGER counter = { 0 };

    // Query the performance frequency and counter
    QueryPerformanceFrequency(&frequency);
    QueryPerformanceCounter(&counter);

    // Set a1[2] based on the performance counter and frequency
    ProcessorSchedulingStatistics->GlobalTime = counter.QuadPart / (frequency.QuadPart / 10000000);

    // Use the CPUID instruction
    int cpuInfo[4] = { 0 }; // {EAX, EBX, ECX, EDX}
    __cpuid(cpuInfo, 0);  // This gets the highest function supported by CPUID

    // Combine RBX and RAX as a 64-bit value and store in *a1
    ProcessorSchedulingStatistics->RunningTime = __ull_rshift(cpuInfo[1], cpuInfo[0]);  // EBX (RBX), EAX (RAX)

    // Combine RDX and RCX as a 64-bit value and store in a1[1]
    ProcessorSchedulingStatistics->IdleTime = __ull_rshift(cpuInfo[3], cpuInfo[2]); // EDX (RDX), ECX (RCX)
}

BOOL JobTitleMemoryStatus_X(void* pJob, LPTITLEMEMORYSTATUS Buffer)
{
    __int64 JobInformation[10]; // [rsp+30h] [rbp-68h] BYREF

    if (Buffer->dwLength != 80)
    {
        SetLastError(0x57u);
        return FALSE;
    }

    NTSTATUS Status = QueryInformationJobObject(pJob, (JOBOBJECTINFOCLASS)(JobObjectGroupInformation | 0x10), JobInformation, 0x48u, 0i64);
    if (!NT_SUCCESS(Status))
    {
        SetLastError(Status);
        return FALSE;
    }

    Buffer->ullTotalMem = JobInformation[0];
    Buffer->ullAvailMem = JobInformation[0] - JobInformation[1];

    Buffer->ullLegacyUsed = JobInformation[2];
    Buffer->ullAvailMem = JobInformation[4] - JobInformation[2];

    Buffer->ullTitleUsed = JobInformation[5];
    Buffer->ullTitleUsed = JobInformation[5] - JobInformation[6];

    //// @Patoke todo: what is this doing? it's writing outside the bounds of TITLEMEMORYSTATUS
    //*(DWORD*)((uint8_t*)Buffer + 64) = JobInformation[7];
    //*(DWORD*)((uint8_t*)Buffer + 72) = JobInformation[8];

    // equivalent to the previous code
    auto* nextBuffer = Buffer++;
    nextBuffer->dwLength = JobInformation[7];
    nextBuffer->dwReserved = JobInformation[8];

    return TRUE;
}

BOOL GetThreadName_X(HANDLE hThread, PWSTR lpThreadName, SIZE_T nBufferLength, SIZE_T* pnRequiredLength)
{
    ULONG v11; // ebx
    NTSTATUS iError; // edi
    ULONG ReturnLength; // [rsp+78h] [rbp+20h] BYREF

    if (!pnRequiredLength)
    {
        SetLastError(STATUS_INVALID_PARAMETER);
        return FALSE;
    }

    PUNICODE_STRING lpData = NULL;
    v11 = 144;
    SIZE_T iNameSize = 0;
    while (TRUE)
    {
        if (lpData)
            HeapFree(GetProcessHeap(), 0, lpData);
        lpData = (PUNICODE_STRING)HeapAlloc(GetProcessHeap(), 0, v11);
        if (!lpData)
        {
            SetLastError(STATUS_NO_MEMORY);
            return FALSE;
        }
        iError = NtQueryInformationThread(hThread, ThreadNameInformation, lpData, v11, &ReturnLength);
        if (iError != STATUS_INFO_LENGTH_MISMATCH && iError != STATUS_BUFFER_TOO_SMALL && iError != STATUS_BUFFER_OVERFLOW)
            break;
        v11 = ReturnLength;
    }
    if (NT_SUCCESS(iError))
    {
        iNameSize = lpData->Length / 2;
        if (lpThreadName && iNameSize < nBufferLength)
        {
            memcpy(lpThreadName, lpData->Buffer, iNameSize * sizeof(WCHAR));
            lpThreadName[iNameSize] = 0;
        }
        else
        {
            ++iNameSize;
            iError = STATUS_BUFFER_TOO_SMALL;
        }
    }

    *pnRequiredLength = iNameSize;
    HeapFree(GetProcessHeap(), 0, lpData);
    if (!NT_SUCCESS(iError))
    {
        SetLastError(iError);
        return FALSE;
    }
    return TRUE;
}

void GetSystemOSVersion_X(LPSYSTEMOSVERSIONINFO VersionInformation) {
    if (!VersionInformation)
    {
        return;
    }

    int cpuInfo[4] = { -1 };

    // @Patoke note: the XBOX passes 0x4000000D for its default hypervisor, we're not running a hypervisor
    // Execute CPUID with EAX = 1
    __cpuid(cpuInfo, 1);

    int eax = cpuInfo[0];
    int ebx = cpuInfo[1];
    int edx = cpuInfo[3];

    VersionInformation->MajorVersion = LOBYTE(ebx);             // Lowest 8 bits of EBX
    VersionInformation->MinorVersion = HIBYTE(HIDWORD(eax));    // Highest 8 bits of EAX

    VersionInformation->Revision = LOWORD(edx);                 // Lowest 16 bits of EDX
    VersionInformation->BuildNumber = LOWORD(eax);              // Lowest 16 bits of EAX     
}


CONSOLE_TYPE GetConsoleType_X() {
    return CONSOLE_TYPE::CONSOLE_TYPE_XBOX_ONE_X_DEVKIT;
}

uint32_t dword_180021AA0[16];
uint32_t dword_180021A60[16];
int64_t qword_18002C7E0[34];
HANDLE HeapHandle;


void XMemFreeDefault_X(PVOID pADDRESS, uint64_t dwAllocAttributes) {
	// note from unixian: previous implementation used invalid handle, Alloc uses malloc, so we use free here
	// this SHOULD be replaced with a proper reversal of xmem, but for now, this *should* be fine
	free(pADDRESS);
}

void XMemFree_X(PVOID pADDRESS, uint64_t dwAllocAttributes) {
    XMemFreeDefault_X(pADDRESS, dwAllocAttributes);
}

// Define PVOID for non-Windows environments if needed
#ifndef _WINDEF_
typedef void* PVOID;
#endif

PVOID XMemAllocDefault_X(SIZE_T dwSize, uint64_t flags) {
    PVOID ptr = nullptr;
    // Example flag usage: we assume if the highest bit of flags is set, we zero the memory.
    bool shouldZeroMemory = (flags & (1ULL << 63)) != 0;

    // Allocate memory
    ptr = malloc(dwSize);

    // Optionally zero out the memory if the flag is set
    if (ptr && shouldZeroMemory) {
        memset(ptr, 0, dwSize);
    }

    return ptr;
}

PVOID XMemAlloc_X(SIZE_T dwSize, uint64_t flags) {
    return XMemAllocDefault_X(dwSize, flags);
}

static decltype(&XMemAlloc_X) XMemAllocRoutine_X;
static decltype(&XMemFree_X) XMemFreeRoutine_X;

void XMemSetAllocationHooks_X(decltype(&XMemAlloc_X) Alloc, decltype(&XMemFree_X) Free)
{
    if (XMemSetAllocationHooksLock_X.OwningThread == 0) {
        InitializeCriticalSection(&XMemSetAllocationHooksLock_X);
    }

    EnterCriticalSection(&XMemSetAllocationHooksLock_X);

    if (Alloc) {
        XMemAllocRoutine_X = Alloc;
        XMemFreeRoutine_X = Free;
    }
    else {
        XMemAllocRoutine_X = &XMemAllocDefault_X;
        XMemFreeRoutine_X = &XMemFreeDefault_X;
    }

    LeaveCriticalSection(&XMemSetAllocationHooksLock_X);

}

#define PROTECT_FLAGS_MASK (PAGE_EXECUTE | PAGE_EXECUTE_READ | PAGE_EXECUTE_READWRITE | PAGE_EXECUTE_WRITECOPY | PAGE_NOACCESS | PAGE_READONLY | PAGE_READWRITE | PAGE_WRITECOPY | PAGE_GUARD | PAGE_NOCACHE)
#define ALLOCATION_FLAGS_MASK (MEM_COMMIT | MEM_RESERVE | MEM_RESET | MEM_LARGE_PAGES | MEM_PHYSICAL | MEM_TOP_DOWN | MEM_WRITE_WATCH)

LPVOID VirtualAlloc_X(
    LPVOID lpAddress,
    SIZE_T dwSize,
    DWORD  flAllocationType,
    DWORD  flProtect
)
{
	flProtect &= PROTECT_FLAGS_MASK;
	flAllocationType &= ALLOCATION_FLAGS_MASK;

    LPVOID ret = VirtualAlloc(lpAddress, dwSize, flAllocationType, flProtect);

	// backup plan in the case that VirtualAlloc fails despite the flags being masked away
	if (ret == nullptr)
	{
		printf("VirtualAlloc failed with %i, using backup...\n", GetLastError());
        ret = VirtualAlloc(lpAddress, dwSize, MEM_COMMIT, flProtect);
	}

    assert(ret != nullptr && "VirtualAlloc should not fail, check proper handling of xbox-one specific memory protection constants.");

	return ret;
}
