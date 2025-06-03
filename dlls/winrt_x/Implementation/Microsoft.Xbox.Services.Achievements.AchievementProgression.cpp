#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementProgression.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementProgression.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementRequirement> AchievementProgression::Requirements()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime AchievementProgression::TimeUnlocked()
    {
        throw hresult_not_implemented();
    }
}
