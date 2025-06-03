#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoleRecord.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoleRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubRoleRecord::Xuid()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubRole ClubRoleRecord::Role()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ClubRoleRecord::ActorXuid()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime ClubRoleRecord::CreatedDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
