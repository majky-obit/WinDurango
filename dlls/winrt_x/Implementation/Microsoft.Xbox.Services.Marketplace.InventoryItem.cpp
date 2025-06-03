#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::Uri InventoryItem::Url()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState InventoryItem::InventoryItemState()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType InventoryItem::MediaItemType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring InventoryItem::ProductId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t InventoryItem::TitleId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> InventoryItem::ContainerIds()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::RightsObtainedDate()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::StartDate()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::EndDate()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri InventoryItem::ConsumableUrl()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t InventoryItem::ConsumableBalance()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool InventoryItem::IsTrialEntitlement()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan InventoryItem::TrialTimeRemaining()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
