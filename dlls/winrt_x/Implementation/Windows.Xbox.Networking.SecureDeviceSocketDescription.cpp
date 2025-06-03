#include "pch.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.h"
#include "Windows.Xbox.Networking.SecureDeviceSocketDescription.g.cpp"

namespace winrt::Windows::Xbox::Networking::implementation
{
    hstring SecureDeviceSocketDescription::Name()
    {
        printf("SecureDeviceSocketDescription::Name\n");
        return L"";
    }
    winrt::Windows::Xbox::Networking::SecureIpProtocol SecureDeviceSocketDescription::IpProtocol()
    {
        printf("SecureDeviceSocketDescription::IpProtocol\n");
        throw hresult_not_implemented();
    }
    uint16_t SecureDeviceSocketDescription::BoundPortRangeLower()
    {
        printf("SecureDeviceSocketDescription::BoundPortRangeLower\n");
        return 0;
    }
    uint16_t SecureDeviceSocketDescription::BoundPortRangeUpper()
    {
        printf("SecureDeviceSocketDescription::BoundPortRangeUpper\n");
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Networking::SecureDeviceSocketUsage SecureDeviceSocketDescription::AllowedUsages()
    {
        printf("SecureDeviceSocketDescription::AllowedUsages\n");
        throw hresult_not_implemented();
    }
}
