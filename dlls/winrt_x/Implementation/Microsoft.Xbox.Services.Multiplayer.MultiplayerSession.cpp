#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, bool reserved, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes MultiplayerSession::CompareMultiplayerSessions(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession const& currentSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession const& oldSession)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus MultiplayerSession::ConvertHttpStatusToWriteSessionStatus(int32_t httpStatusCode)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::MultiplayerCorrelationId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::SearchHandleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus MultiplayerSession::ArbitrationStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::StartTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::DateOfNextTimer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::DateOfSession()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerInitializationStage MultiplayerSession::InitializationStage()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::InitializingStageStartTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSession::InitializingEpisode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus MultiplayerSession::WriteStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSession::HostCandidates()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSession::SessionReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants MultiplayerSession::SessionConstants()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionProperties MultiplayerSession::SessionProperties()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRoleTypes MultiplayerSession::SessionRoleTypes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> MultiplayerSession::Members()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMatchmakingServer MultiplayerSession::MatchmakingServer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionTournamentsServer MultiplayerSession::TournamentsServer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionArbitrationServer MultiplayerSession::ArbitrationServer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSession::MembersAccepted()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::ServersJson()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::ServersJson(hstring const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::ETag()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes MultiplayerSession::SubscribedChangeTypes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::CurrentUser()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSession::Branch()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerSession::ChangeNumber()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson, bool initializeRequested)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested, bool joinWithActiveStatus)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetVisibility(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& visibility)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMaxMembersInSession(uint32_t maxMembersInSession)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMutableRoleSettings(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> const& roleTypes)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetTimeouts(winrt::Windows::Foundation::TimeSpan const& memberReservedTimeout, winrt::Windows::Foundation::TimeSpan const& memberInactiveTimeout, winrt::Windows::Foundation::TimeSpan const& memberReadyTimeout, winrt::Windows::Foundation::TimeSpan const& sessionEmptyTimeout)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetArbitrationTimeouts(winrt::Windows::Foundation::TimeSpan const& arbitrationTimeout, winrt::Windows::Foundation::TimeSpan const& forfeitTimeout)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetQualityOfServiceConnectivityMetrics(bool enableLatencyMetric, bool enableBandwidthDownMetric, bool enableBandwidthUpMetric, bool enableCustomMetric)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetManagedInitialization(winrt::Windows::Foundation::TimeSpan const& joinTimeout, winrt::Windows::Foundation::TimeSpan const& measurementTimeout, winrt::Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMemberInitialization(winrt::Windows::Foundation::TimeSpan const& joinTimeout, winrt::Windows::Foundation::TimeSpan const& measurementTimeout, winrt::Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetPeerToPeerRequirements(winrt::Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthMinimumInKilobitsPerSecond)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetPeerToHostRequirements(winrt::Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthDownMinimumInKilobitsPerSecond, uint32_t bandwidthUpMinimumInKilobitsPerSecond, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayMetrics const& hostSelectionMetric)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMeasurementServerAddresses(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::QualityOfServiceServer> const& measurementServerAddresses)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCloudComputePackageJson(hstring const& sessionCloudComputePackageConstantsJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionCapabilities(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionCapabilities const& capabilities)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetInitializationStatus(bool initializationSucceeded)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetHostDeviceToken(hstring const& hostDeviceToken)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingServerConnectionPath(hstring const& serverConnectionPath)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetClosed(bool closed)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetLocked(bool locked)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetAllocateCloudCompute(bool allocateCloudCompute)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingResubmit(bool matchResubmit)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetServerConnectionStringCandidates(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& serverConnectionStringCandidates)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionChangeSubscription(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes const& changeTypes)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::Leave()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserStatus(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus const& status)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserSecureDeviceAddressBase64(hstring const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserRoleInfo(winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> const& roles)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserMembersInGroup(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> const& membersInGroup)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserQualityOfServiceMeasurements(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> const& measurements)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserQualityOfServiceServerMeasurementsJson(hstring const& valueJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserArbitrationResults(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> const& results)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserMemberCustomPropertyJson(hstring const& name, hstring const& valueJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::DeleteCurrentUserMemberCustomPropertyJson(hstring const& name)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingTargetSessionConstantsJson(hstring const& matchmakingTargetSessionConstants)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionCustomPropertyJson(hstring const& name, hstring const& valueJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::DeleteSessionCustomPropertyJson(hstring const& name)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSession::_Init(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
