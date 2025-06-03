#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Presence.TitlePresenceChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring TitlePresenceChangeEventArgs::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t TitlePresenceChangeEventArgs::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::TitlePresenceState TitlePresenceChangeEventArgs::TitleState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
