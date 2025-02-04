#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMatchmakingServer.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionMatchmakingServer : MultiplayerSessionMatchmakingServerT<MultiplayerSessionMatchmakingServer>
    {
        MultiplayerSessionMatchmakingServer() = default;

        MatchmakingStatus Status();
        hstring StatusDetails();
        Windows::Foundation::TimeSpan TypicalWait();
        MultiplayerSessionReference TargetSessionRef();

    private:
		MatchmakingStatus m_Status{ MatchmakingStatus::None };
		hstring m_StatusDetails{ L"StatusDetails" };
		Windows::Foundation::TimeSpan m_TypicalWait{ 0 };
		MultiplayerSessionReference m_TargetSessionRef{
			L"serviceConfigurationId",
			L"sessionTemplateName",
			L"sessionName"
		};
    };
}
