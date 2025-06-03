#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToHostRequirements.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToHostRequirements.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::TimeSpan MultiplayerPeerToHostRequirements::LatencyMaximum()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerPeerToHostRequirements::BandwidthDownMinimumInKilobitsPerSecond()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerPeerToHostRequirements::BandwidthUpMinimumInKilobitsPerSecond()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayMetrics MultiplayerPeerToHostRequirements::HostSelectionMetric()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
