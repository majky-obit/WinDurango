#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring XboxSocialRelationship::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    bool XboxSocialRelationship::IsFavorite()
    {
        throw hresult_not_implemented();
    }
    bool XboxSocialRelationship::IsFollowingCaller()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> XboxSocialRelationship::SocialNetworks()
    {
        throw hresult_not_implemented();
    }
}
