#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoster.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Moderators()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::RequestedToJoin()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Recommended()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord> ClubRoster::Banned()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
