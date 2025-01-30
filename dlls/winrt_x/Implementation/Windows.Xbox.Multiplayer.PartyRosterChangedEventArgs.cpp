#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyRosterChangedEventArgs.h"
#include "Windows.Xbox.Multiplayer.PartyRosterChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::AddedMembers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::AddedReservedMembers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::RemovedMembers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::RemovedReservedMembers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::PartyView PartyRosterChangedEventArgs::PartyView()
    {
        throw hresult_not_implemented();
    }
}
