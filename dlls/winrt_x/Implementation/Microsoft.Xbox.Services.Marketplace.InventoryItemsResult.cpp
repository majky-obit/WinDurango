#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItemsResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItem> InventoryItemsResult::Items()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t InventoryItemsResult::TotalItems()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemsResult> InventoryItemsResult::GetNextAsync(uint32_t maxItems)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool InventoryItemsResult::HasNext()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
