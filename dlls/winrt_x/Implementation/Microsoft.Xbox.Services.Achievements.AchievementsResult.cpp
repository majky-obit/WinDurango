#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementsResult.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementsResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::Achievement> AchievementsResult::Items()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Achievements::AchievementsResult> AchievementsResult::GetNextAsync(uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
    bool AchievementsResult::HasNext()
    {
        throw hresult_not_implemented();
    }
}
