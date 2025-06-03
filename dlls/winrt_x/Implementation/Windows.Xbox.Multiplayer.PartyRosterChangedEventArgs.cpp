#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyRosterChangedEventArgs.h"
#include "Windows.Xbox.Multiplayer.PartyRosterChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::AddedMembers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::AddedReservedMembers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::RemovedMembers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PartyRosterChangedEventArgs::RemovedReservedMembers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Multiplayer::PartyView PartyRosterChangedEventArgs::PartyView()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
