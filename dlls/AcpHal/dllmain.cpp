// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <stdlib.h> // Add this include at the top of the file
#include <cstdio>
#include <winternl.h>
#include <corecrt_startup.h>
#include <cstdint>
#include "AcpHal.h"

BOOL APIENTRY DllMain(HMODULE hModule,
                      DWORD ul_reason_for_call,
                      LPVOID lpReserved)
{
    BOOL success = TRUE;
    BOOL dll_custom_init_success = 0;

    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:

    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;

    default:
        success = FALSE;
        break;
    }

    return success;
}