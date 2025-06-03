#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementRequirement.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementRequirement.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring AchievementRequirement::Id()
    {
        throw hresult_not_implemented();
    }
    hstring AchievementRequirement::CurrentProgressValue()
    {
        throw hresult_not_implemented();
    }
    hstring AchievementRequirement::TargetProgressValue()
    {
        throw hresult_not_implemented();
    }
}
