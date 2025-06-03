#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Moderators()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::RequestedToJoin()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Recommended()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Banned()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
