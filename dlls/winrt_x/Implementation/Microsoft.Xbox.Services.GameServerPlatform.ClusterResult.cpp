#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    winrt::Windows::Foundation::TimeSpan ClusterResult::PollInterval()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerFulfillmentState ClusterResult::FulfillmentState()
    {
        throw hresult_not_implemented();
    }
    hstring ClusterResult::HostName()
    {
        throw hresult_not_implemented();
    }
    hstring ClusterResult::Region()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> ClusterResult::PortMappings()
    {
        throw hresult_not_implemented();
    }
    hstring ClusterResult::SecureDeviceAddress()
    {
        throw hresult_not_implemented();
    }
}
