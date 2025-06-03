#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsResult.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    hstring UserStatisticsResult::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::UserStatistics::ServiceConfigurationStatistic> UserStatisticsResult::ServiceConfigurationStatistics()
    {
        throw hresult_not_implemented();
    }
}
