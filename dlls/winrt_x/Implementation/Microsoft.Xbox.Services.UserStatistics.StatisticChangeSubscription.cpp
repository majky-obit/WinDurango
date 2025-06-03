#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeSubscription.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState StatisticChangeSubscription::State()
    {
        throw hresult_not_implemented();
    }
    hstring StatisticChangeSubscription::ResourceUri()
    {
        throw hresult_not_implemented();
    }
    uint32_t StatisticChangeSubscription::SubscriptionId()
    {
        throw hresult_not_implemented();
    }
    hstring StatisticChangeSubscription::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    hstring StatisticChangeSubscription::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    hstring StatisticChangeSubscription::StatisticName()
    {
        throw hresult_not_implemented();
    }
}
