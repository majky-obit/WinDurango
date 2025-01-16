#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardColumn::DisplayName()
    {
		return L"durangler";
    }
    hstring LeaderboardColumn::StatisticName()
    {
		return L"statname";
    }
    winrt::Windows::Foundation::PropertyType LeaderboardColumn::StatisticType()
    {
		return winrt::Windows::Foundation::PropertyType::String;
    }
}
