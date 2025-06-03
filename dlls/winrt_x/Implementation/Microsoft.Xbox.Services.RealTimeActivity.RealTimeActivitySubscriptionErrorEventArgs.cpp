#include "pch.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState RealTimeActivitySubscriptionErrorEventArgs::State()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t RealTimeActivitySubscriptionErrorEventArgs::SubscriptionId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring RealTimeActivitySubscriptionErrorEventArgs::ResourceUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionError RealTimeActivitySubscriptionErrorEventArgs::SubscriptionError()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring RealTimeActivitySubscriptionErrorEventArgs::ErrorMessage()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
