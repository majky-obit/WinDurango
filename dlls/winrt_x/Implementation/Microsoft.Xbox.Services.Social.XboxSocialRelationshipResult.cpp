#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationshipResult.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationshipResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationship> XboxSocialRelationshipResult::Items()
    {
        throw hresult_not_implemented();
    }
    uint32_t XboxSocialRelationshipResult::TotalCount()
    {
        throw hresult_not_implemented();
    }
    bool XboxSocialRelationshipResult::HasNext()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationshipResult> XboxSocialRelationshipResult::GetNextAsync(uint32_t maxItems)
    {
        throw hresult_not_implemented();
    }
}
