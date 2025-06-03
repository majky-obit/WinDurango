#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeSubscription.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState TitlePresenceChangeSubscription::State()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitlePresenceChangeSubscription::ResourceUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t TitlePresenceChangeSubscription::SubscriptionId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring TitlePresenceChangeSubscription::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t TitlePresenceChangeSubscription::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
