#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardRow.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    hstring LeaderboardRow::Gamertag()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring LeaderboardRow::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    double LeaderboardRow::Percentile()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t LeaderboardRow::Rank()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> LeaderboardRow::Values()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
