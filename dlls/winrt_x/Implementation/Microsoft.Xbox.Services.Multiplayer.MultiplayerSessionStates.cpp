#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::DateTime MultiplayerSessionStates::StartTime()
    {
		PRINT_FUNCTION_NAME();

        return m_StartTime;
    }

    MultiplayerSessionReference MultiplayerSessionStates::SessionReference()
    {
        PRINT_FUNCTION_NAME();

		return m_SessionReference;
    }

    MultiplayerSessionStatus MultiplayerSessionStates::Status()
    {
        PRINT_FUNCTION_NAME();

        return m_Status;
    }

    MultiplayerSessionVisibility MultiplayerSessionStates::Visibility()
    {
        PRINT_FUNCTION_NAME();

        return m_Visibility;
    }

    bool MultiplayerSessionStates::IsMyTurn()
    {
        PRINT_FUNCTION_NAME();

        return m_IsMyTurn;
    }

    hstring MultiplayerSessionStates::XboxUserId()
    {
		PRINT_FUNCTION_NAME();

        return m_XboxUserId;
    }

    uint32_t MultiplayerSessionStates::AcceptedMemberCount()
    {
		PRINT_FUNCTION_NAME();

        return m_AcceptedMemberCount;
    }

    MultiplayerSessionRestriction MultiplayerSessionStates::JoinRestriction()
    {
		PRINT_FUNCTION_NAME();

		return m_JoinRestriction;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionStates::Keywords()
    {
		PRINT_FUNCTION_NAME( );

        return m_Keywords;
    }
}
