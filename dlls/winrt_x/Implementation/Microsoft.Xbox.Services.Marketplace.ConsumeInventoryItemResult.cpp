#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.ConsumeInventoryItemResult.h"
#include "Microsoft.Xbox.Services.Marketplace.ConsumeInventoryItemResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::Uri ConsumeInventoryItemResult::ConsumableUrl()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t ConsumeInventoryItemResult::ConsumableBalance()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ConsumeInventoryItemResult::TransactionId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
