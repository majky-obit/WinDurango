#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.h"
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring Statistic::StatisticName()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::PropertyType Statistic::StatisticType()
    {
        throw hresult_not_implemented();
    }
    hstring Statistic::Value()
    {
        throw hresult_not_implemented();
    }
}
