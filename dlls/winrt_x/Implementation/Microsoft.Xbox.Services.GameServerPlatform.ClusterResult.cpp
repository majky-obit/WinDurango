#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.ClusterResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    winrt::Windows::Foundation::TimeSpan ClusterResult::PollInterval()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerFulfillmentState ClusterResult::FulfillmentState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ClusterResult::HostName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ClusterResult::Region()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> ClusterResult::PortMappings()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring ClusterResult::SecureDeviceAddress()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
