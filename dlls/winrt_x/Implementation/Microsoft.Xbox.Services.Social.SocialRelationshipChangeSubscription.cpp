#include "pch.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeSubscription.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState SocialRelationshipChangeSubscription::State()
    {
        throw hresult_not_implemented();
    }
    hstring SocialRelationshipChangeSubscription::ResourceUri()
    {
        throw hresult_not_implemented();
    }
    uint32_t SocialRelationshipChangeSubscription::SubscriptionId()
    {
        throw hresult_not_implemented();
    }
    hstring SocialRelationshipChangeSubscription::XboxUserId()
    {
        throw hresult_not_implemented();
    }
}
