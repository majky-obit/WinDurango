#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationship.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring XboxSocialRelationship::XboxUserId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool XboxSocialRelationship::IsFavorite()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool XboxSocialRelationship::IsFollowingCaller()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> XboxSocialRelationship::SocialNetworks()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
