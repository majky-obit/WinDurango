#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.g.cpp"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.h"
#include "Microsoft.Xbox.Services.Marketplace.ConsumeInventoryItemResult.h"

namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements)
    {
		co_return winrt::make<InventoryItemsResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem> InventoryService::GetInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem)
    {
		co_return winrt::make<InventoryItem>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::ConsumeInventoryItemResult> InventoryService::ConsumeInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem, uint32_t quantityToConsume, hstring transactionId)
    {
		co_return winrt::make<ConsumeInventoryItemResult>( );
    }
}
