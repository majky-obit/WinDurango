#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobMetadataResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata> TitleStorageBlobMetadataResult::Items()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadataResult> TitleStorageBlobMetadataResult::GetNextAsync(uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    bool TitleStorageBlobMetadataResult::HasNext()
    {
        throw hresult_not_implemented();
    }
}
