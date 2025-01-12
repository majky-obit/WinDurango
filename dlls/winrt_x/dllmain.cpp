#include "pch.h"

#include "ConnectedStorage/ConnectedStorage.h"

DWORD WINAPI ThreadProc(LPVOID lpParam)
{
    UNREFERENCED_PARAMETER(lpParam);

    if (WinDurango::impl::s_userStorage == nullptr)
    {
        WinDurango::impl::s_userStorage = new WinDurango::impl::ConnectedStorage();
        WinDurango::impl::s_userStorage->InitializeStorage().get();
    }

    return 1;
}

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID reserved)
{
    if (dwReason == DLL_PROCESS_ATTACH) {
        printf("[winrt_x] DllMain invoked");
        CreateThread(nullptr, 0, ThreadProc, nullptr, 0, nullptr);
    }
	else if (dwReason == DLL_PROCESS_DETACH) {
		CloseHandle(WinDurango::impl::h_ContainerWriteEvent);
	}

    return TRUE;
}