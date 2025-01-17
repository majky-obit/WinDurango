#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSession.g.cpp"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionProperties.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionRoleTypes.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext)
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] Constructor called 1 \n");
        return;
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, bool reserved, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] Constructor called 2 \n");
        return;
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] Constructor called 3 \n");
        return;
    }
    MultiplayerSession::MultiplayerSession(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference)
    {
        printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] Constructor called 4 \n");
        return;
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes MultiplayerSession::CompareMultiplayerSessions(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession const& currentSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession const& oldSession)
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus MultiplayerSession::ConvertHttpStatusToWriteSessionStatus(int32_t httpStatusCode)
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSession::MultiplayerCorrelationId()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSession::SearchHandleId()
    {
		throw hresult_not_implemented( );
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus MultiplayerSession::ArbitrationStatus()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::StartTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::DateOfNextTimer()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::DateOfSession()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerInitializationStage MultiplayerSession::InitializationStage()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSession::InitializingStageStartTime()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerSession::InitializingEpisode()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus MultiplayerSession::WriteStatus()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSession::HostCandidates()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSession::SessionReference()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionConstants MultiplayerSession::SessionConstants()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionProperties MultiplayerSession::SessionProperties()
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] SessionProperties called\n");
        return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerSessionProperties>( );
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRoleTypes MultiplayerSession::SessionRoleTypes()
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] SessionRoleTypes called\n");
        return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerSessionRoleTypes>( );
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> MultiplayerSession::Members()
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] Members called\n");
		return winrt::single_threaded_vector<Multiplayer::MultiplayerSessionMember>().GetView();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMatchmakingServer MultiplayerSession::MatchmakingServer()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionTournamentsServer MultiplayerSession::TournamentsServer()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionArbitrationServer MultiplayerSession::ArbitrationServer()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerSession::MembersAccepted()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSession::ServersJson()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::ServersJson(hstring const& value)
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSession::ETag()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes MultiplayerSession::SubscribedChangeTypes()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::CurrentUser()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSession::Branch()
    {
        throw hresult_not_implemented();
    }
    uint64_t MultiplayerSession::ChangeNumber()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::AddMemberReservation(hstring const& xboxUserId, hstring const& memberCustomConstantsJson, bool initializeRequested)
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join()
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] Join 1 called\n");
		return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerSessionMember>( );
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson)
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested)
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember MultiplayerSession::Join(hstring const& memberCustomConstantsJson, bool initializeRequested, bool joinWithActiveStatus)
    {
        printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] Join 4 called\n");
        return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerSessionMember>( );
        
    }
    void MultiplayerSession::SetVisibility(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& visibility)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMaxMembersInSession(uint32_t maxMembersInSession)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMutableRoleSettings(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> const& roleTypes)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetTimeouts(winrt::Windows::Foundation::TimeSpan const& memberReservedTimeout, winrt::Windows::Foundation::TimeSpan const& memberInactiveTimeout, winrt::Windows::Foundation::TimeSpan const& memberReadyTimeout, winrt::Windows::Foundation::TimeSpan const& sessionEmptyTimeout)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetArbitrationTimeouts(winrt::Windows::Foundation::TimeSpan const& arbitrationTimeout, winrt::Windows::Foundation::TimeSpan const& forfeitTimeout)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetQualityOfServiceConnectivityMetrics(bool enableLatencyMetric, bool enableBandwidthDownMetric, bool enableBandwidthUpMetric, bool enableCustomMetric)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetManagedInitialization(winrt::Windows::Foundation::TimeSpan const& joinTimeout, winrt::Windows::Foundation::TimeSpan const& measurementTimeout, winrt::Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMemberInitialization(winrt::Windows::Foundation::TimeSpan const& joinTimeout, winrt::Windows::Foundation::TimeSpan const& measurementTimeout, winrt::Windows::Foundation::TimeSpan const& evaluationTimeout, bool autoEvalute, uint32_t membersNeededToStart)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetPeerToPeerRequirements(winrt::Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthMinimumInKilobitsPerSecond)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetPeerToHostRequirements(winrt::Windows::Foundation::TimeSpan const& latencyMaximum, uint32_t bandwidthDownMinimumInKilobitsPerSecond, uint32_t bandwidthUpMinimumInKilobitsPerSecond, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayMetrics const& hostSelectionMetric)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMeasurementServerAddresses(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::QualityOfServiceServer> const& measurementServerAddresses)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCloudComputePackageJson(hstring const& sessionCloudComputePackageConstantsJson)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionCapabilities(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionCapabilities const& capabilities)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetInitializationStatus(bool initializationSucceeded)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetHostDeviceToken(hstring const& hostDeviceToken)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingServerConnectionPath(hstring const& serverConnectionPath)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetClosed(bool closed)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetLocked(bool locked)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetAllocateCloudCompute(bool allocateCloudCompute)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingResubmit(bool matchResubmit)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetServerConnectionStringCandidates(winrt::Windows::Foundation::Collections::IVectorView<hstring> const& serverConnectionStringCandidates)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionChangeSubscription(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeTypes const& changeTypes)
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] SetSessionChangeSubscription called\n");
    }
    void MultiplayerSession::Leave()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserStatus(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus const& status)
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] SetCurrentUserStatus called\n");
		m_currentUserStatus = status;
    }
    void MultiplayerSession::SetCurrentUserSecureDeviceAddressBase64(hstring const& value)
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSession] SetCurrentUserSecureDeviceAddressBase64 called\n");
		//m_userSecureDeviceAddress64 = value;
        //throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserRoleInfo(winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> const& roles)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserMembersInGroup(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> const& membersInGroup)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserQualityOfServiceMeasurements(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> const& measurements)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserQualityOfServiceServerMeasurementsJson(hstring const& valueJson)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserArbitrationResults(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> const& results)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetCurrentUserMemberCustomPropertyJson(hstring const& name, hstring const& valueJson)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::DeleteCurrentUserMemberCustomPropertyJson(hstring const& name)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetMatchmakingTargetSessionConstantsJson(hstring const& matchmakingTargetSessionConstants)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::SetSessionCustomPropertyJson(hstring const& name, hstring const& valueJson)
    {
        wprintf(L"Value of name: %ls\n", name.c_str());
        wprintf(L"Value of valueJson: %ls\n", valueJson.c_str());
        //throw hresult_not_implemented();
        return;
    }
    void MultiplayerSession::DeleteSessionCustomPropertyJson(hstring const& name)
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSession::_Init(winrt::Microsoft::Xbox::Services::XboxLiveContext const& xboxLiveContext, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference const& multiplayerSessionReference, uint32_t maxMembersInSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility const& multiplayerSessionVisibility, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& initiatorXboxUserIds, hstring const& sessionCustomConstantsJson)
    {
        throw hresult_not_implemented();
    }
}
