#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionProperties : MultiplayerSessionPropertiesT<MultiplayerSessionProperties>
    {
        MultiplayerSessionProperties() = default;

        Windows::Foundation::Collections::IVectorView<hstring> Keywords();
        void Keywords(Windows::Foundation::Collections::IVectorView<hstring> const& value);
        MultiplayerSessionRestriction JoinRestriction();
        void JoinRestriction(MultiplayerSessionRestriction const& value);
        MultiplayerSessionRestriction ReadRestriction();
        void ReadRestriction(MultiplayerSessionRestriction const& value);
        Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> TurnCollection();
        void TurnCollection(Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> const& value);
        hstring MatchmakingTargetSessionConstantsJson();
        hstring SessionCustomPropertiesJson();
        hstring MatchmakingServerConnectionString();
        Windows::Foundation::Collections::IVectorView<hstring> ServerConnectionStringCandidates();
        Windows::Foundation::Collections::IVectorView<uint32_t> SessionOwnerIndices();
        hstring HostDeviceToken();
        bool Closed();
        bool Locked();
        bool AllocateCloudCompute();

    private:
		// TODO: I need to initialize these variables.
		Windows::Foundation::Collections::IVectorView<hstring> m_keywords;
        Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> m_turnCollection;
		Windows::Foundation::Collections::IVectorView<hstring> m_serverConnectionStringCandidates;
		Windows::Foundation::Collections::IVectorView<uint32_t> m_sessionOwnerIndices;

		MultiplayerSessionRestriction m_joinRestriction = MultiplayerSessionRestriction::Local;
        MultiplayerSessionRestriction m_readRestriction = MultiplayerSessionRestriction::Local;

        hstring m_matchmakingTargetSessionConstantsJson = MAKE_HSTRING("{}");
		hstring m_sessionCustomPropertiesJson = MAKE_HSTRING("{}");
		hstring m_matchmakingServerConnectionString = MAKE_HSTRING("");
		hstring m_hostDeviceToken = MAKE_HSTRING("");

    	bool m_closed = false;
		bool m_locked = false;
		bool m_allocateCloudCompute = false;
    };
}
