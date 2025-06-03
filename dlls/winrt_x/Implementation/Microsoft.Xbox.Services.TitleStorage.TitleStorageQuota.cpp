#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageQuota.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageQuota.g.cpp"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    hstring TitleStorageQuota::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageType TitleStorageQuota::StorageType()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageQuota::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageQuota::MultiplayerSessionTemplateName()
    {
        throw hresult_not_implemented();
    }
    hstring TitleStorageQuota::MultiplayerSessionName()
    {
        throw hresult_not_implemented();
    }
    uint64_t TitleStorageQuota::UsedBytes()
    {
        throw hresult_not_implemented();
    }
    uint64_t TitleStorageQuota::QuotaBytes()
    {
        throw hresult_not_implemented();
    }
}
