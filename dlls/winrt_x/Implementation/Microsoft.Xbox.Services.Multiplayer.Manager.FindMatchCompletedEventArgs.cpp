#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.FindMatchCompletedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.FindMatchCompletedEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MatchStatus FindMatchCompletedEventArgs::MatchStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerMeasurementFailure FindMatchCompletedEventArgs::InitializationFailureCause()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
