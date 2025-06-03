#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoleRecord.h"
#include "Microsoft.Xbox.Services.Clubs.ClubRoleRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubRoleRecord::Xuid()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubRole ClubRoleRecord::Role()
    {
        throw hresult_not_implemented();
    }
    hstring ClubRoleRecord::ActorXuid()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime ClubRoleRecord::CreatedDate()
    {
        throw hresult_not_implemented();
    }
}
