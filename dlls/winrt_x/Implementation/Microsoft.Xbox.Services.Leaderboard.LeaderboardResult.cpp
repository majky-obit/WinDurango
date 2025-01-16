#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.g.cpp"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardColumn.h"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardResult::DisplayName()
    {
		return L"durangler";
    }
    uint32_t LeaderboardResult::TotalRowCount()
    {
        return 1;
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardColumn> LeaderboardResult::Columns()
    {
		return winrt::single_threaded_vector<Leaderboard::LeaderboardColumn>( ).GetView( );
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardRow> LeaderboardResult::Rows()
    {
		return winrt::single_threaded_vector<Leaderboard::LeaderboardRow>( ).GetView( );
    }
    bool LeaderboardResult::HasNext()
    {
        return false;
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardResult::GetNextAsync(uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery LeaderboardResult::GetNextQuery()
    {
		return nullptr;
    }
}
