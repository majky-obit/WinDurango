#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUserGroup.h"
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUserGroup.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUser> XboxSocialUserGroup::Users()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::SocialUserGroupType XboxSocialUserGroup::SocialUserGroupType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> XboxSocialUserGroup::UsersTrackedBySocialUserGroup()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::User XboxSocialUserGroup::LocalUser()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::PresenceFilter XboxSocialUserGroup::PresenceFilterOfGroup()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::RelationshipFilter XboxSocialUserGroup::RelationshipFilterOfGroup()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUser> XboxSocialUserGroup::GetUsersFromXboxUserIds(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
