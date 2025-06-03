#include "pch.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobResult.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageBlobResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::TitleStorage::implementation
{
    winrt::Windows::Storage::Streams::IBuffer TitleStorageBlobResult::BlobBuffer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageBlobMetadata TitleStorageBlobResult::BlobMetadata()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
