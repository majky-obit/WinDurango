#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogService.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogService.g.cpp"
#include "Microsoft.Xbox.Services.Marketplace.BrowseCatalogResult.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::BrowseCatalogResult> CatalogService::BrowseCatalogAsync(hstring parentId, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType parentMediaType, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType childMediaType, winrt::Microsoft::Xbox::Services::Marketplace::CatalogSortOrder orderBy, uint32_t skipItems, uint32_t maxItems)
    {
        co_return winrt::make<BrowseCatalogResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::BrowseCatalogResult> CatalogService::BrowseCatalogBundlesAsync(hstring parentId, winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType parentMediaType, hstring productId, winrt::Microsoft::Xbox::Services::Marketplace::BundleRelationshipType relationship, uint32_t skipItems, uint32_t maxItems)
    {
        co_return winrt::make<BrowseCatalogResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::CatalogItemDetails>> CatalogService::GetCatalogItemDetailsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds)
    {
        co_return winrt::single_threaded_vector<CatalogItemDetails>( ).GetView( );
    }
}