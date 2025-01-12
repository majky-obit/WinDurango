#include "pch.h"
#include "ConnectedStorage.h"
#include <shlobj.h>
#include <strsafe.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.ApplicationModel.h>
#include <robuffer.h>

void WinDurango::impl::ConnectedStorage::CreateContainer(const wchar_t* name)
{
    printf("[ConnectedStorage] Container %S requested creation\n", name);
    const wchar_t* folderName = _wcsdup(name);

	try
	{
		auto folder = winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(storagePath + L"\\" + name).get();
	}
	catch (...)
	{
		auto folder = winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(storagePath).get( );
		folder.CreateFolderAsync(folderName).get( );
	}

	printf("[ConnectedStorage] Container %S created\n", folderName);
}

winrt::Windows::Foundation::IAsyncAction WinDurango::impl::ConnectedStorage::Read(
    winrt::hstring containerName, winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, winrt::Windows::Storage::Streams::IBuffer> data)
{
    auto folder = co_await winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(storagePath + L"\\" + containerName);
    for (auto const& pair : data)
    {
        auto fileName = pair.Key();
        auto file = co_await folder.GetFileAsync(fileName);
        auto fileBuffer = co_await winrt::Windows::Storage::FileIO::ReadBufferAsync(file);
        auto bufferByteAccess = fileBuffer.as<Windows::Storage::Streams::IBufferByteAccess>();
        uint8_t* fileData = nullptr;
        bufferByteAccess->Buffer(&fileData);
        auto dataBuffer = pair.Value();
        auto dataBufferByteAccess = dataBuffer.as<Windows::Storage::Streams::IBufferByteAccess>();
        uint8_t* dataBufferData = nullptr;
        dataBufferByteAccess->Buffer(&dataBufferData);
        memcpy(dataBufferData, fileData, fileBuffer.Length());
    }
}

winrt::Windows::Foundation::IAsyncAction WinDurango::impl::ConnectedStorage::Upload(
    winrt::hstring containerName,
    winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, winrt::Windows::Storage::Streams::IBuffer> blobsToWrite,
    winrt::Windows::Foundation::Collections::IIterable<winrt::hstring> blobsToDelete)
{
    auto folder = co_await winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(storagePath + L"\\" + containerName);
    
    for (auto const& pair : blobsToWrite)
    {
        auto fileName = pair.Key();
        auto dataBuffer = pair.Value();
        auto file = co_await folder.CreateFileAsync(fileName, winrt::Windows::Storage::CreationCollisionOption::ReplaceExisting);
        co_await winrt::Windows::Storage::FileIO::WriteBufferAsync(file, dataBuffer);
    }

    //for (auto const& blobName : blobsToDelete)
    //{
    //    auto file = co_await folder.GetFileAsync(blobName);
    //    co_await file.DeleteAsync();
    //}
}

winrt::hstring WinDurango::impl::ConnectedStorage::ObtainPackageName()
{
    return winrt::Windows::ApplicationModel::Package::Current( ).Id( ).FamilyName( );
}

winrt::Windows::Foundation::IAsyncAction WinDurango::impl::ConnectedStorage::CreateDirectories(const wchar_t* storageType)
{
    co_await winrt::resume_background( );

    winrt::hstring packageName = ObtainPackageName( );
    if (packageName.empty( ))
    {
        co_return;
    }

    winrt::hstring folderPath = winrt::Windows::Storage::ApplicationData::Current( ).LocalFolder( ).Path( ) + L"\\WinDurango";

    try
    {
        auto folder = co_await winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(folderPath);
    }
    catch (...)
    {
        auto folder = winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(winrt::Windows::Storage::ApplicationData::Current( ).LocalFolder( ).Path( )).get();
    	folder.CreateFolderAsync(L"WinDurango").get();
    }

    folderPath = folderPath + L"\\" + storageType;

    try
    {
        auto folder = co_await winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(folderPath);
    }
    catch (...)
    {
        auto folder = winrt::Windows::Storage::StorageFolder::GetFolderFromPathAsync(winrt::Windows::Storage::ApplicationData::Current( ).LocalFolder( ).Path( ) + L"\\WinDurango").get( );
    	folder.CreateFolderAsync(storageType).get();
    }

	storagePath = folderPath;
}

void WinDurango::impl::ConnectedStorage::InitializeStorage()
{
    CreateDirectories(L"UserStorage").get();
    printf("[ConnectedStorage] User storage initialized at %S\n", storagePath.c_str());
}
