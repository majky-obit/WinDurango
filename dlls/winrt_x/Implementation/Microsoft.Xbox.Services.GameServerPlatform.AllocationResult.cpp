#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.AllocationResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerFulfillmentState AllocationResult::FulfillmentState()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AllocationResult::HostName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AllocationResult::SessionHostId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AllocationResult::Region()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> AllocationResult::PortMappings()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring AllocationResult::SecureDeviceAddress()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
