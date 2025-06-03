#include "pch.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryItem.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Marketplace::implementation
{
    winrt::Windows::Foundation::Uri InventoryItem::Url()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::InventoryItemState InventoryItem::InventoryItemState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::MediaItemType InventoryItem::MediaItemType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring InventoryItem::ProductId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t InventoryItem::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> InventoryItem::ContainerIds()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::RightsObtainedDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::StartDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime InventoryItem::EndDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri InventoryItem::ConsumableUrl()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t InventoryItem::ConsumableBalance()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool InventoryItem::IsTrialEntitlement()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan InventoryItem::TrialTimeRemaining()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
