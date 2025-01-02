#include "pch.h"
#include "hooks.h"

// note from unixian: i used this since using appxlauncher requires me attaching to the game after it launches
#define WINDURANGO_WAIT_FOR_DEBUGGER 0

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID reserved)
{
	if (DetourIsHelperProcess()) return TRUE;

	if (dwReason == DLL_PROCESS_ATTACH)
	{
#ifdef _DEBUG
		// note from unixian: some games do not create a console window, so if one isn't already created, we create one.
		if (!GetConsoleWindow())
		{
			AllocConsole();
			FILE* stream;
			freopen_s(&stream, "CONOUT$", "w", stdout);
			SetConsoleTitleA("WinDurango Debug Console");
		}

#if WINDURANGO_WAIT_FOR_DEBUGGER
		printf("Waiting for debugger...\n");
		while (!IsDebuggerPresent())
			Sleep(1);
#endif

#endif

		DetourRestoreAfterWith();
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourAttach(&reinterpret_cast<PVOID&>(TrueRoGetActivationFactory), RoGetActivationFactory_Hook);
		DetourTransactionCommit();
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourDetach(&reinterpret_cast<PVOID&>(TrueRoGetActivationFactory), RoGetActivationFactory_Hook);
		DetourTransactionCommit();
	}

	return TRUE;
}