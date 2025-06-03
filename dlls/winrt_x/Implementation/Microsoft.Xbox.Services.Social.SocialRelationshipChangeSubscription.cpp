#include "pch.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeSubscription.h"
#include "Microsoft.Xbox.Services.Social.SocialRelationshipChangeSubscription.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivitySubscriptionState SocialRelationshipChangeSubscription::State()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring SocialRelationshipChangeSubscription::ResourceUri()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t SocialRelationshipChangeSubscription::SubscriptionId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring SocialRelationshipChangeSubscription::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
