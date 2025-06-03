#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Presence.DevicePresenceChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring DevicePresenceChangeEventArgs::XboxUserId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType DevicePresenceChangeEventArgs::DeviceType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool DevicePresenceChangeEventArgs::IsUserLoggedOnDevice()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
