#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.h"
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItem> BrowseCatalogResult::Items()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t BrowseCatalogResult::TotalCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::BrowseCatalogResult> BrowseCatalogResult::GetNextAsync(uint32_t maxItems)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool BrowseCatalogResult::HasNext()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
