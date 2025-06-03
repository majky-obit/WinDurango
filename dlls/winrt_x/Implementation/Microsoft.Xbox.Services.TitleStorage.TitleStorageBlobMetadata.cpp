#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.g.cpp"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag, winrt::Windows::Foundation::DateTime const& clientTimestamp)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata TitleStorageBlobMetadata::CreateTitleStorageBlobMetadataForSessionStorage(hstring const& serviceConfigurationId, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& multiplayerSessionTemplateName, hstring const& multiplayerSessionName, hstring const& displayName, hstring const& eTag)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::BlobPath()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType TitleStorageBlobMetadata::BlobType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType TitleStorageBlobMetadata::StorageType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::DisplayName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::ETag()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime TitleStorageBlobMetadata::ClientTimestamp()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void TitleStorageBlobMetadata::set(winrt::Windows::Foundation::DateTime const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t TitleStorageBlobMetadata::Length()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::ServiceConfigurationId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::MultiplayerSessionTemplateName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::MultiplayerSessionName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
