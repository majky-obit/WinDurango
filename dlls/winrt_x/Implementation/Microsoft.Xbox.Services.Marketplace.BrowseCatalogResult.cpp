#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.h"
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.g.cpp"
#include "Microsoft.Xbox.Services.Marketplace.CatalogItem.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItem> BrowseCatalogResult::Items()
    {
		return winrt::single_threaded_vector<Marketplace::CatalogItem>().GetView();
    }
    uint32_t BrowseCatalogResult::TotalCount()
    {
        return 0;
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::BrowseCatalogResult> BrowseCatalogResult::GetNextAsync(uint32_t maxItems)
    {
		co_return winrt::make<BrowseCatalogResult>( );
    }
    bool BrowseCatalogResult::HasNext()
    {
        return false;
    }
}
