#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::DateTime MultiplayerSessionArbitrationServer::ArbitrationStartTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationState MultiplayerSessionArbitrationServer::ResultState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultSource MultiplayerSessionArbitrationServer::ResultSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSessionArbitrationServer::ResultConfidenceLevel()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> MultiplayerSessionArbitrationServer::Results()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
