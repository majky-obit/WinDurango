#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::Uri InventoryItem::Url()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState InventoryItem::InventoryItemState()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType InventoryItem::MediaItemType()
    {
        throw hresult_not_implemented();
    }
    hstring InventoryItem::ProductId()
    {
        throw hresult_not_implemented();
    }
    uint32_t InventoryItem::TitleId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> InventoryItem::ContainerIds()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::RightsObtainedDate()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::StartDate()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::EndDate()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri InventoryItem::ConsumableUrl()
    {
        throw hresult_not_implemented();
    }
    uint32_t InventoryItem::ConsumableBalance()
    {
        throw hresult_not_implemented();
    }
    bool InventoryItem::IsTrialEntitlement()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan InventoryItem::TrialTimeRemaining()
    {
        throw hresult_not_implemented();
    }
}
