#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerFulfillmentState AllocationResult::FulfillmentState()
    {
        throw hresult_not_implemented();
    }
    hstring AllocationResult::HostName()
    {
        throw hresult_not_implemented();
    }
    hstring AllocationResult::SessionHostId()
    {
        throw hresult_not_implemented();
    }
    hstring AllocationResult::Region()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> AllocationResult::PortMappings()
    {
        throw hresult_not_implemented();
    }
    hstring AllocationResult::SecureDeviceAddress()
    {
        throw hresult_not_implemented();
    }
}
