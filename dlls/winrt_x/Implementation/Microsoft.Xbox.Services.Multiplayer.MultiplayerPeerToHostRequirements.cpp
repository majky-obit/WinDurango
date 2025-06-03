#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToHostRequirements.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerPeerToHostRequirements.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::TimeSpan MultiplayerPeerToHostRequirements::LatencyMaximum()
    {
        throw hresult_not_implemented();
    }
    uint64_t MultiplayerPeerToHostRequirements::BandwidthDownMinimumInKilobitsPerSecond()
    {
        throw hresult_not_implemented();
    }
    uint64_t MultiplayerPeerToHostRequirements::BandwidthUpMinimumInKilobitsPerSecond()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayMetrics MultiplayerPeerToHostRequirements::HostSelectionMetric()
    {
        throw hresult_not_implemented();
    }
}
