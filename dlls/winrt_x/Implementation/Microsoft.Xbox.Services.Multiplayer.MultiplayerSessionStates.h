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
        Windows::Foundation::DateTime m_StartTime = DATETIME_NOW();
        // TODO: This shouldn't be a nullptr, but it will be fine for now.
		MultiplayerSessionReference m_SessionReference{ nullptr };
		MultiplayerSessionStatus m_Status = MultiplayerSessionStatus::Active;
		MultiplayerSessionVisibility m_Visibility = MultiplayerSessionVisibility::Private;
		bool m_IsMyTurn = true;
		hstring m_XboxUserId = XBOX_USER_ID;
		uint32_t m_AcceptedMemberCount = 0;
        MultiplayerSessionRestriction m_JoinRestriction = MultiplayerSessionRestriction::Local;
        Windows::Foundation::Collections::IVectorView<hstring> m_Keywords = EMPTY_IVECTOR(hstring).GetView();
    };
}
