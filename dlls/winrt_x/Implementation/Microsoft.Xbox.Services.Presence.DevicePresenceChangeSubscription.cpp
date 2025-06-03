#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState DevicePresenceChangeSubscription::State()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring DevicePresenceChangeSubscription::ResourceUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t DevicePresenceChangeSubscription::SubscriptionId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring DevicePresenceChangeSubscription::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
