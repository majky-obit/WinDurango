#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	MatchmakingStatus MultiplayerSessionMatchmakingServer::Status()
	{
		LOG_FUNCTION_NAME();

		return m_Status;
	}

	hstring MultiplayerSessionMatchmakingServer::StatusDetails()
	{
		LOG_FUNCTION_NAME();

		return m_StatusDetails;
	}

	Windows::Foundation::TimeSpan MultiplayerSessionMatchmakingServer::TypicalWait()
	{
		LOG_FUNCTION_NAME();

		return m_TypicalWait;
	}

	MultiplayerSessionReference MultiplayerSessionMatchmakingServer::TargetSessionRef()
	{
		LOG_FUNCTION_NAME();

		return m_TargetSessionRef;
	}
}
