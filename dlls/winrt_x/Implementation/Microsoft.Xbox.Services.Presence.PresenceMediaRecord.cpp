#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceMediaRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceMediaRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceMediaRecord::MediaId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceMediaIdType PresenceMediaRecord::MediaIdType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring PresenceMediaRecord::Name()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
