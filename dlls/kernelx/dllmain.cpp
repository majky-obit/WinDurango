#include "pch.h"
#include "hooks.h"
#include "ForzaThreadHook_X.h"
#include "kernelx.h"

// note from unixian: i used this since using appxlauncher requires me attaching to the game after it launches
#define WINDURANGO_WAIT_FOR_DEBUGGER 0

//Rodrigo Todescatto: For debbuging Forza.
#define RETURN_IF_FAILED(hr) if (FAILED(hr)) return hr
#define FORZADEBUG

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID reserved)
{
	winrt::hstring GamePackage = winrt::Windows::ApplicationModel::Package::Current().Id().FamilyName();

	InitializeCriticalSection(&XMemSetAllocationHooksLock_X);

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
		
#ifdef FORZADEBUG
		//Rodrigo Todescatto: Forza Horizon 2 Demo.
		if (GamePackage == L"265E1020-Anthem_8wekyb3d8bbwe")
		{
			printf("Forza Horizon 2 Demo\n");
			*(void**)&P_StartForzaThread_X = (char*)GetModuleHandleW(nullptr) + 0xFE6920;
			if (FAILED(P_StartForzaThread_X))
			{
				printf("P_StartForzaThread_X failed!\n");
				OutputDebugStringW(L"P_StartForzaThread_X failed!\n");
			}
			if (SUCCEEDED(P_StartForzaThread_X))
			{
				printf("P_StartForzaThread_X succeeded!\n");
				OutputDebugStringW(L"P_StartForzaThread_X succeeded!\n");
			}
			RETURN_IF_FAILED(HRESULT_FROM_WIN32(DetourAttach((void**)&P_StartForzaThread_X, &D_StartForzaThread_X)));
		}
		//Rodrigo Todescatto: Forza Horizon 2.
		if (GamePackage == L"Anthem_8wekyb3d8bbwe")
		{
			printf("Forza Horizon 2\n");
			*(void**)&P_StartForzaThread_X = (char*)GetModuleHandleW(nullptr) + 0x1081A90;
			if (FAILED(P_StartForzaThread_X))
			{
				printf("P_StartForzaThread_X failed!\n");
				OutputDebugStringW(L"P_StartForzaThread_X failed!\n");
			}
			if (SUCCEEDED(P_StartForzaThread_X))
			{
				printf("P_StartForzaThread_X succeeded!\n");
				OutputDebugStringW(L"P_StartForzaThread_X succeeded!\n");
			}
			*(void**)&P_FmodThreadProc_X = (char*)GetModuleHandleW(nullptr) + 0x19D3F80;
			if (FAILED(P_FmodThreadProc_X))
			{
				printf("P_FmodThreadProc_X failed!\n");
				OutputDebugStringW(L"P_FmodThreadProc_X failed!\n");
			}
			if (SUCCEEDED(P_FmodThreadProc_X))
			{
				printf("P_FmodThreadProc_X succeeded!\n");
				OutputDebugStringW(L"P_FmodThreadProc_X succeeded!\n");
			}
			RETURN_IF_FAILED(HRESULT_FROM_WIN32(DetourAttach((void**)&P_StartForzaThread_X, &D_StartForzaThread_X)));
			RETURN_IF_FAILED(HRESULT_FROM_WIN32(DetourAttach((void**)&P_FmodThreadProc_X, &D_FmodThreadProc_X)));
		}
		//Rodrigo Todescatto: Forza Motorsport 5.
		if (GamePackage == L"Forza_8wekyb3d8bbwe")
		{
			printf("Forza Motorsport 5");
		}
		//Rodrigo Todescatto: Forza Horizon 2 Presents Fast & Furious.
		if (GamePackage == L"Spire_8wekyb3d8bbwe")
		{
			printf("Forza Horizon 2 Presents Fast & Furious");
		}
#endif

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

		DetourAttach(&reinterpret_cast<PVOID&>(TrueOpenFile), OpenFile_Hook);
		DetourAttach(&reinterpret_cast<PVOID&>(TrueCreateFileW), CreateFileW_Hook);
		DetourAttach(&reinterpret_cast<PVOID&>(TrueGetFileAttributesW), GetFileAttributesW_Hook);
		DetourAttach(&reinterpret_cast<PVOID&>(TrueGetFileAttributesExW), GetFileAttributesExW_Hook);
		DetourAttach(&reinterpret_cast<PVOID&>(TrueFindFirstFileW), FindFirstFileW_Hook);
		DetourAttach(&reinterpret_cast<PVOID&>(TrueDeleteFileW), DeleteFileW_Hook);

		DetourTransactionCommit();
	}
	else if (dwReason == DLL_PROCESS_DETACH)
	{
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		DetourDetach(&reinterpret_cast<PVOID&>(TrueRoGetActivationFactory), RoGetActivationFactory_Hook);
		
		DetourDetach(&reinterpret_cast<PVOID&>(TrueOpenFile), OpenFile_Hook);
		DetourDetach(&reinterpret_cast<PVOID&>(TrueCreateFileW), CreateFileW_Hook);
		DetourDetach(&reinterpret_cast<PVOID&>(TrueGetFileAttributesW), GetFileAttributesW_Hook);
		DetourDetach(&reinterpret_cast<PVOID&>(TrueGetFileAttributesExW), GetFileAttributesExW_Hook);
		DetourDetach(&reinterpret_cast<PVOID&>(TrueFindFirstFileW), FindFirstFileW_Hook);
		DetourDetach(&reinterpret_cast<PVOID&>(TrueDeleteFileW), DeleteFileW_Hook);

		DetourTransactionCommit();
	}

	return TRUE;
}