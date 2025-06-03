#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubUserPresenceRecord.h"
#include "Microsoft.Xbox.Services.Clubs.ClubUserPresenceRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubUserPresenceRecord::Xuid()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime ClubUserPresenceRecord::LastSeen()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresence ClubUserPresenceRecord::LastSeenState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
