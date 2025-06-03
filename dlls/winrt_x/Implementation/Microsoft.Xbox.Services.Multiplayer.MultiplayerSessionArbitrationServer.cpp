#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::DateTime MultiplayerSessionArbitrationServer::ArbitrationStartTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationState MultiplayerSessionArbitrationServer::ResultState()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultSource MultiplayerSessionArbitrationServer::ResultSource()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerSessionArbitrationServer::ResultConfidenceLevel()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> MultiplayerSessionArbitrationServer::Results()
    {
        throw hresult_not_implemented();
    }
}
