#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.Achievement.h"
#include "Microsoft.Xbox.Services.Achievements.Achievement.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring Achievement::Id()
    {

        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Achievement::ServiceConfigurationId()
    {

        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Achievement::Name()
    {

        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementTitleAssociation> Achievement::TitleAssociations()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementProgressState Achievement::ProgressState()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementProgression Achievement::Progression()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementMediaAsset> Achievement::MediaAssets()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> Achievement::PlatformsAvailableOn()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool Achievement::IsSecret()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Achievement::UnlockedDescription()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Achievement::LockedDescription()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Achievement::ProductId()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementType Achievement::AchievementType()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementParticipationType Achievement::ParticipationType()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementTimeWindow Achievement::Available()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementReward> Achievement::Rewards()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan Achievement::EstimatedUnlockTime()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Achievement::DeepLink()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool Achievement::IsRevoked()
    {
		LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
