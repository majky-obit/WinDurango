#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, bool expandSatisfyingEntitlements, bool includeAllItemStatesAndAvailabilities)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType mediaItemType, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState inventoryItemState, winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemAvailability inventoryItemAvailability, hstring inventoryItemContainerId, uint32_t maxItems, bool expandSatisfyingEntitlements)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryService::GetInventoryItemsForAllUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> productIds, bool expandSatisfyingEntitlements)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem> InventoryService::GetInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::ConsumeInventoryItemResult> InventoryService::ConsumeInventoryItemAsync(winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem inventoryItem, uint32_t quantityToConsume, hstring transactionId)
    {
        throw hresult_not_implemented();
    }
}
