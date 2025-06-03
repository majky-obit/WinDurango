#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeSubscription.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState StatisticChangeSubscription::State()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring StatisticChangeSubscription::ResourceUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t StatisticChangeSubscription::SubscriptionId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring StatisticChangeSubscription::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring StatisticChangeSubscription::ServiceConfigurationId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring StatisticChangeSubscription::StatisticName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
