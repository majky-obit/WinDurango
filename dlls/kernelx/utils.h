/*
================================================================================
DISCLAIMER AND LICENSE REQUIREMENT

This code is provided with the condition that if you use, modify, or distribute
this code in your project, you are required to make your project open source
under a license compatible with the GNU General Public License (GPL) or a
similarly strong copyleft license.

By using this code, you agree to:
1. Disclose your complete source code of any project incorporating this code.
2. Include this disclaimer in any copies or substantial portions of this file.
3. Provide clear attribution to the original author.

If you do not agree to these terms, you do not have permission to use this code.

================================================================================
*/
#pragma once
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <filesystem>
#include <Shlwapi.h>


#define FAILED(hr) (((HRESULT)(hr)) < 0)
#define SUCCEEDED(hr) (((HRESULT)(hr)) >= 0)
#define RETURN_IF_FAILED(hr) if (FAILED(hr)) return hr
#define THROW_IF_FAILED(hr) if (FAILED(hr)) throw hr

#define IsXboxCallee() IsXboxAddress(_ReturnAddress())

#define GetXDKVersion() "10.0.19041.0"

BOOL IsXboxModule(HMODULE module)
{
	return module == GetModuleHandleW(nullptr);
}

inline BOOL IsXboxAddress(const PVOID Address)
{
	HMODULE hModule;

	if (!GetModuleHandleExW(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS, static_cast<LPCWSTR>(Address), &hModule))
		return FALSE;

	return IsXboxModule(hModule);
}