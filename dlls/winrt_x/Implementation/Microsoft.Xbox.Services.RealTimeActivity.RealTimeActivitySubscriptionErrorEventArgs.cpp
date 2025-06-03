#include "pch.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivitySubscriptionErrorEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::RealTimeActivity::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState RealTimeActivitySubscriptionErrorEventArgs::State()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t RealTimeActivitySubscriptionErrorEventArgs::SubscriptionId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring RealTimeActivitySubscriptionErrorEventArgs::ResourceUri()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionError RealTimeActivitySubscriptionErrorEventArgs::SubscriptionError()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring RealTimeActivitySubscriptionErrorEventArgs::ErrorMessage()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
