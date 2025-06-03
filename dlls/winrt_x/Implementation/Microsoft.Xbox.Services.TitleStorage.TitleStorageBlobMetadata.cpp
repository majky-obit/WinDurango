#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.g.cpp"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId)
    {
        throw hresult_not_implemented();
    }
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag)
    {
        throw hresult_not_implemented();
    }
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag, winrt::Windows::Foundation::DateTime const& clientTimestamp)
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata TitleStorageBlobMetadata::CreateTitleStorageBlobMetadataForSessionStorage(hstring const& serviceConfigurationId, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& multiplayerSessionTemplateName, hstring const& multiplayerSessionName, hstring const& displayName, hstring const& eTag)
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::BlobPath()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType TitleStorageBlobMetadata::BlobType()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType TitleStorageBlobMetadata::StorageType()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::DisplayName()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::ETag()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime TitleStorageBlobMetadata::ClientTimestamp()
    {
        throw hresult_not_implemented();
    }
    void TitleStorageBlobMetadata::set(winrt::Windows::Foundation::DateTime const& value)
    {
        throw hresult_not_implemented();
    }
    uint64_t TitleStorageBlobMetadata::Length()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::MultiplayerSessionTemplateName()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::MultiplayerSessionName()
    {
        throw hresult_not_implemented();
    }
}
