#include "pch.h"
#include "Microsoft.Xbox.Services.Matchmaking.HopperStatisticsResponse.h"
#include "Microsoft.Xbox.Services.Matchmaking.HopperStatisticsResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Matchmaking::implementation
{
    hstring HopperStatisticsResponse::HopperName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan HopperStatisticsResponse::EstimatedWaitTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t HopperStatisticsResponse::PlayersWaitingToMatch()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
