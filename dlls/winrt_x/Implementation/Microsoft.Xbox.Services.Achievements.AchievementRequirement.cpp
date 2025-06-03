#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementRequirement.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementRequirement.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring AchievementRequirement::Id()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AchievementRequirement::CurrentProgressValue()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AchievementRequirement::TargetProgressValue()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
