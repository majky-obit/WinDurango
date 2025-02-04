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
        Tournaments::TournamentReference m_TournamentReference{ nullptr };
        Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> m_Teams{ nullptr };
		Tournaments::TournamentRegistrationState m_RegistrationState{ Tournaments::TournamentRegistrationState::Completed };
		Tournaments::TournamentRegistrationReason m_RegistrationReason{ Tournaments::TournamentRegistrationReason::MemberAlreadyRegistered };
		Windows::Foundation::DateTime m_NextGameStartTime{ DATETIME_NOW() };
    	MultiplayerSessionReference m_NextGameSessionRef {
			L"serviceConfigurationId",
			L"sessionTemplateName",
			L"sessionName"
		};
		Windows::Foundation::DateTime m_LastGameEndTime{ DATETIME_NOW( ) };
		Tournaments::TournamentTeamResult m_LastTeamResult{ nullptr };
		Tournaments::TournamentGameResultSource m_LastGameResultSource{ Tournaments::TournamentGameResultSource::None };
    };
}
