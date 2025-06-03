#include "pch.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialEvent.h"
#include "Microsoft.Xbox.Services.Social.Manager.SocialEvent.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::Manager::implementation
{
    winrt::Windows::Xbox::System::User SocialEvent::User()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::SocialEventType SocialEvent::EventType()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> SocialEvent::UsersAffected()
    {
        throw hresult_not_implemented();
    }
    int32_t SocialEvent::ErrorCode()
    {
        throw hresult_not_implemented();
    }
    hstring SocialEvent::ErrorMessage()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::Manager::SocialEventArgs SocialEvent::EventArgs()
    {
        throw hresult_not_implemented();
    }
}
