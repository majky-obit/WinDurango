#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentReference MultiplayerSessionTournamentsServer::TournamentReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference> MultiplayerSessionTournamentsServer::Teams()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationState MultiplayerSessionTournamentsServer::RegistrationState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentRegistrationReason MultiplayerSessionTournamentsServer::RegistrationReason()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::NextGameStartTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionTournamentsServer::NextGameSessionRef()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::LastGameEndTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult MultiplayerSessionTournamentsServer::LastTeamResult()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentGameResultSource MultiplayerSessionTournamentsServer::LastGameResultSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
