#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::DateTime MultiplayerSessionStates::StartTime()
    {
		LOG_FUNCTION_NAME();

        return m_startTime;
    }

    MultiplayerSessionReference MultiplayerSessionStates::SessionReference()
    {
        LOG_FUNCTION_NAME();

		return m_sessionReference;
    }

    MultiplayerSessionStatus MultiplayerSessionStates::Status()
    {
        LOG_FUNCTION_NAME();

        return m_status;
    }

    MultiplayerSessionVisibility MultiplayerSessionStates::Visibility()
    {
        LOG_FUNCTION_NAME();

        return m_visibility;
    }

    bool MultiplayerSessionStates::IsMyTurn()
    {
        LOG_FUNCTION_NAME();

        return m_isMyTurn;
    }

    hstring MultiplayerSessionStates::XboxUserId()
    {
		LOG_FUNCTION_NAME();

        return m_xboxUserId;
    }

    uint32_t MultiplayerSessionStates::AcceptedMemberCount()
    {
		LOG_FUNCTION_NAME();

        return m_acceptedMemberCount;
    }

    MultiplayerSessionRestriction MultiplayerSessionStates::JoinRestriction()
    {
		LOG_FUNCTION_NAME();

		return m_joinRestriction;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionStates::Keywords()
    {
		LOG_FUNCTION_NAME( );

        return m_keywords;
    }
}
