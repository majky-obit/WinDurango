#include "pch.h"
#include "ConnectedStorage.h"
#include "appmodel.h"
#include <shlobj.h>
#include <strsafe.h>

void WinDurango::impl::ConnectedStorage::CreateContainer(const wchar_t* name)
{
}

PWSTR WinDurango::impl::ConnectedStorage::ObtainPackageName()
{
    UINT32 length = 0;
    LONG rc = GetPackageFamilyName(GetCurrentProcess( ), &length, NULL);
    PWSTR familyName = static_cast<PWSTR>(malloc(length * sizeof(*familyName)));

    if (familyName == NULL)
    {
        wprintf(L"[ConnectedStorage] Error allocating memory\n");
        return nullptr;
    }

    rc = GetPackageFamilyName(GetCurrentProcess(), &length, familyName);
    if (rc != ERROR_SUCCESS)
        wprintf(L"[ConnectedStorage] Error %d retrieving PackageFamilyName\n", rc);

	return familyName;
}

void WinDurango::impl::ConnectedStorage::CreateDirectories(const wchar_t* storageType)
{
    PWSTR packageName = ObtainPackageName();
    if (packageName == nullptr) {
        return;
    }

    WCHAR folderPath[MAX_PATH];
    HRESULT hr = StringCchPrintf(folderPath, MAX_PATH, L"%s\\WinDurango\\%s_Storage", _wgetcwd(NULL, 0), packageName);
    if (FAILED(hr))
    {
        wprintf(L"[ConnectedStorage] Error %d formatting folder path\n", hr);
        CoTaskMemFree(packageName);
        return;
    }

    if (CreateDirectory(folderPath, NULL) || GetLastError() == ERROR_ALREADY_EXISTS)
    {
        hr = StringCchCat(folderPath, MAX_PATH, storageType);
        if (SUCCEEDED(hr))
        {
            if (!CreateDirectory(folderPath, NULL) && GetLastError() != ERROR_ALREADY_EXISTS)
            {
                wprintf(L"[ConnectedStorage] Error %d creating storage folder\n", GetLastError());
            }
        }
        else
        {
            wprintf(L"[ConnectedStorage] Error %d formatting storage folder path\n", hr);
        }
    }
    else
    {
        wprintf(L"[ConnectedStorage] Error %d creating package folder\n", GetLastError());
    }

    if (storagePath == nullptr)
        storagePath = _wcsdup(folderPath);

    CoTaskMemFree(packageName);
    free(packageName);
}

void WinDurango::impl::ConnectedStorage::InitializeStorage()
{
	//CreateDirectories(L"\\UserStorage");
	//printf("[ConnectedStorage] User storage initialized at %S\n", storagePath);
}
