#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionProperties::Keywords()
    {
        PRINT_FUNCTION_NAME();

        return m_keywords;
    }

    void MultiplayerSessionProperties::Keywords(Windows::Foundation::Collections::IVectorView<hstring> const& value)
    {
        PRINT_FUNCTION_NAME();

		m_keywords = value;
    }

    MultiplayerSessionRestriction MultiplayerSessionProperties::JoinRestriction()
    {
        PRINT_FUNCTION_NAME();

		return m_joinRestriction;
    }

    void MultiplayerSessionProperties::JoinRestriction(MultiplayerSessionRestriction const& value)
    {
        PRINT_FUNCTION_NAME();

    	m_joinRestriction = value;
    }

    MultiplayerSessionRestriction MultiplayerSessionProperties::ReadRestriction()
    {
        PRINT_FUNCTION_NAME();

		return m_readRestriction;
    }

    void MultiplayerSessionProperties::ReadRestriction(MultiplayerSessionRestriction const& value)
    {
        PRINT_FUNCTION_NAME();

		m_readRestriction = value;
    }

    Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> MultiplayerSessionProperties::TurnCollection()
    {
        PRINT_FUNCTION_NAME();

		return m_turnCollection;
    }

    void MultiplayerSessionProperties::TurnCollection(Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> const& value)
    {
        PRINT_FUNCTION_NAME();

		m_turnCollection = value;
    }

    hstring MultiplayerSessionProperties::MatchmakingTargetSessionConstantsJson()
    {
        PRINT_FUNCTION_NAME();

		return m_matchmakingTargetSessionConstantsJson;
    }

    hstring MultiplayerSessionProperties::SessionCustomPropertiesJson()
    {
        PRINT_FUNCTION_NAME();

		return m_sessionCustomPropertiesJson;
    }

    hstring MultiplayerSessionProperties::MatchmakingServerConnectionString()
    {
        PRINT_FUNCTION_NAME();

		return m_matchmakingServerConnectionString;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionProperties::ServerConnectionStringCandidates()
    {
        PRINT_FUNCTION_NAME();

		return m_serverConnectionStringCandidates;
    }

    Windows::Foundation::Collections::IVectorView<uint32_t> MultiplayerSessionProperties::SessionOwnerIndices()
    {
        PRINT_FUNCTION_NAME();

		return m_sessionOwnerIndices;
    }

    hstring MultiplayerSessionProperties::HostDeviceToken()
    {
        PRINT_FUNCTION_NAME();

		return m_hostDeviceToken;
    }

    bool MultiplayerSessionProperties::Closed()
    {
        PRINT_FUNCTION_NAME();

		return m_closed;
    }

    bool MultiplayerSessionProperties::Locked()
	{
		PRINT_FUNCTION_NAME();

		return m_locked;
    }

    bool MultiplayerSessionProperties::AllocateCloudCompute()
    {
		PRINT_FUNCTION_NAME();

		return m_allocateCloudCompute;
    }
}
