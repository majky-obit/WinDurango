#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.Achievement.h"
#include "Microsoft.Xbox.Services.Achievements.Achievement.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    hstring Achievement::Id()
    {

        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Achievement::ServiceConfigurationId()
    {

        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Achievement::Name()
    {

        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementTitleAssociation> Achievement::TitleAssociations()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementProgressState Achievement::ProgressState()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementProgression Achievement::Progression()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementMediaAsset> Achievement::MediaAssets()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> Achievement::PlatformsAvailableOn()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool Achievement::IsSecret()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Achievement::UnlockedDescription()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Achievement::LockedDescription()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Achievement::ProductId()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementType Achievement::AchievementType()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementParticipationType Achievement::ParticipationType()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementTimeWindow Achievement::Available()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Achievements::AchievementReward> Achievement::Rewards()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan Achievement::EstimatedUnlockTime()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Achievement::DeepLink()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool Achievement::IsRevoked()
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
