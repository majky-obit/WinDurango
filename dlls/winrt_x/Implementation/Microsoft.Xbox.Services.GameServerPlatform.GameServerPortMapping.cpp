#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPortMapping.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPortMapping.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring GameServerPortMapping::PortName()
    {
        throw hresult_not_implemented();
    }
    uint32_t GameServerPortMapping::InternalPortNumber()
    {
        throw hresult_not_implemented();
    }
    uint32_t GameServerPortMapping::ExternalPortNumber()
    {
        throw hresult_not_implemented();
    }
}
