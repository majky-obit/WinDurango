#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    hstring SecureDeviceSocketDescription::Name()
    {
        LOG_NOTIMPLEMENTED(); return L"";
    }
    winrt::Windows::Xbox::Networking::SecureIpProtocol SecureDeviceSocketDescription::IpProtocol()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint16_t SecureDeviceSocketDescription::BoundPortRangeLower()
    {
        LOG_NOTIMPLEMENTED(); return 0;
    }
    uint16_t SecureDeviceSocketDescription::BoundPortRangeUpper()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketUsage SecureDeviceSocketDescription::AllowedUsages()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
