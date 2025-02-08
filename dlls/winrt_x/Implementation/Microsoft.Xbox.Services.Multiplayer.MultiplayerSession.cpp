#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.g.cpp"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionRoleTypes.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	MultiplayerSession::MultiplayerSession(XboxLiveContext const& xboxLiveContext)
	{
		LOG_FUNCTION_NAME();

		m_xboxLiveContext = xboxLiveContext;
	}

	MultiplayerSession::MultiplayerSession(XboxLiveContext const& xboxLiveContext, 
		MultiplayerSessionReference const& multiplayerSessionReference, 
		uint32_t, 
		bool reserved, 
		MultiplayerSessionVisibility const& multiplayerSessionVisibility, 
		Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, 
		hstring const& sessionCustomConstantsJson)
	{
		LOG_FUNCTION_NAME();

		m_xboxLiveContext = xboxLiveContext;
		m_reserved = reserved;
		m_multiplayerSessionReference = multiplayerSessionReference;
		m_multiplayerSessionVisibility = multiplayerSessionVisibility;
		m_initiatorXboxUserIds = initiatorXboxUserIds;
		m_sessionCustomConstantsJson = sessionCustomConstantsJson;

	}

	MultiplayerSession::MultiplayerSession(XboxLiveContext const& xboxLiveContext, 
		MultiplayerSessionReference const& multiplayerSessionReference, 
		uint32_t maxMembersInSession, 
		MultiplayerSessionVisibility const& multiplayerSessionVisibility, 
		Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, 
		hstring const& sessionCustomConstantsJson)
	{
		LOG_FUNCTION_NAME();

		m_xboxLiveContext = xboxLiveContext;
		m_maxMembersInSession = maxMembersInSession;
		m_multiplayerSessionReference = multiplayerSessionReference;
		m_multiplayerSessionVisibility = multiplayerSessionVisibility;
		m_initiatorXboxUserIds = initiatorXboxUserIds;
		m_sessionCustomConstantsJson = sessionCustomConstantsJson;
	}

	MultiplayerSession::MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference)
	{
		LOG_FUNCTION_NAME();

		m_xboxLiveContext = xboxLiveContext;
		m_multiplayerSessionReference = multiplayerSessionReference;
	}

	// TODO: Compare every field of the MultiplayerSession object and return the differences.
	MultiplayerSessionChangeTypes MultiplayerSession::CompareMultiplayerSessions(Multiplayer::MultiplayerSession const& currentSession, 
		Multiplayer::MultiplayerSession const& oldSession)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();

		if (currentSession == nullptr || oldSession == nullptr)
			throw std::invalid_argument("currentSession and oldSession cannot be null");
		

		return MultiplayerSessionChangeTypes::None;
	}

	// TODO: Convert the HTTP status code to a WriteSessionStatus enum.
	WriteSessionStatus MultiplayerSession::ConvertHttpStatusToWriteSessionStatus(int32_t httpStatusCode)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();

		switch (httpStatusCode)
		{
		default:
			return WriteSessionStatus::Unknown;
		}
	}

	hstring MultiplayerSession::MultiplayerCorrelationId()
	{
		LOG_FUNCTION_NAME();

		return m_multiplayerCorrelationId;
	}

	hstring MultiplayerSession::SearchHandleId()
	{
		LOG_FUNCTION_NAME( );

		return m_searchHandleId;
	}

	Tournaments::TournamentArbitrationStatus MultiplayerSession::ArbitrationStatus()
	{
		LOG_FUNCTION_NAME();

		return m_arbitrationStatus;
	}

	Windows::Foundation::DateTime MultiplayerSession::StartTime()
	{
		LOG_FUNCTION_NAME();

		return m_startTime;
	}

	Windows::Foundation::DateTime MultiplayerSession::DateOfNextTimer()
	{
		LOG_FUNCTION_NAME();

		return m_dateOfNextTimer;
	}

	Windows::Foundation::DateTime MultiplayerSession::DateOfSession()
	{
		LOG_FUNCTION_NAME();

		return m_dateOfSession;
	}

	MultiplayerInitializationStage MultiplayerSession::InitializationStage()
	{
		LOG_FUNCTION_NAME();

		return m_initializationStage;
	}

	Windows::Foundation::DateTime MultiplayerSession::InitializingStageStartTime()
	{
		LOG_FUNCTION_NAME();

		return m_initializingStageStartTime;
	}

	uint32_t MultiplayerSession::InitializingEpisode()
	{
		LOG_FUNCTION_NAME();

		return m_initializationEpisode;
	}

	WriteSessionStatus MultiplayerSession::WriteStatus()
	{
		LOG_FUNCTION_NAME();

		return m_writeStatus;
	}

	Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSession::HostCandidates()
	{
		LOG_FUNCTION_NAME();

		return m_hostCandidates;
	}

	MultiplayerSessionReference MultiplayerSession::SessionReference()
	{
		LOG_FUNCTION_NAME();

		return m_multiplayerSessionReference;
	}

	MultiplayerSessionConstants MultiplayerSession::SessionConstants()
	{
		LOG_FUNCTION_NAME();

		return m_sessionConstants;
	}

	Multiplayer::MultiplayerSessionProperties MultiplayerSession::SessionProperties()
	{
		LOG_FUNCTION_NAME();

		return m_sessionProperties;
	}

	Multiplayer::MultiplayerSessionRoleTypes MultiplayerSession::SessionRoleTypes()
	{
		LOG_FUNCTION_NAME();

		return m_sessionRoleTypes;
	}

	Windows::Foundation::Collections::IVectorView<Multiplayer::MultiplayerSessionMember> MultiplayerSession::Members()
	{
		LOG_FUNCTION_NAME();

		return m_members;
	}

	MultiplayerSessionMatchmakingServer MultiplayerSession::MatchmakingServer()
	{
		LOG_FUNCTION_NAME();

		return m_matchmakingServer;
	}

	MultiplayerSessionTournamentsServer MultiplayerSession::TournamentsServer()
	{
		LOG_FUNCTION_NAME();

		return m_tournamentsServer;
	}

	MultiplayerSessionArbitrationServer MultiplayerSession::ArbitrationServer()
	{
		LOG_FUNCTION_NAME();

		return m_arbitrationServer;
	}

	uint32_t MultiplayerSession::MembersAccepted()
	{
		LOG_FUNCTION_NAME();

		return m_membersAccepted;
	}

	hstring MultiplayerSession::ServersJson()
	{
		LOG_FUNCTION_NAME();

		return m_serversJson;
	}

	void MultiplayerSession::ServersJson(hstring const& value)
	{
		LOG_FUNCTION_NAME();

		m_serversJson = value;
	}

	hstring MultiplayerSession::ETag()
	{
		LOG_FUNCTION_NAME();

		return m_etag;
	}

	MultiplayerSessionChangeTypes MultiplayerSession::SubscribedChangeTypes()
	{
		LOG_FUNCTION_NAME();

		return m_subscribedChangeTypes;
	}

	Multiplayer::MultiplayerSessionMember MultiplayerSession::CurrentUser()
	{
		LOG_FUNCTION_NAME();

		return m_currentUser;
	}

	hstring MultiplayerSession::Branch()
	{
		LOG_FUNCTION_NAME();

		return m_branch;
	}

	uint64_t MultiplayerSession::ChangeNumber()
	{
		LOG_FUNCTION_NAME();

		return m_changeNumber;
	}


	// TODO: We need to implement this function.
	void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	// TODO: We need to implement this function.
	void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson, bool initializeRequested)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	Multiplayer::MultiplayerSessionMember MultiplayerSession::Join()
	{
		LOG_FUNCTION_NAME();

		return m_currentUser;
	}

	Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson)
	{
		LOG_FUNCTION_NAME();

		return m_currentUser;
	}

	Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested)
	{
		LOG_FUNCTION_NAME();

		return m_currentUser;
	}

	Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, 
		bool initializeRequested, 
		bool joinWithActiveStatus)
	{
		LOG_FUNCTION_NAME();

		return m_currentUser;
	}

	void MultiplayerSession::SetVisibility(MultiplayerSessionVisibility const& visibility)
	{
		LOG_FUNCTION_NAME();

		m_visibility = visibility;
	}

	void MultiplayerSession::SetMaxMembersInSession(uint32_t maxMembersInSession)
	{
		LOG_FUNCTION_NAME();

		m_maxMembersInSession = maxMembersInSession;
	}

	// TODO: We will need to implement this function.
	void MultiplayerSession::SetMutableRoleSettings(Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> const& roleTypes)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	void MultiplayerSession::SetTimeouts(Windows::Foundation::TimeSpan const& memberReservedTimeout, 
		Windows::Foundation::TimeSpan const& memberInactiveTimeout, 
		Windows::Foundation::TimeSpan const& memberReadyTimeout, 
		Windows::Foundation::TimeSpan const& sessionEmptyTimeout)
	{
		LOG_FUNCTION_NAME();

		m_memberReservedTimeout = memberReservedTimeout;
		m_memberInactiveTimeout = memberInactiveTimeout;
		m_memberReadyTimeout = memberReadyTimeout;
		m_sessionEmptyTimeout = sessionEmptyTimeout;
	}

	void MultiplayerSession::SetArbitrationTimeouts(
		Windows::Foundation::TimeSpan const& arbitrationTimeout, 
		Windows::Foundation::TimeSpan const& forfeitTimeout)
	{
		LOG_FUNCTION_NAME();

		m_arbitrationTimeout = arbitrationTimeout;
		m_forfeitTimeout = forfeitTimeout;
	}

	void MultiplayerSession::SetQualityOfServiceConnectivityMetrics(bool enableLatencyMetric, 
		bool enableBandwidthDownMetric, 
		bool enableBandwidthUpMetric, 
		bool enableCustomMetric)
	{
		LOG_FUNCTION_NAME();

		m_enableLatencyMetric = enableLatencyMetric;
		m_enableBandwidthDownMetric = enableBandwidthDownMetric;
		m_enableBandwidthUpMetric = enableBandwidthUpMetric;
		m_enableCustomMetric = enableCustomMetric;
	}

	void MultiplayerSession::SetManagedInitialization(
		Windows::Foundation::TimeSpan const& joinTimeout, 
		Windows::Foundation::TimeSpan const& measurementTimeout, 
		Windows::Foundation::TimeSpan const& evaluationTimeout,
		bool autoEvalute, 
		uint32_t membersNeededToStart)
	{
		LOG_FUNCTION_NAME();

		m_joinTimeout = joinTimeout;
		m_measurementTimeout = measurementTimeout;
		m_evaluationTimeout = evaluationTimeout;
		m_autoEvalute = autoEvalute;
		m_membersNeededToStart = membersNeededToStart;
	}

	void MultiplayerSession::SetMemberInitialization(
		Windows::Foundation::TimeSpan const& joinTimeout, 
		Windows::Foundation::TimeSpan const& measurementTimeout, 
		Windows::Foundation::TimeSpan const& evaluationTimeout, 
		bool autoEvalute, 
		uint32_t membersNeededToStart)
	{
		LOG_FUNCTION_NAME();

		m_joinTimeout = joinTimeout;
		m_measurementTimeout = measurementTimeout;
		m_evaluationTimeout = evaluationTimeout;
		m_autoEvalute = autoEvalute;
		m_membersNeededToStart = membersNeededToStart;
	}

	void MultiplayerSession::SetPeerToPeerRequirements(
		Windows::Foundation::TimeSpan const& latencyMaximum, 
		uint32_t bandwidthMinimumInKilobitsPerSecond)
	{
		LOG_FUNCTION_NAME();

		m_latencyMaximum = latencyMaximum;
		m_bandwidthMinimumInKilobitsPerSecond = bandwidthMinimumInKilobitsPerSecond;
	}

	void MultiplayerSession::SetPeerToHostRequirements(
		Windows::Foundation::TimeSpan const& latencyMaximum, 
		uint32_t bandwidthDownMinimumInKilobitsPerSecond, 
		uint32_t bandwidthUpMinimumInKilobitsPerSecond, 
		MultiplayMetrics const& hostSelectionMetric)
	{
		LOG_FUNCTION_NAME();

		m_latencyMaximum = latencyMaximum;
		m_bandwidthDownMinimumInKilobitsPerSecond = bandwidthDownMinimumInKilobitsPerSecond;
		m_bandwidthUpMinimumInKilobitsPerSecond = bandwidthUpMinimumInKilobitsPerSecond;
		m_hostSelectionMetric = hostSelectionMetric;
	}

	void MultiplayerSession::SetMeasurementServerAddresses(
		Windows::Foundation::Collections::IVectorView<GameServerPlatform::QualityOfServiceServer> const& measurementServerAddresses)
	{
		LOG_FUNCTION_NAME();

		m_measurementServerAddresses = measurementServerAddresses;
	}

	void MultiplayerSession::SetCloudComputePackageJson(hstring const& sessionCloudComputePackageConstantsJson)
	{
		LOG_FUNCTION_NAME();

		m_sessionCloudComputePackageConstantsJson = sessionCloudComputePackageConstantsJson;
	}

	void MultiplayerSession::SetSessionCapabilities(MultiplayerSessionCapabilities const& capabilities)
	{
		LOG_FUNCTION_NAME();

		m_capabilities = capabilities;
	}

	void MultiplayerSession::SetInitializationStatus(bool initializationSucceeded)
	{
		LOG_FUNCTION_NAME();

		m_initializedSucceeded = initializationSucceeded;
	}

	void MultiplayerSession::SetHostDeviceToken(hstring const& hostDeviceToken)
	{
		LOG_FUNCTION_NAME();

		m_hostDeviceToken = hostDeviceToken;
	}

	void MultiplayerSession::SetMatchmakingServerConnectionPath(hstring const& serverConnectionPath)
	{
		LOG_FUNCTION_NAME();

		m_serverConnectionPath = serverConnectionPath;
	}

	void MultiplayerSession::SetClosed(bool closed)
	{
		LOG_FUNCTION_NAME();

		m_closed = closed;
	}

	void MultiplayerSession::SetLocked(bool locked)
	{
		LOG_FUNCTION_NAME();

		m_locked = locked;
	}

	void MultiplayerSession::SetAllocateCloudCompute(bool allocateCloudCompute)
	{
		LOG_FUNCTION_NAME();

		m_allocateCloudCompute = allocateCloudCompute;
	}

	void MultiplayerSession::SetMatchmakingResubmit(bool matchResubmit)
	{
		LOG_FUNCTION_NAME();

		m_matchResubmit = matchResubmit;
	}

	void MultiplayerSession::SetServerConnectionStringCandidates(
		Windows::Foundation::Collections::IVectorView<hstring> const& serverConnectionStringCandidates)
	{
		LOG_FUNCTION_NAME();

		m_serverConnectionStringCandidates = serverConnectionStringCandidates;
	}

	void MultiplayerSession::SetSessionChangeSubscription(MultiplayerSessionChangeTypes const& changeTypes)
	{
		LOG_FUNCTION_NAME();

		m_changeTypes = changeTypes;
	}

	// TODO: We need to implement this function.
	void MultiplayerSession::Leave()
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	void MultiplayerSession::SetCurrentUserStatus(MultiplayerSessionMemberStatus const& status)
	{
		LOG_FUNCTION_NAME();

		m_currentUserStatus = status;
	}

	void MultiplayerSession::SetCurrentUserSecureDeviceAddressBase64(hstring const& value)
	{
		LOG_FUNCTION_NAME();

		m_userSecureDeviceAddress64 = value;
	}

	void MultiplayerSession::SetCurrentUserRoleInfo(Windows::Foundation::Collections::IMapView<hstring, hstring> const& roles)
	{
		LOG_FUNCTION_NAME();

		m_roles = roles;
	}

	void MultiplayerSession::SetCurrentUserMembersInGroup(
		Windows::Foundation::Collections::IVectorView<Multiplayer::MultiplayerSessionMember> const& membersInGroup)
	{
		LOG_FUNCTION_NAME();

		m_membersInGroup = membersInGroup;
	}

	void MultiplayerSession::SetCurrentUserQualityOfServiceMeasurements(
		Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> const& measurements)
	{
		LOG_FUNCTION_NAME();

		m_qualityOfServiceMeasurements = measurements;
	}

	void MultiplayerSession::SetCurrentUserQualityOfServiceServerMeasurementsJson(hstring const& valueJson)
	{
		LOG_FUNCTION_NAME();

		m_qualityOfServiceServerMeasurementsJson = valueJson;
	}

	void MultiplayerSession::SetCurrentUserArbitrationResults(
		Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> const& results)
	{
		LOG_FUNCTION_NAME();

		m_arbitrationResults = results;
	}

	// TODO: We need to implement this function.
	void MultiplayerSession::SetCurrentUserMemberCustomPropertyJson(hstring const& name, hstring const& valueJson)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	// TODO: We need to implement this function.
	void MultiplayerSession::DeleteCurrentUserMemberCustomPropertyJson(hstring const& name)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	// TODO: We need to implement this function.
	void MultiplayerSession::SetMatchmakingTargetSessionConstantsJson(hstring const& matchmakingTargetSessionConstants)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	// TODO: We need to implement this function.
	void MultiplayerSession::SetSessionCustomPropertyJson(hstring const& name, hstring const& valueJson)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	// TODO: We need to implement this function.
	void MultiplayerSession::DeleteSessionCustomPropertyJson(hstring const& name)
	{
		LOG_FUNCTION_NAME();

		PRINT_UNIMPLEMENTED_FUNCTION();
	}

	void MultiplayerSession::_Init(XboxLiveContext const& xboxLiveContext, 
		MultiplayerSessionReference const& multiplayerSessionReference, 
		uint32_t maxMembersInSession, 
		MultiplayerSessionVisibility const& multiplayerSessionVisibility, 
		Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, 
		hstring const& sessionCustomConstantsJson)
	{
		LOG_FUNCTION_NAME();

		m_xboxLiveContext = xboxLiveContext;
		m_maxMembersInSession = maxMembersInSession;
		m_multiplayerSessionReference = multiplayerSessionReference;
		m_multiplayerSessionVisibility = multiplayerSessionVisibility;
		m_initiatorXboxUserIds = initiatorXboxUserIds;
		m_sessionCustomConstantsJson = sessionCustomConstantsJson;
	}
}
