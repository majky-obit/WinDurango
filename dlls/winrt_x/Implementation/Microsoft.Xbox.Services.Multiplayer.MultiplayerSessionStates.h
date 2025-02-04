#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionStates : MultiplayerSessionStatesT<MultiplayerSessionStates>
    {
        MultiplayerSessionStates() = default;

        Windows::Foundation::DateTime StartTime();
        MultiplayerSessionReference SessionReference();
        MultiplayerSessionStatus Status();
        MultiplayerSessionVisibility Visibility();
        bool IsMyTurn();
        hstring XboxUserId();
        uint32_t AcceptedMemberCount();
        MultiplayerSessionRestriction JoinRestriction();
        Windows::Foundation::Collections::IVectorView<hstring> Keywords();

    private:
        Windows::Foundation::DateTime m_startTime = DATETIME_NOW();
        // TODO: This shouldn't be a nullptr, but it will be fine for now.
		MultiplayerSessionReference m_sessionReference{ nullptr };
		MultiplayerSessionStatus m_status = MultiplayerSessionStatus::Active;
		MultiplayerSessionVisibility m_visibility = MultiplayerSessionVisibility::Private;
		bool m_isMyTurn = true;
		hstring m_xboxUserId = XBOX_USER_ID;
		uint32_t m_acceptedMemberCount = 0;
        MultiplayerSessionRestriction m_joinRestriction = MultiplayerSessionRestriction::Local;
        Windows::Foundation::Collections::IVectorView<hstring> m_keywords = EMPTY_IVECTOR(hstring).GetView();
    };
}
