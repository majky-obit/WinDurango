#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadata.g.cpp"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    TitleStorageBlobMetadata::TitleStorageBlobMetadata(hstring const& serviceConfigurationId, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType const& storageType, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& xboxUserId, hstring const& displayName, hstring const& eTag, winrt::Windows::Foundation::DateTime const& clientTimestamp)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata TitleStorageBlobMetadata::CreateTitleStorageBlobMetadataForSessionStorage(hstring const& serviceConfigurationId, hstring const& blobPath, winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType const& blobType, hstring const& multiplayerSessionTemplateName, hstring const& multiplayerSessionName, hstring const& displayName, hstring const& eTag)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::BlobPath()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobType TitleStorageBlobMetadata::BlobType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType TitleStorageBlobMetadata::StorageType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::DisplayName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::ETag()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime TitleStorageBlobMetadata::ClientTimestamp()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void TitleStorageBlobMetadata::set(winrt::Windows::Foundation::DateTime const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t TitleStorageBlobMetadata::Length()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::ServiceConfigurationId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::XboxUserId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::MultiplayerSessionTemplateName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring TitleStorageBlobMetadata::MultiplayerSessionName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
