#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardResult::DisplayName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t LeaderboardResult::TotalRowCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardColumn> LeaderboardResult::Columns()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardRow> LeaderboardResult::Rows()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool LeaderboardResult::HasNext()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardResult::GetNextAsync(uint32_t maxItems)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery LeaderboardResult::GetNextQuery()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
