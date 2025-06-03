#include "pch.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState RealTimeActivitySubscriptionErrorEventArgs::State()
    {
        throw hresult_not_implemented();
    }
    uint32_t RealTimeActivitySubscriptionErrorEventArgs::SubscriptionId()
    {
        throw hresult_not_implemented();
    }
    hstring RealTimeActivitySubscriptionErrorEventArgs::ResourceUri()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionError RealTimeActivitySubscriptionErrorEventArgs::SubscriptionError()
    {
        throw hresult_not_implemented();
    }
    hstring RealTimeActivitySubscriptionErrorEventArgs::ErrorMessage()
    {
        throw hresult_not_implemented();
    }
}
