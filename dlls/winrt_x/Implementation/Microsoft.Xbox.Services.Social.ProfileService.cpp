#include "pch.h"
#include "Microsoft.Xbox.Services.Social.ProfileService.h"
#include "Microsoft.Xbox.Services.Social.ProfileService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Social::XboxUserProfile> ProfileService::GetUserProfileAsync(hstring xboxUserId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::XboxUserProfile>> ProfileService::GetUserProfilesAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Social::XboxUserProfile>> ProfileService::GetUserProfilesForSocialGroupAsync(hstring socialGroup)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
