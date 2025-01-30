#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyView.h"
#include "Windows.Xbox.Multiplayer.PartyView.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyView::ReservedMembers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::PartyMember> PartyView::Members()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::PartyMemberDeviceGroup> PartyView::MembersGroupedByDevice()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference PartyView::MatchSession()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference PartyView::GameSession()
    {
        throw hresult_not_implemented();
    }
    bool PartyView::IsPartyInAnotherTitle()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::SessionJoinability PartyView::Joinability()
    {
        throw hresult_not_implemented();
    }
}
