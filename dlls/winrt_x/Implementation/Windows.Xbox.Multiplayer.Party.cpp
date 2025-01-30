#include "pch.h"
#include "Windows.Xbox.Multiplayer.Party.h"
#include "Windows.Xbox.Multiplayer.Party.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::IAsyncAction Party::RegisterGameSessionAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::RegisterMatchSessionAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::InviteToPartyAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Foundation::Collections::IVectorView<hstring> usersToInvite)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Multiplayer::PartyView> Party::GetPartyViewAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::AddLocalUsersAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> localUsersToAdd)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::PullInactivePlayersAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::PullReservedPlayersAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayer>> Party::GetAvailableGamePlayersAsync(winrt::Windows::Xbox::System::User actingUser)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayerDeviceGroup>> Party::GetAvailableGamePlayersGroupedByDeviceAsync(winrt::Windows::Xbox::System::User actingUser)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::SwitchPartyTitleAsync(winrt::Windows::Xbox::System::User actingUser)
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Party::GameSessionReady(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::GameSessionReadyEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Party::GameSessionReady(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Party::PartyStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::PartyStateChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Party::PartyStateChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Party::PartyRosterChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::PartyRosterChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Party::PartyRosterChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Party::MatchStatusChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::MatchStatusChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }
    void Party::MatchStatusChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token Party::GamePlayersChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Multiplayer::GamePlayersChangedEventArgs> const& handler)
    {
		throw hresult_not_implemented();
    }
    void Party::GamePlayersChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Multiplayer::PartyView> Party::GetPartyViewAsyncEx(winrt::Windows::Xbox::Multiplayer::PartyFlags flags)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::RemoveLocalUsersAsync(winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> localUsersToRemove)
    {
        throw hresult_not_implemented();
    }
    hstring Party::PartyId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::DisassociateGameSessionAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReferenceToDisassociate)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::RegisterGameSessionCompareAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReferenceComparand)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::RegisterMatchSessionCompareAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReference, winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference sessionReferenceComparand)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::UserPartyAssociation>> Party::GetUserPartyAssociationsAsync(winrt::Windows::Xbox::System::User actingUser, winrt::Windows::Foundation::Collections::IVectorView<hstring> targetXboxUserIds)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Multiplayer::PartyView> Party::GetPartyViewByPartyIdAsync(winrt::Windows::Xbox::System::User actingUser, hstring partyId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Party::JoinPartyByIdAsync(winrt::Windows::Xbox::System::User actingUser, hstring partyId)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::SessionJoinability Party::Joinability()
    {
        throw hresult_not_implemented();
    }
    void Party::Joinability(winrt::Windows::Xbox::Multiplayer::SessionJoinability const& value)
    {
        throw hresult_not_implemented();
    }
}
