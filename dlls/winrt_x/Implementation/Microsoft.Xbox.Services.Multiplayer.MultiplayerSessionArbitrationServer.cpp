#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionArbitrationServer.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	Windows::Foundation::DateTime MultiplayerSessionArbitrationServer::ArbitrationStartTime()
	{
		LOG_FUNCTION_NAME();

		return m_arbitrationStartTime;
	}

	Tournaments::TournamentArbitrationState MultiplayerSessionArbitrationServer::ResultState()
	{
		LOG_FUNCTION_NAME();

		return m_resultState;
	}

	Tournaments::TournamentGameResultSource MultiplayerSessionArbitrationServer::ResultSource()
	{
		LOG_FUNCTION_NAME();

		return m_resultSource;
	}

	uint32_t MultiplayerSessionArbitrationServer::ResultConfidenceLevel()
	{
		LOG_FUNCTION_NAME();

		return m_resultConfidenceLevel;
	}

	Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> MultiplayerSessionArbitrationServer::Results()
	{
		LOG_FUNCTION_NAME();

		return m_results.GetView( );
	}
}
