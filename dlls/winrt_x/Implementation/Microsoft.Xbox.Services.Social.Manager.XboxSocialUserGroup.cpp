#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUserGroup.h"
#include "Microsoft.Xbox.Services.Social.Manager.XboxSocialUserGroup.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUser> XboxSocialUserGroup::Users()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::SocialUserGroupType XboxSocialUserGroup::SocialUserGroupType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> XboxSocialUserGroup::UsersTrackedBySocialUserGroup()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::User XboxSocialUserGroup::LocalUser()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::PresenceFilter XboxSocialUserGroup::PresenceFilterOfGroup()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::RelationshipFilter XboxSocialUserGroup::RelationshipFilterOfGroup()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::Manager::XboxSocialUser> XboxSocialUserGroup::GetUsersFromXboxUserIds(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
