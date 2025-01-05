#pragma once
#include "pch.h"

struct CForzaThread
{
    DWORD Id;
    HANDLE Handle;
    DWORD StackSize;
    DWORD AffinityMask;
    DWORD Priority;
    char Name[128];
};

struct FmodThread
{
    void* virtualtable;
    char Name[256];
};

DWORD(*P_StartForzaThread_X)(CForzaThread*, LPTHREAD_START_ROUTINE, LPVOID);

DWORD(*P_FmodThreadProc_X)(FmodThread*);

DWORD D_StartForzaThread_X(CForzaThread* Thread, LPTHREAD_START_ROUTINE StartAddress, LPVOID Parameter)
{
    WCHAR ThreadName[128];
    ZeroMemory(ThreadName, sizeof(ThreadName));
    DWORD r = P_StartForzaThread_X(Thread, StartAddress, Parameter);
    MultiByteToWideChar(CP_UTF8, 0, Thread->Name, 128, ThreadName, 128);
    SetThreadDescription(Thread->Handle, ThreadName);
    return r;
}

DWORD D_FmodThreadProc_X(FmodThread* Thread)
{
    WCHAR ThreadName[256];
    MultiByteToWideChar(CP_UTF8, 0, Thread->Name, 256, ThreadName, 256);
    SetThreadDescription(GetCurrentThread(), ThreadName);
    return P_FmodThreadProc_X(Thread);
}
