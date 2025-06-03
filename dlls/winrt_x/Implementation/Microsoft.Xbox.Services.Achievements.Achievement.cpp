#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.Achievement.h"
#include "Microsoft.Xbox.Services.Achievements.Achievement.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring Achievement::Id()
    {
        throw hresult_not_implemented();
    }
    hstring Achievement::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    hstring Achievement::Name()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementTitleAssociation> Achievement::TitleAssociations()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementProgressState Achievement::ProgressState()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementProgression Achievement::Progression()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementMediaAsset> Achievement::MediaAssets()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> Achievement::PlatformsAvailableOn()
    {
        throw hresult_not_implemented();
    }
    bool Achievement::IsSecret()
    {
        throw hresult_not_implemented();
    }
    hstring Achievement::UnlockedDescription()
    {
        throw hresult_not_implemented();
    }
    hstring Achievement::LockedDescription()
    {
        throw hresult_not_implemented();
    }
    hstring Achievement::ProductId()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementType Achievement::AchievementType()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementParticipationType Achievement::ParticipationType()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementTimeWindow Achievement::Available()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementReward> Achievement::Rewards()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan Achievement::EstimatedUnlockTime()
    {
        throw hresult_not_implemented();
    }
    hstring Achievement::DeepLink()
    {
        throw hresult_not_implemented();
    }
    bool Achievement::IsRevoked()
    {
        throw hresult_not_implemented();
    }
}
