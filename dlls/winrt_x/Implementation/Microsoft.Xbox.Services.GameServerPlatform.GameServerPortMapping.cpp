#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPortMapping.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPortMapping.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring GameServerPortMapping::PortName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t GameServerPortMapping::InternalPortNumber()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t GameServerPortMapping::ExternalPortNumber()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
