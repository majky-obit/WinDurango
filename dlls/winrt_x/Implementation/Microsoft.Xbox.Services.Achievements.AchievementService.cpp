#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementService.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    winrt::Windows::Foundation::IAsyncAction AchievementService::UpdateAchievementAsync(hstring xboxUserId, hstring achievementId, uint32_t percentComplete)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction AchievementService::UpdateAchievementAsync(hstring xboxUserId, uint32_t titleId, hstring serviceConfigurationId, hstring achievementId, uint32_t percentComplete)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<int32_t> AchievementService::TryUpdateAchievementAsync(hstring xboxUserId, hstring achievementId, uint32_t percentComplete)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<int32_t> AchievementService::TryUpdateAchievementAsync(hstring xboxUserId, uint32_t titleId, hstring serviceConfigurationId, hstring achievementId, uint32_t percentComplete)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Achievements::AchievementsResult> AchievementService::GetAchievementsForTitleIdAsync(hstring xboxUserId, uint32_t titleId, winrt::Microsoft::Xbox::Services::Achievements::AchievementType type, bool unlockedOnly, winrt::Microsoft::Xbox::Services::Achievements::AchievementOrderBy orderBy, uint32_t skipItems, uint32_t maxItems)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Achievements::Achievement> AchievementService::GetAchievementAsync(hstring xboxUserId, hstring serviceConfigurationId, hstring achievementId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
