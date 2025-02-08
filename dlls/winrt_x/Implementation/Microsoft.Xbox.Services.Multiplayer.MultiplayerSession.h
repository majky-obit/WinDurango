#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	struct MultiplayerSession : MultiplayerSessionT<MultiplayerSession>
	{
		MultiplayerSession() = default;

		MultiplayerSession(XboxLiveContext const& xboxLiveContext);
		MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, bool reserved, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);
		MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);
		MultiplayerSession(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference);
		static MultiplayerSessionChangeTypes CompareMultiplayerSessions(Multiplayer::MultiplayerSession const& currentSession, Multiplayer::MultiplayerSession const& oldSession);
		static WriteSessionStatus ConvertHttpStatusToWriteSessionStatus(int32_t httpStatusCode);
		hstring MultiplayerCorrelationId();
		hstring SearchHandleId();
		Tournaments::TournamentArbitrationStatus ArbitrationStatus();
		Windows::Foundation::DateTime StartTime();
		Windows::Foundation::DateTime DateOfNextTimer();
		Windows::Foundation::DateTime DateOfSession();
		MultiplayerInitializationStage InitializationStage();
		Windows::Foundation::DateTime InitializingStageStartTime();
		uint32_t InitializingEpisode();
		WriteSessionStatus WriteStatus();
		Windows::Foundation::Collections::IVectorView<hstring> HostCandidates();
		MultiplayerSessionReference SessionReference();
		MultiplayerSessionConstants SessionConstants();
		MultiplayerSessionProperties SessionProperties();
		MultiplayerSessionRoleTypes SessionRoleTypes();
		Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> Members();
		MultiplayerSessionMatchmakingServer MatchmakingServer();
		MultiplayerSessionTournamentsServer TournamentsServer();
		MultiplayerSessionArbitrationServer ArbitrationServer();
		uint32_t MembersAccepted();
		hstring ServersJson();
		void ServersJson(hstring const& value);
		hstring ETag();
		MultiplayerSessionChangeTypes SubscribedChangeTypes();
		MultiplayerSessionMember CurrentUser();
		hstring Branch();
		uint64_t ChangeNumber();
		void AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson);
		void AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson, bool initializeRequested);
		MultiplayerSessionMember Join();
		MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson);
		MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson, bool initializeRequested);
		MultiplayerSessionMember Join(hstring const& memberCustomConstantsJson, bool initializeRequested, bool joinWithActiveStatus);
		void SetVisibility(MultiplayerSessionVisibility const& visibility);
		void SetMaxMembersInSession(uint32_t maxMembersInSession);
		void SetMutableRoleSettings(Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> const& roleTypes);
		void SetTimeouts(Windows::Foundation::TimeSpan const& memberReservedTimeout, Windows::Foundation::TimeSpan const& memberInactiveTimeout, Windows::Foundation::TimeSpan const& memberReadyTimeout, Windows::Foundation::TimeSpan const& sessionEmptyTimeout);
		void SetArbitrationTimeouts(Windows::Foundation::TimeSpan const& arbitrationTimeout, Windows::Foundation::TimeSpan const& forfeitTimeout);
		void SetQualityOfServiceConnectivityMetrics(bool enableLatencyMetric, bool enableBandwidthDownMetric, bool enableBandwidthUpMetric, bool enableCustomMetric);
		void SetManagedInitialization(Windows::Foundation::TimeSpan const& joinTimeout, Windows::Foundation::TimeSpan const& measurementTimeout, Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart);
		void SetMemberInitialization(Windows::Foundation::TimeSpan const& joinTimeout, Windows::Foundation::TimeSpan const& measurementTimeout, Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart);
		void SetPeerToPeerRequirements(Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthMinimumInKilobitsPerSecond);
		void SetPeerToHostRequirements(Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthDownMinimumInKilobitsPerSecond, uint32_t bandwidthUpMinimumInKilobitsPerSecond, MultiplayMetrics const& hostSelectionMetric);
		void SetMeasurementServerAddresses(Windows::Foundation::Collections::IVectorView<GameServerPlatform::QualityOfServiceServer> const& measurementServerAddresses);
		void SetCloudComputePackageJson(hstring const& sessionCloudComputePackageConstantsJson);
		void SetSessionCapabilities(MultiplayerSessionCapabilities const& capabilities);
		void SetInitializationStatus(bool initializationSucceeded);
		void SetHostDeviceToken(hstring const& hostDeviceToken);
		void SetMatchmakingServerConnectionPath(hstring const& serverConnectionPath);
		void SetClosed(bool closed);
		void SetLocked(bool locked);
		void SetAllocateCloudCompute(bool allocateCloudCompute);
		void SetMatchmakingResubmit(bool matchResubmit);
		void SetServerConnectionStringCandidates(Windows::Foundation::Collections::IVectorView<hstring> const& serverConnectionStringCandidates);
		void SetSessionChangeSubscription(MultiplayerSessionChangeTypes const& changeTypes);
		void Leave();
		void SetCurrentUserStatus(MultiplayerSessionMemberStatus const& status);
		void SetCurrentUserSecureDeviceAddressBase64(hstring const& value);
		void SetCurrentUserRoleInfo(Windows::Foundation::Collections::IMapView<hstring, hstring> const& roles);
		void SetCurrentUserMembersInGroup(Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> const& membersInGroup);
		void SetCurrentUserQualityOfServiceMeasurements(Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> const& measurements);
		void SetCurrentUserQualityOfServiceServerMeasurementsJson(hstring const& valueJson);
		void SetCurrentUserArbitrationResults(Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> const& results);
		void SetCurrentUserMemberCustomPropertyJson(hstring const& name, hstring const& valueJson);
		void DeleteCurrentUserMemberCustomPropertyJson(hstring const& name);
		void SetMatchmakingTargetSessionConstantsJson(hstring const& matchmakingTargetSessionConstants);
		void SetSessionCustomPropertyJson(hstring const& name, hstring const& valueJson);
		void DeleteSessionCustomPropertyJson(hstring const& name);
		void _Init(XboxLiveContext const& xboxLiveContext, MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, MultiplayerSessionVisibility const& multiplayerSessionVisibility, Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson);  // NOLINT(bugprone-reserved-identifier)

	private:
		XboxLiveContext m_xboxLiveContext{ nullptr };

		uint32_t m_maxMembersInSession{ 1 };

		bool m_reserved{ false };

		MultiplayerSessionReference m_multiplayerSessionReference{ nullptr };
		MultiplayerSessionVisibility m_multiplayerSessionVisibility{ MultiplayerSessionVisibility::Private };

		Windows::Foundation::Collections::IVectorView<hstring> m_initiatorXboxUserIds{};

		hstring m_sessionCustomConstantsJson = MAKE_HSTRING("");
		hstring m_multiplayerCorrelationId = MAKE_HSTRING("");
		hstring m_searchHandleId = MAKE_HSTRING("");

		Tournaments::TournamentArbitrationStatus m_arbitrationStatus = Tournaments::TournamentArbitrationStatus::Complete;

		Windows::Foundation::DateTime m_startTime = Windows::Foundation::DateTime::clock::now();
		Windows::Foundation::DateTime m_dateOfNextTimer = Windows::Foundation::DateTime::clock::now();
		Windows::Foundation::DateTime m_dateOfSession = Windows::Foundation::DateTime::clock::now();

		MultiplayerInitializationStage m_initializationStage = MultiplayerInitializationStage::None;

		Windows::Foundation::DateTime m_initializingStageStartTime = Windows::Foundation::DateTime::clock::now();

		uint32_t m_initializationEpisode{ 0 };

		WriteSessionStatus m_writeStatus = WriteSessionStatus::Created;

		Windows::Foundation::Collections::IVectorView<hstring> m_hostCandidates{ nullptr };

		MultiplayerSessionConstants m_sessionConstants{ nullptr };
		MultiplayerSessionProperties m_sessionProperties{ nullptr };
		MultiplayerSessionRoleTypes m_sessionRoleTypes{ nullptr };

		Windows::Foundation::Collections::IVectorView<MultiplayerSessionMember> m_members{ nullptr };

		MultiplayerSessionMatchmakingServer m_matchmakingServer{ nullptr };
		MultiplayerSessionTournamentsServer m_tournamentsServer{ nullptr };
		MultiplayerSessionArbitrationServer m_arbitrationServer{ nullptr };

		hstring m_serversJson = MAKE_HSTRING("");
		uint32_t m_membersAccepted{ 0 };
		hstring m_etag = MAKE_HSTRING("");

		MultiplayerSessionChangeTypes m_subscribedChangeTypes = MultiplayerSessionChangeTypes::None;
		MultiplayerSessionMember m_currentUser{ nullptr };

		hstring m_branch = MAKE_HSTRING("");
		uint64_t m_changeNumber{ 0 };

		MultiplayerSessionVisibility m_visibility = MultiplayerSessionVisibility::Private;

		Windows::Foundation::TimeSpan m_memberReservedTimeout = Windows::Foundation::TimeSpan::zero();
		Windows::Foundation::TimeSpan m_memberInactiveTimeout = Windows::Foundation::TimeSpan::zero();
		Windows::Foundation::TimeSpan m_memberReadyTimeout = Windows::Foundation::TimeSpan::zero();
		Windows::Foundation::TimeSpan m_sessionEmptyTimeout = Windows::Foundation::TimeSpan::zero();
		Windows::Foundation::TimeSpan m_arbitrationTimeout = Windows::Foundation::TimeSpan::zero();
		Windows::Foundation::TimeSpan m_forfeitTimeout = Windows::Foundation::TimeSpan::zero();

		bool m_enableLatencyMetric{ false };
		bool m_enableBandwidthDownMetric{ false };
		bool m_enableBandwidthUpMetric{ false };
		bool m_enableCustomMetric{ false };

		Windows::Foundation::TimeSpan m_joinTimeout = Windows::Foundation::TimeSpan::zero();
		Windows::Foundation::TimeSpan m_measurementTimeout = Windows::Foundation::TimeSpan::zero();
		Windows::Foundation::TimeSpan m_evaluationTimeout = Windows::Foundation::TimeSpan::zero();

		bool m_autoEvalute{ false };
		uint32_t m_membersNeededToStart{ 1 };

		Windows::Foundation::TimeSpan m_latencyMaximum = Windows::Foundation::TimeSpan::zero();

		uint32_t m_bandwidthMinimumInKilobitsPerSecond{ 0 };
		uint32_t m_bandwidthDownMinimumInKilobitsPerSecond{ 0 };
		uint32_t m_bandwidthUpMinimumInKilobitsPerSecond{ 0 };

		MultiplayMetrics m_hostSelectionMetric = MultiplayMetrics::BandwidthDown;

		Windows::Foundation::Collections::IVectorView<GameServerPlatform::QualityOfServiceServer> m_measurementServerAddresses{ nullptr };

		hstring m_sessionCloudComputePackageConstantsJson = MAKE_HSTRING("");

		MultiplayerSessionCapabilities m_capabilities{};

		bool m_initializedSucceeded{ false };
		hstring m_hostDeviceToken = MAKE_HSTRING("");
		hstring m_serverConnectionPath = MAKE_HSTRING("127.0.0.1");
		bool m_closed{ false };
		bool m_locked{ false };
		bool m_allocateCloudCompute{ false };
		bool m_matchResubmit{ false };

		Windows::Foundation::Collections::IVectorView<hstring> m_serverConnectionStringCandidates{ nullptr };

		MultiplayerSessionChangeTypes m_changeTypes = MultiplayerSessionChangeTypes::None;
		MultiplayerSessionMemberStatus m_currentUserStatus = MultiplayerSessionMemberStatus::Active;

		hstring m_userSecureDeviceAddress64;

		Windows::Foundation::Collections::IMapView<hstring, hstring> m_roles{ nullptr };
		Windows::Foundation::Collections::IVectorView<Multiplayer::MultiplayerSessionMember> m_membersInGroup{ nullptr };
		Windows::Foundation::Collections::IVectorView<MultiplayerQualityOfServiceMeasurements> m_qualityOfServiceMeasurements{ nullptr };

		hstring m_qualityOfServiceServerMeasurementsJson = MAKE_HSTRING("");

		Windows::Foundation::Collections::IMapView<hstring, Tournaments::TournamentTeamResult> m_arbitrationResults{ nullptr };

	};
}
namespace winrt::Microsoft::Xbox::Services::Multiplayer::factory_implementation
{
	struct MultiplayerSession : MultiplayerSessionT<MultiplayerSession, implementation::MultiplayerSession>
	{
	};
}
