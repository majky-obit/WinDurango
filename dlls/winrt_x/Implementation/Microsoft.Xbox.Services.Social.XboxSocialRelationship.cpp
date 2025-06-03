#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring XboxSocialRelationship::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool XboxSocialRelationship::IsFavorite()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool XboxSocialRelationship::IsFollowingCaller()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> XboxSocialRelationship::SocialNetworks()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
