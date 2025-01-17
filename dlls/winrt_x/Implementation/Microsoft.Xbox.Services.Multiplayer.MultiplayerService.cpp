#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::event_token MultiplayerService::MultiplayerSessionChanged(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionChangeEventArgs> const& __param0)
    {
		printf("[MultiplayerService] MultiplayerSessionChanged called\n");
		return {};
    }
    void MultiplayerService::MultiplayerSessionChanged(winrt::event_token const& __param0) noexcept
    {
		printf("[MultiplayerService] MultiplayerSessionChanged called\n");
    }
    winrt::event_token MultiplayerService::MultiplayerSubscriptionLost(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSubscriptionLostEventArgs> const& __param0)
    {
		printf("[MultiplayerService] MultiplayerSubscriptionLost called\n");
        return {};
    }
    void MultiplayerService::MultiplayerSubscriptionLost(winrt::event_token const& __param0) noexcept
    {
		printf("[MultiplayerService] MultiplayerSubscriptionLost called\n");
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> MultiplayerService::WriteSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode)
    {
		printf("[MultiplayerService] WriteSessionAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionResult> MultiplayerService::TryWriteSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode)
    {
		printf("[MultiplayerService] TryWriteSessionAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> MultiplayerService::WriteSessionByHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId)
    {
		printf("[MultiplayerService] WriteSessionByHandleAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionResult> MultiplayerService::TryWriteSessionByHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession multiplayerSession, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionWriteMode multiplayerSessionWriteMode, hstring handleId)
    {
		printf("[MultiplayerService] TryWriteSessionByHandleAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> MultiplayerService::GetCurrentSessionAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference)
    {
		printf("[MultiplayerService] GetCurrentSessionAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession> MultiplayerService::GetCurrentSessionByHandleAsync(hstring handleId)
    {
		printf("[MultiplayerService] GetCurrentSessionByHandleAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> MultiplayerService::GetSessionsAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerGetSessionsRequest getSessionsRequest)
    {
		printf("[MultiplayerService] GetSessionsAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> MultiplayerService::GetSessionsAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, hstring xboxUserIdFilter, hstring keywordFilter, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems)
    {
		printf("[MultiplayerService] GetSessionsAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStates>> MultiplayerService::GetSessionsForUsersFilterAsync(hstring serviceConfigurationId, hstring sessionTemplateNameFilter, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIdsFilter, hstring keywordFilter, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility visibilityFilter, uint32_t contractVersionFilter, bool includePrivateSessions, bool includeReservations, bool includeInactiveSessions, uint32_t maxItems)
    {
		printf("[MultiplayerService] GetSessionsForUsersFilterAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncAction MultiplayerService::SetActivityAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference)
    {
		printf("[MultiplayerService] SetActivityAsync called\n");
        co_return;
    }
    winrt::Windows::Foundation::IAsyncOperation<hstring> MultiplayerService::SetTransferHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference targetSessionReference, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference originSessionReference)
    {
		printf("[MultiplayerService] SetTransferHandleAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncAction MultiplayerService::SetSearchHandleAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleRequest searchHandleRequest)
    {
		printf("[MultiplayerService] SetSearchHandleAsync called\n");
        co_return;
    }
    winrt::Windows::Foundation::IAsyncAction MultiplayerService::ClearActivityAsync(hstring serviceConfigurationId)
    {
		printf("[MultiplayerService] ClearActivityAsync called\n");
        co_return;
    }
    winrt::Windows::Foundation::IAsyncAction MultiplayerService::ClearSearchHandleAsync(hstring handleId)
    {
		printf("[MultiplayerService] ClearSearchHandleAsync called\n");
        co_return;
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> MultiplayerService::SendInvitesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId)
    {
		printf("[MultiplayerService] SendInvitesAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<hstring>> MultiplayerService::SendInvitesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds, uint32_t titleId, hstring contextStringId, hstring activationContext)
    {
		printf("[MultiplayerService] SendInvitesAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerActivityDetails>> MultiplayerService::GetActivitiesForSocialGroupAsync(hstring serviceConfigurationId, hstring socialGroupOwnerXboxUserId, hstring socialGroup)
    {
		printf("[MultiplayerService] GetActivitiesForSocialGroupAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerActivityDetails>> MultiplayerService::GetActivitiesForUsersAsync(hstring serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> xboxUserIds)
    {
		printf("[MultiplayerService] GetActivitiesForUsersAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleDetails>> MultiplayerService::GetSearchHandlesAsync(hstring serviceConfigurationId, hstring sessionTemplateName, hstring orderBy, bool orderAscending, hstring searchFilter)
    {
		printf("[MultiplayerService] GetSearchHandlesAsync called\n");
        co_await winrt::resume_background( );
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSearchHandleDetails>> MultiplayerService::GetSearchHandlesAsync(winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQuerySearchHandleRequest searchHandleRequest)
    {
		printf("[MultiplayerService] GetSearchHandlesAsync called\n");
        co_await winrt::resume_background( );
    }
    void MultiplayerService::EnableMultiplayerSubscriptions()
    {
		printf("[MultiplayerService] EnableMultiplayerSubscriptions called\n");
    }
    void MultiplayerService::DisableMultiplayerSubscriptions()
    {
		printf("[MultiplayerService] DisableMultiplayerSubscriptions called\n");
    }
    bool MultiplayerService::MultiplayerSubscriptionsEnabled()
    {
		printf("[MultiplayerService] MultiplayerSubscriptionsEnabled called\n");
        return true;
    }
}
