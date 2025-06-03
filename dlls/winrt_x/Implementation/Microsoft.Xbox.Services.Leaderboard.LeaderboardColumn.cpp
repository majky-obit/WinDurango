#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardColumn::DisplayName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring LeaderboardColumn::StatisticName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::PropertyType LeaderboardColumn::StatisticType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
