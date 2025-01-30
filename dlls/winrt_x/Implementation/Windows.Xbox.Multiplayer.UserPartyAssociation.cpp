#include "pch.h"
#include "Windows.Xbox.Multiplayer.UserPartyAssociation.h"
#include "Windows.Xbox.Multiplayer.UserPartyAssociation.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> UserPartyAssociation::QueriedXboxUserIds()
    {
        throw hresult_not_implemented();
    }
    hstring UserPartyAssociation::PartyId()
    {
        throw hresult_not_implemented();
    }
}
