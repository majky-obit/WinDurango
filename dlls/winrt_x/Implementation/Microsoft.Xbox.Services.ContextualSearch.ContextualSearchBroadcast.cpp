#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.g.cpp"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    hstring ContextualSearchBroadcast::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContextualSearchBroadcast::Provider()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ContextualSearchBroadcast::BroadcasterIdFromProvider()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t ContextualSearchBroadcast::Viewers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime ContextualSearchBroadcast::StartedDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> ContextualSearchBroadcast::CurrentStats()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
