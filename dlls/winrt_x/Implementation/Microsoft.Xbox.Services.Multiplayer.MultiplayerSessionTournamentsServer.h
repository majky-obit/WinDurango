#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionTournamentsServer : MultiplayerSessionTournamentsServerT<MultiplayerSessionTournamentsServer>
    {
        MultiplayerSessionTournamentsServer() = default;

        Tournaments::TournamentReference TournamentReference();
        Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> Teams();
        Tournaments::TournamentRegistrationState RegistrationState();
        Tournaments::TournamentRegistrationReason RegistrationReason();
        Windows::Foundation::DateTime NextGameStartTime();
        MultiplayerSessionReference NextGameSessionRef();
        Windows::Foundation::DateTime LastGameEndTime();
        Tournaments::TournamentTeamResult LastTeamResult();
        Tournaments::TournamentGameResultSource LastGameResultSource();

    private:
		// TODO: These should not be nullptr, but I'm not sure what to put here.
        Tournaments::TournamentReference m_tournamentReference{ nullptr };
        Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> m_teams{ nullptr };
		Tournaments::TournamentRegistrationState m_registrationState{ Tournaments::TournamentRegistrationState::Completed };
		Tournaments::TournamentRegistrationReason m_registrationReason{ Tournaments::TournamentRegistrationReason::MemberAlreadyRegistered };
		Windows::Foundation::DateTime m_nextGameStartTime{ DATETIME_NOW() };
    	MultiplayerSessionReference m_nextGameSessionRef {
			L"serviceConfigurationId",
			L"sessionTemplateName",
			L"sessionName"
		};
		Windows::Foundation::DateTime m_lastGameEndTime{ DATETIME_NOW( ) };
		Tournaments::TournamentTeamResult m_lastTeamResult{ nullptr };
		Tournaments::TournamentGameResultSource m_lastGameResultSource{ Tournaments::TournamentGameResultSource::None };
    };
}
