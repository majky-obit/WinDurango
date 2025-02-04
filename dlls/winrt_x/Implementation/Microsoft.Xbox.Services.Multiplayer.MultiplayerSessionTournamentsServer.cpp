#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Tournaments::TournamentReference MultiplayerSessionTournamentsServer::TournamentReference()
    {
        LOG_FUNCTION_NAME();

        return m_tournamentReference;
    }

    Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> MultiplayerSessionTournamentsServer::Teams()
    {
        LOG_FUNCTION_NAME();

        return m_teams;
    }

    Tournaments::TournamentRegistrationState MultiplayerSessionTournamentsServer::RegistrationState()
    {
        LOG_FUNCTION_NAME();

        return m_registrationState;
    }

    Tournaments::TournamentRegistrationReason MultiplayerSessionTournamentsServer::RegistrationReason()
    {
        LOG_FUNCTION_NAME();

        return m_registrationReason;
    }

    Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::NextGameStartTime()
    {
		LOG_FUNCTION_NAME();

        return m_nextGameStartTime;
    }

    MultiplayerSessionReference MultiplayerSessionTournamentsServer::NextGameSessionRef()
    {
        LOG_FUNCTION_NAME();

		return m_nextGameSessionRef;
    }

    Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::LastGameEndTime()
    {
		LOG_FUNCTION_NAME();

        return m_lastGameEndTime;
    }

    Tournaments::TournamentTeamResult MultiplayerSessionTournamentsServer::LastTeamResult()
    {
        LOG_FUNCTION_NAME();

        return m_lastTeamResult;
    }

	Tournaments::TournamentGameResultSource MultiplayerSessionTournamentsServer::LastGameResultSource()
    {
        LOG_FUNCTION_NAME();

		return m_lastGameResultSource;
    }
}
