#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    hstring SecureDeviceSocketDescription::Name()
    {
        Logger::NotImplemented(); return L"";
    }
    winrt::Windows::Xbox::Networking::SecureIpProtocol SecureDeviceSocketDescription::IpProtocol()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint16_t SecureDeviceSocketDescription::BoundPortRangeLower()
    {
        Logger::NotImplemented(); return 0;
    }
    uint16_t SecureDeviceSocketDescription::BoundPortRangeUpper()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketUsage SecureDeviceSocketDescription::AllowedUsages()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
