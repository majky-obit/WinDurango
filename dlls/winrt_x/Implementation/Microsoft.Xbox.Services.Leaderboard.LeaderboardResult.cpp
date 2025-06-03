#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardResult::DisplayName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t LeaderboardResult::TotalRowCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardColumn> LeaderboardResult::Columns()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardRow> LeaderboardResult::Rows()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool LeaderboardResult::HasNext()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardResult::GetNextAsync(uint32_t maxItems)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardQuery LeaderboardResult::GetNextQuery()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
