#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::DateTime MultiplayerSessionStates::StartTime()
    {
		PRINT_FUNCTION_NAME();

		const auto now = std::chrono::system_clock::now();
		const auto duration = now.time_since_epoch();
		const auto hundred_nanoseconds = std::chrono::duration_cast<Windows::Foundation::TimeSpan>(duration);

		return Windows::Foundation::DateTime{ hundred_nanoseconds };
    }

    MultiplayerSessionReference MultiplayerSessionStates::SessionReference()
    {
        PRINT_FUNCTION_NAME();

        throw hresult_not_implemented( );
    }

    MultiplayerSessionStatus MultiplayerSessionStates::Status()
    {
        PRINT_FUNCTION_NAME();

		return MultiplayerSessionStatus::Active;
    }

    MultiplayerSessionVisibility MultiplayerSessionStates::Visibility()
    {
        PRINT_FUNCTION_NAME();

        return MultiplayerSessionVisibility::Visible;
    }

    bool MultiplayerSessionStates::IsMyTurn()
    {
        PRINT_FUNCTION_NAME();

        return true;
    }

    hstring MultiplayerSessionStates::XboxUserId()
    {
		PRINT_FUNCTION_NAME();

		return XBOX_USER_ID;
    }

    uint32_t MultiplayerSessionStates::AcceptedMemberCount()
    {
		PRINT_FUNCTION_NAME();

		return 1;
    }

    MultiplayerSessionRestriction MultiplayerSessionStates::JoinRestriction()
    {
		PRINT_FUNCTION_NAME( );

		return MultiplayerSessionRestriction::Local;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionStates::Keywords()
    {
		PRINT_FUNCTION_NAME( );

		const auto keywords = winrt::single_threaded_vector<hstring>();

		keywords.Append(TEAM_ID);

		return keywords.GetView( );
    }
}
