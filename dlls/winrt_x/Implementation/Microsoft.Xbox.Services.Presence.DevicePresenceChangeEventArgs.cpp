#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring DevicePresenceChangeEventArgs::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType DevicePresenceChangeEventArgs::DeviceType()
    {
        throw hresult_not_implemented();
    }
    bool DevicePresenceChangeEventArgs::IsUserLoggedOnDevice()
    {
        throw hresult_not_implemented();
    }
}
