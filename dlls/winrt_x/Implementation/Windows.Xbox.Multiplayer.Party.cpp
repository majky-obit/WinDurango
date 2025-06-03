#include "pch.h"
#include "Windows.Xbox.Multiplayer.Party.h"
#include "Windows.Xbox.Multiplayer.Party.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    // Private event storage
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::GameSessionReadyEventArgs>> m_gameSessionReadyEvent;
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::PartyStateChangedEventArgs>> m_partyStateChangedEvent;
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::PartyRosterChangedEventArgs>> m_partyRosterChangedEvent;
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::MatchStatusChangedEventArgs>> m_matchStatusChangedEvent;
    winrt::event<winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::GamePlayersChangedEventArgs>> m_gamePlayersChangedEvent;

    winrt::Windows::Foundation::IAsyncAction Party::RegisterGameSessionAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        
        co_await winrt::resume_background( );
        Logger::Info("Game session registered successfully.\n");
        co_return;
    }
    winrt::Windows::Foundation::IAsyncAction Party::RegisterMatchSessionAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        
        co_await winrt::resume_background();
        Logger::Info("Match session registered successfully.\n");
        co_return;
    }

    winrt::Windows::Foundation::IAsyncAction Party::InviteToPartyAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Foundation::Collections::IVectorView<hstring> usersToInvite)
    {
        
        co_await winrt::resume_background();
        for (auto const& userId : usersToInvite)
        {
            printf("Inviting user: %ls\n", userId.c_str());
        }
        Logger::Info("Invitations sent successfully.\n");
        co_return;
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Multiplayer::PartyView> Party::GetPartyViewAsync()
    {
        
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::AddLocalUsersAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> localUsersToAdd)
    {
        
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::PullInactivePlayersAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::PullReservedPlayersAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayer>> Party::GetAvailableGamePlayersAsync(winrt::Windows::Xbox::System::User actingUser)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayerDeviceGroup>> Party::GetAvailableGamePlayersGroupedByDeviceAsync(winrt::Windows::Xbox::System::User actingUser)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::SwitchPartyTitleAsync(winrt::Windows::Xbox::System::User actingUser)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token Party::GameSessionReady(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::GameSessionReadyEventArgs> const& handler)
    {
        
        return m_gameSessionReadyEvent.add(handler);
    }
    void Party::GameSessionReady(winrt::event_token const& token) noexcept
    {
        
        m_gameSessionReadyEvent.remove(token);
    }
    winrt::event_token Party::PartyStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::PartyStateChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void Party::PartyStateChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token Party::PartyRosterChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::PartyRosterChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void Party::PartyRosterChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token Party::MatchStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::MatchStatusChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void Party::MatchStatusChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token Party::GamePlayersChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::GamePlayersChangedEventArgs> const& handler)
    {
		Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void Party::GamePlayersChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Multiplayer::PartyView> Party::GetPartyViewAsyncEx(winrt::Windows::Xbox::Multiplayer::PartyFlags flags)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::RemoveLocalUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> localUsersToRemove)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Party::PartyId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::DisassociateGameSessionAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReferenceToDisassociate)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::RegisterGameSessionCompareAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReferenceComparand)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::RegisterMatchSessionCompareAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReferenceComparand)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::UserPartyAssociation>> Party::GetUserPartyAssociationsAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Foundation::Collections::IVectorView<hstring> targetXboxUserIds)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Multiplayer::PartyView> Party::GetPartyViewByPartyIdAsync(winrt::Windows::Xbox::System::User actingUser, hstring partyId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::JoinPartyByIdAsync(winrt::Windows::Xbox::System::User actingUser, hstring partyId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::SessionJoinability Party::Joinability()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void Party::Joinability(winrt::Windows::Xbox::Multiplayer::SessionJoinability const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
