// ReSharper disable CppMemberFunctionMayBeConst
// ReSharper disable CppMemberFunctionMayBeStatic
// ReSharper disable CppClangTidyHicppExceptionBaseclass
#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionConstants.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionConstants.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	// Get an uint32_t that is the max members allowed in a session.
	uint32_t MultiplayerSessionConstants::MaxMembersInSession()
	{
		return m_MaxMembersInSession;
	}

	// Set the max allowed members in the session, must be between 1 - 10,000 and the default value is 100.
	void MultiplayerSessionConstants::MaxMembersInSession(uint32_t value)
	{
		if (value < 1 || value > 10000)
			m_MaxMembersInSession = 100;
		else
			m_MaxMembersInSession = value;
	}

	// TODO: This needs to be complete.
	MultiplayerSessionVisibility MultiplayerSessionConstants::MultiplayerSessionVisibility()
	{
		printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
	}

	// TODO: This needs to be complete.
	void MultiplayerSessionConstants::MultiplayerSessionVisibility(Multiplayer::MultiplayerSessionVisibility const& value)
	{
		printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
	}

	// Get an IVectorView of strings, where each string is an XboxUserId.
	Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionConstants::InitiatorXboxUserIds()
	{
		m_UserIds.Append(L"ViTaLC0D3R");
		m_UserIds.Append(L"1234567890");

		return m_UserIds.GetView();
	}

	// Get a JSON string of custom constants.
	hstring MultiplayerSessionConstants::CustomConstantsJson()
	{
		return m_CustomJsonProperties;
	}

	// Gets the MemberReservationTimeout value as a TimeSpan.
	Windows::Foundation::TimeSpan MultiplayerSessionConstants::MemberReservationTimeout()
	{
		return m_MemberReservationTimeout;
	}

	// Gets the MemberInactiveTimeout value as a TimeSpan.
	Windows::Foundation::TimeSpan MultiplayerSessionConstants::MemberInactiveTimeout()
	{
		return m_MemberInactiveTimeout;
	}

	// Gets the MemberReadyTimeout value as a TimeSpan.
	Windows::Foundation::TimeSpan MultiplayerSessionConstants::MemberReadyTimeout()
	{
		return m_MemberReadyTimeout;
	}

	// Gets the SessionEmptyTimeout value as a TimeSpan.
	Windows::Foundation::TimeSpan MultiplayerSessionConstants::SessionEmptyTimeout()
	{
		return m_SessionEmptyTimeout;
	}

	// Gets the ArbitrationTimeout value as a TimeSpan.
	Windows::Foundation::TimeSpan MultiplayerSessionConstants::ArbitrationTimeout()
	{
		return m_ArbitrationTimeout;
	}

	// Gets the ForfeitTimeout value as a TimeSpan.
	Windows::Foundation::TimeSpan MultiplayerSessionConstants::ForfeitTimeout()
	{
		return m_ForfeitTimeout;
	}

	// Get whether the session supports Connectivity capabilities.
	bool MultiplayerSessionConstants::CapabilitiesConnectivity()
	{
		return m_CapabilitiesConnectivity;
	}

	// Get whether the session supports SuppressPresenceActivityCheck capabilities.
	bool MultiplayerSessionConstants::CapabilitiesSuppressPresenceActivityCheck()
	{
		return m_CapabilitiesSuppressPresenceActivityCheck;
	}

	// Get whether the session supports Gameplay capabilities.
	bool MultiplayerSessionConstants::CapabilitiesGameplay()
	{
		return m_CapabilitiesGameplay;
	}

	// Get whether the session supports Large capabilities.
	bool MultiplayerSessionConstants::CapabilitiesLarge()
	{
		return m_CapabilitiesLarge;
	}

	// Get whether the session supports ConnectionRequiredForActiveMember capabilities.
	bool MultiplayerSessionConstants::CapabilitiesConnectionRequiredForActiveMember()
	{
		return m_CapabilitiesConnectionRequiredForActiveMember;
	}

	// Get whether the session supports Crossplay capabilities.
	bool MultiplayerSessionConstants::CapabilitiesCrossplay()
	{
		return m_CapabilitiesCrossplay;
	}

	// Get whether the session supports CapabilitiesUserAuthorizationStyle capabilities.
	bool MultiplayerSessionConstants::CapabilitiesUserAuthorizationStyle()
	{
		return m_CapabilitiesUserAuthorizationStyle;
	}

	// Get whether the session supports CapabilitiesTeam capabilities.
	bool MultiplayerSessionConstants::CapabilitiesTeam()
	{
		return m_CapabilitiesTeam;
	}

	// Get whether the session supports CapabilitiesSearchable capabilities.
	bool MultiplayerSessionConstants::CapabilitiesSearchable()
	{
		return m_CapabilitiesSearchable;
	}

	// Get whether the session supports CapabilitiesArbitration capabilities.
	bool MultiplayerSessionConstants::CapabilitiesArbitration()
	{
		return m_CapabilitiesArbitration;
	}

	// Get whether the MetricsLatency is enabled for the session. 
	bool MultiplayerSessionConstants::EnableMetricsLatency()
	{
		return m_EnableMetricsLatency;
	}

	// Get whether the MetricsBandwidthDown is enabled for the session.
	bool MultiplayerSessionConstants::EnableMetricsBandwidthDown()
	{
		return m_EnableMetricsBandwidthDown;
	}

	// Get whether the MetricsBandwidthUp is enabled for the session.
	bool MultiplayerSessionConstants::EnableMetricsBandwidthUp()
	{
		return m_EnableMetricsBandwidthUp;
	}
	
	// Get whether the MetricsCustom is enabled for this session.
	bool MultiplayerSessionConstants::EnableMetricsCustom()
	{
		return m_EnableMetricsCustom;
	}

	// TODO: This is most likely not correct.
	MultiplayerManagedInitialization MultiplayerSessionConstants::ManagedInitialization()
	{		
		return m_MultiplayerManagedInitialization;
	}

	// TODO: This is most likely not correct.
	MultiplayerMemberInitialization MultiplayerSessionConstants::MemberInitialization()
	{
		return m_MultiplayerMemberInitialization;
	}

	// TODO: This is most likely not correct.
	MultiplayerPeerToPeerRequirements MultiplayerSessionConstants::PeerToPeerRequirements()
	{
		return m_MultiplayerPeerToPeerRequirements;
	}

	// TODO: This is most likely not correct.
	MultiplayerPeerToHostRequirements MultiplayerSessionConstants::PeerToHostRequirements()
	{
		return m_MultiplayerPeerToHostRequirements;
	}

	hstring MultiplayerSessionConstants::MeasurementServerAddressesJson()
	{
		printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
	}
}