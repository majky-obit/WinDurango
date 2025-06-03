#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.h"
#include "Microsoft.Xbox.Services.UserStatistics.Statistic.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring Statistic::StatisticName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::PropertyType Statistic::StatisticType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Statistic::Value()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
