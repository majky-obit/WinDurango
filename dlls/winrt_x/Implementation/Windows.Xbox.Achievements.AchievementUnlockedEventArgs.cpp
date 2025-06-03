#include "pch.h"
#include "Windows.Xbox.Achievements.AchievementUnlockedEventArgs.h"
#include "Windows.Xbox.Achievements.AchievementUnlockedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Achievements::implementation
{
    winrt::Windows::Xbox::System::User AchievementUnlockedEventArgs::User()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring AchievementUnlockedEventArgs::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring AchievementUnlockedEventArgs::ServiceConfigurationId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring AchievementUnlockedEventArgs::AchievementId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime AchievementUnlockedEventArgs::UnlockTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Uri AchievementUnlockedEventArgs::ExtendedInfoUrl()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> AchievementUnlockedEventArgs::InAppRewardValue()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
