#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTitleAssociation.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTitleAssociation.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring AchievementTitleAssociation::Name()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t AchievementTitleAssociation::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
