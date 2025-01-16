#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.g.cpp"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem> InventoryItemsResult::Items()
    {
		return winrt::single_threaded_vector<Marketplace::InventoryItem>().GetView();
    }
    uint32_t InventoryItemsResult::TotalItems()
    {
        return 0;
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryItemsResult::GetNextAsync(uint32_t maxItems)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    bool InventoryItemsResult::HasNext()
    {
        return false;
    }
}
