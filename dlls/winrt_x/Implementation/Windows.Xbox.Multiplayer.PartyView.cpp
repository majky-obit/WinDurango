#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyView.h"
#include "Windows.Xbox.Multiplayer.PartyView.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyView::ReservedMembers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::PartyMember> PartyView::Members()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::PartyMemberDeviceGroup> PartyView::MembersGroupedByDevice()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference PartyView::MatchSession()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference PartyView::GameSession()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool PartyView::IsPartyInAnotherTitle()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::SessionJoinability PartyView::Joinability()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
