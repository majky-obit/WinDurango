#include "pch.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardService.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardService.g.cpp"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardResult.h"

namespace winrt::Microsoft::Xbox::Services::Leaderboard::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, uint32_t skipToRank, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t skipToRank, uint32_t maxItems)
    {
        co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, winrt::Windows::Foundation::Collections::IVectorView<hstring> additionalColumns)
    {
        co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, winrt::Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
        co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, uint32_t skipToRank, winrt::Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, uint32_t skipToRank, winrt::Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardWithSkipToUserAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring skipToXboxUserId, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardWithSkipToUserAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, hstring skipToXboxUserId, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardWithSkipToUserWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring skipToXboxUserId, winrt::Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardWithSkipToUserWithAdditionalColumnsAsync(hstring serviceConfigurationId, hstring leaderboardName, hstring xuid, hstring socialGroup, hstring skipToXboxUserId, winrt::Windows::Foundation::Collections::IVectorView<hstring> additionalColumns, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardForSocialGroupAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardForSocialGroupAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, hstring sortOrder, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardForSocialGroupWithSkipToRankAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, uint32_t skipToRank, hstring sortOrder, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardResult> LeaderboardService::GetLeaderboardForSocialGroupWithSkipToUserAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring statisticName, hstring socialGroup, hstring skipToXboxUserId, hstring sortOrder, uint32_t maxItems)
    {
		co_return winrt::make<LeaderboardResult>( );
    }
}
