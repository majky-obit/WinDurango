#pragma once

#include <Windows.h>
#include <corecrt_wstdio.h>

#define FAILED(hr) (((HRESULT)(hr)) < 0)
#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#define RETURN_IF_FAILED(hr) if (FAILED(hr)) return hr
#define THROW_IF_FAILED(hr) if (FAILED(hr)) throw hr

#define IsXboxCallee() IsXboxAddress(_ReturnAddress())

#define GetXDKVersion() "10.0.19041.0"

BOOL IsXboxModule(HMODULE Module);
BOOL IsXboxAddress(const PVOID Address);

inline BOOL IsXboxModule(HMODULE Module)
{
	return Module == GetModuleHandleW(nullptr);
}

inline BOOL IsXboxAddress(const PVOID Address)
{
	HMODULE hModule;
   
	// GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT
	if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, static_cast<LPCWSTR>(Address), &hModule))
		return FALSE;

	return IsXboxModule(hModule);
}