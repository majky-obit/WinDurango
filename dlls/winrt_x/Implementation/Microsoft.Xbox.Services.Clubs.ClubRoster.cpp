#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Moderators()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::RequestedToJoin()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Recommended()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Banned()
    {
        throw hresult_not_implemented();
    }
}
