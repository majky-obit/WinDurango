#include "pch.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchBroadcast.g.cpp"


namespace winrt::Microsoft::Xbox::Services::ContextualSearch::implementation
{
    hstring ContextualSearchBroadcast::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    hstring ContextualSearchBroadcast::Provider()
    {
        throw hresult_not_implemented();
    }
    hstring ContextualSearchBroadcast::BroadcasterIdFromProvider()
    {
        throw hresult_not_implemented();
    }
    uint64_t ContextualSearchBroadcast::Viewers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime ContextualSearchBroadcast::StartedDate()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> ContextualSearchBroadcast::CurrentStats()
    {
        throw hresult_not_implemented();
    }
}
