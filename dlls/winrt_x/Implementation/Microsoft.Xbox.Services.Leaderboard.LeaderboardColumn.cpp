#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardColumn::DisplayName()
    {
        throw hresult_not_implemented();
    }
    hstring LeaderboardColumn::StatisticName()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::PropertyType LeaderboardColumn::StatisticType()
    {
        throw hresult_not_implemented();
    }
}
