#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeEventArgs.h"
#include "Microsoft.Xbox.Services.UserStatistics.StatisticChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring StatisticChangeEventArgs::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    hstring StatisticChangeEventArgs::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::UserStatistics::Statistic StatisticChangeEventArgs::LatestStatistic()
    {
        throw hresult_not_implemented();
    }
}
