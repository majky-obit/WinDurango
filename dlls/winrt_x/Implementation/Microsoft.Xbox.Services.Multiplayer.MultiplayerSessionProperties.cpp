#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionProperties::Keywords()
    {
        LOG_FUNCTION_NAME();

        return m_keywords;
    }

    void MultiplayerSessionProperties::Keywords(Windows::Foundation::Collections::IVectorView<hstring> const& value)
    {
        LOG_FUNCTION_NAME();

		m_keywords = value;
    }

    MultiplayerSessionRestriction MultiplayerSessionProperties::JoinRestriction()
    {
        LOG_FUNCTION_NAME();

		return m_joinRestriction;
    }

    void MultiplayerSessionProperties::JoinRestriction(MultiplayerSessionRestriction const& value)
    {
        LOG_FUNCTION_NAME();

    	m_joinRestriction = value;
    }

    MultiplayerSessionRestriction MultiplayerSessionProperties::ReadRestriction()
    {
        LOG_FUNCTION_NAME();

		return m_readRestriction;
    }

    void MultiplayerSessionProperties::ReadRestriction(MultiplayerSessionRestriction const& value)
    {
        LOG_FUNCTION_NAME();

		m_readRestriction = value;
    }

    Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> MultiplayerSessionProperties::TurnCollection()
    {
        LOG_FUNCTION_NAME();

		return m_turnCollection;
    }

    void MultiplayerSessionProperties::TurnCollection(Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> const& value)
    {
        LOG_FUNCTION_NAME();

		m_turnCollection = value;
    }

    hstring MultiplayerSessionProperties::MatchmakingTargetSessionConstantsJson()
    {
        LOG_FUNCTION_NAME();

		return m_matchmakingTargetSessionConstantsJson;
    }

    hstring MultiplayerSessionProperties::SessionCustomPropertiesJson()
    {
        LOG_FUNCTION_NAME();

		return m_sessionCustomPropertiesJson;
    }

    hstring MultiplayerSessionProperties::MatchmakingServerConnectionString()
    {
        LOG_FUNCTION_NAME();

		return m_matchmakingServerConnectionString;
    }

    Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionProperties::ServerConnectionStringCandidates()
    {
        LOG_FUNCTION_NAME();

		return m_serverConnectionStringCandidates;
    }

    Windows::Foundation::Collections::IVectorView<uint32_t> MultiplayerSessionProperties::SessionOwnerIndices()
    {
        LOG_FUNCTION_NAME();

		return m_sessionOwnerIndices;
    }

    hstring MultiplayerSessionProperties::HostDeviceToken()
    {
        LOG_FUNCTION_NAME();

		return m_hostDeviceToken;
    }

    bool MultiplayerSessionProperties::Closed()
    {
        LOG_FUNCTION_NAME();

		return m_closed;
    }

    bool MultiplayerSessionProperties::Locked()
	{
		LOG_FUNCTION_NAME();

		return m_locked;
    }

    bool MultiplayerSessionProperties::AllocateCloudCompute()
    {
		LOG_FUNCTION_NAME();

		return m_allocateCloudCompute;
    }
}
