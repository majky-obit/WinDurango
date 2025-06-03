#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState DevicePresenceChangeSubscription::State()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring DevicePresenceChangeSubscription::ResourceUri()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t DevicePresenceChangeSubscription::SubscriptionId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring DevicePresenceChangeSubscription::XboxUserId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
