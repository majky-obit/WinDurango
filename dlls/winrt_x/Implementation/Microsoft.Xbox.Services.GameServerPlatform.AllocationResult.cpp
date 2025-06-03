#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerFulfillmentState AllocationResult::FulfillmentState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring AllocationResult::HostName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring AllocationResult::SessionHostId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring AllocationResult::Region()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> AllocationResult::PortMappings()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring AllocationResult::SecureDeviceAddress()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
