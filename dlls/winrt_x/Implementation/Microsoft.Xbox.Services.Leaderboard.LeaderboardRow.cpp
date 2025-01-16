#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardRow::Gamertag()
    {
		return L"durangler";
    }
    hstring LeaderboardRow::XboxUserId()
    {
        return L"123";
    }
    double LeaderboardRow::Percentile()
    {
		return 0.1;
    }
    uint32_t LeaderboardRow::Rank()
    {
        return 1;
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> LeaderboardRow::Values()
    {
		return winrt::single_threaded_vector<hstring>( ).GetView( );
    }
}
