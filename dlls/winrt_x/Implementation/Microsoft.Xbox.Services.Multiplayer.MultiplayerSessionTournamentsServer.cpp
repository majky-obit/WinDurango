#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionTournamentsServer.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Tournaments::TournamentReference MultiplayerSessionTournamentsServer::TournamentReference()
    {
        PRINT_FUNCTION_NAME();

        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IMapView<hstring, MultiplayerSessionReference> MultiplayerSessionTournamentsServer::Teams()
    {
        PRINT_FUNCTION_NAME();

		const auto teams = single_threaded_map<hstring, MultiplayerSessionReference>();

		return teams.GetView();
    }

    Tournaments::TournamentRegistrationState MultiplayerSessionTournamentsServer::RegistrationState()
    {
        PRINT_FUNCTION_NAME();

		return Tournaments::TournamentRegistrationState::Registered;
    }

    Tournaments::TournamentRegistrationReason MultiplayerSessionTournamentsServer::RegistrationReason()
    {
        PRINT_FUNCTION_NAME();

        return Tournaments::TournamentRegistrationReason::MemberAlreadyRegistered;
    }

    Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::NextGameStartTime()
    {
		PRINT_FUNCTION_NAME();

		const auto now = std::chrono::system_clock::now();
		const auto duration = now.time_since_epoch();
		const auto hundred_nanoseconds = std::chrono::duration_cast<Windows::Foundation::TimeSpan>(duration);

		return Windows::Foundation::DateTime{ hundred_nanoseconds };
    }

    MultiplayerSessionReference MultiplayerSessionTournamentsServer::NextGameSessionRef()
    {
        PRINT_FUNCTION_NAME();

		return MultiplayerSessionReference{
			L"serviceConfigurationId",
			L"sessionTemplateName",
			L"sessionName"
		};
    }

    Windows::Foundation::DateTime MultiplayerSessionTournamentsServer::LastGameEndTime()
    {
		PRINT_FUNCTION_NAME();

		const auto now = std::chrono::system_clock::now();
		const auto duration = now.time_since_epoch();
		const auto hundred_nanoseconds = std::chrono::duration_cast<Windows::Foundation::TimeSpan>(duration);

		return Windows::Foundation::DateTime{ hundred_nanoseconds };
    }

    Tournaments::TournamentTeamResult MultiplayerSessionTournamentsServer::LastTeamResult()
    {
        PRINT_FUNCTION_NAME();

        throw hresult_not_implemented();
    }

	Tournaments::TournamentGameResultSource MultiplayerSessionTournamentsServer::LastGameResultSource()
    {
        PRINT_FUNCTION_NAME();

		return Tournaments::TournamentGameResultSource::None;
    }
}
