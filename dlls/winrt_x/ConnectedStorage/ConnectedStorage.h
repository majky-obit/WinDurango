#pragma once
#include <winrt/base.h>
#include <winrt/Windows.Storage.h>

namespace WinDurango::impl
{
	class ConnectedStorage
	{
	public:
		void InitializeStorage( );
		void CreateContainer(const wchar_t* name);
		winrt::Windows::Foundation::IAsyncAction Read(winrt::hstring containerName, winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, winrt::Windows::Storage::Streams::IBuffer> data);
		winrt::Windows::Foundation::IAsyncAction Upload(winrt::hstring containerName, winrt::Windows::Foundation::Collections::IMapView<winrt::hstring, winrt::Windows::Storage::Streams::IBuffer> blobsToWrite, winrt::Windows::Foundation::Collections::IIterable<winrt::hstring> blobsToDelete);
		
	private:
		static winrt::hstring ObtainPackageName( );
		winrt::Windows::Foundation::IAsyncAction CreateDirectories(const wchar_t* storageType);

		winrt::hstring storagePath;
	};

	inline ConnectedStorage* s_userStorage;
}