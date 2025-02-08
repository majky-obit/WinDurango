#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	struct MultiplayerSessionArbitrationServer : MultiplayerSessionArbitrationServerT<MultiplayerSessionArbitrationServer>
	{
		MultiplayerSessionArbitrationServer() = default;

		Windows::Foundation::DateTime ArbitrationStartTime();
		Tournaments::TournamentArbitrationState ResultState();
		Tournaments::TournamentGameResultSource ResultSource();
		uint32_t ResultConfidenceLevel();
		Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> Results();

	private:
		Windows::Foundation::DateTime m_arbitrationStartTime = DATETIME_NOW();
		Tournaments::TournamentArbitrationState m_resultState = Tournaments::TournamentArbitrationState::None;
		Tournaments::TournamentGameResultSource m_resultSource = Tournaments::TournamentGameResultSource::None;
		uint32_t m_resultConfidenceLevel = 0;
		Windows::Foundation::Collections::IMap<hstring, Tournaments::TournamentTeamResult> m_results = EMPTY_IMAP(hstring, Tournaments::TournamentTeamResult);
	};
}
