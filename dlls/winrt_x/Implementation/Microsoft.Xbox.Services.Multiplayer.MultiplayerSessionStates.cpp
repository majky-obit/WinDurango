#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::DateTime MultiplayerSessionStates::StartTime()
    {
		LOG_FUNCTION_NAME();

        return m_StartTime;
    }

    MultiplayerSessionReference MultiplayerSessionStates::SessionReference()
    {
        LOG_FUNCTION_NAME();

		return m_SessionReference;
    }

    MultiplayerSessionStatus MultiplayerSessionStates::Status()
    {
        LOG_FUNCTION_NAME();

        return m_Status;
    }

    MultiplayerSessionVisibility MultiplayerSessionStates::Visibility()
    {
        LOG_FUNCTION_NAME();

        return m_Visibility;
    }

    bool MultiplayerSessionStates::IsMyTurn()
    {
        LOG_FUNCTION_NAME();

        return m_IsMyTurn;
    }

    hstring MultiplayerSessionStates::XboxUserId()
    {
		LOG_FUNCTION_NAME();

        return m_XboxUserId;
    }

    uint32_t MultiplayerSessionStates::AcceptedMemberCount()
    {
		LOG_FUNCTION_NAME();

        return m_AcceptedMemberCount;
    }

    MultiplayerSessionRestriction MultiplayerSessionStates::JoinRestriction()
    {
		LOG_FUNCTION_NAME();

		return m_JoinRestriction;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionStates::Keywords()
    {
		LOG_FUNCTION_NAME( );

        return m_Keywords;
    }
}
