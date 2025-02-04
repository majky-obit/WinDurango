#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Tournaments::TournamentReference MultiplayerSessionTournamentsServer::TournamentReference()
    {
        LOG_FUNCTION_NAME();

        return m_TournamentReference;
    }

    Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> MultiplayerSessionTournamentsServer::Teams()
    {
        LOG_FUNCTION_NAME();

        return m_Teams;
    }

    Tournaments::TournamentRegistrationState MultiplayerSessionTournamentsServer::RegistrationState()
    {
        LOG_FUNCTION_NAME();

        return m_RegistrationState;
    }

    Tournaments::TournamentRegistrationReason MultiplayerSessionTournamentsServer::RegistrationReason()
    {
        LOG_FUNCTION_NAME();

        return m_RegistrationReason;
    }

    Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::NextGameStartTime()
    {
		LOG_FUNCTION_NAME();

        return m_NextGameStartTime;
    }

    MultiplayerSessionReference MultiplayerSessionTournamentsServer::NextGameSessionRef()
    {
        LOG_FUNCTION_NAME();

		return m_NextGameSessionRef;
    }

    Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::LastGameEndTime()
    {
		LOG_FUNCTION_NAME();

        return m_LastGameEndTime;
    }

    Tournaments::TournamentTeamResult MultiplayerSessionTournamentsServer::LastTeamResult()
    {
        LOG_FUNCTION_NAME();

        return m_LastTeamResult;
    }

	Tournaments::TournamentGameResultSource MultiplayerSessionTournamentsServer::LastGameResultSource()
    {
        LOG_FUNCTION_NAME();

		return m_LastGameResultSource;
    }
}
