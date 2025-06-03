#include "pch.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationshipResult.h"
#include "Microsoft.Xbox.Services.Social.XboxSocialRelationshipResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationship> XboxSocialRelationshipResult::Items()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t XboxSocialRelationshipResult::TotalCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool XboxSocialRelationshipResult::HasNext()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxSocialRelationshipResult> XboxSocialRelationshipResult::GetNextAsync(uint32_t maxItems)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
