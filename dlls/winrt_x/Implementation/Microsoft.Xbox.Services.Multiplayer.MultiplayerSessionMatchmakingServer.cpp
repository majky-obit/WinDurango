#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MatchmakingStatus MultiplayerSessionMatchmakingServer::Status()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMatchmakingServer::StatusDetails()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MultiplayerSessionMatchmakingServer::TypicalWait()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionMatchmakingServer::TargetSessionRef()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
