#include "pch.h"
#include "Windows.Xbox.Multiplayer.UserPartyAssociation.h"
#include "Windows.Xbox.Multiplayer.UserPartyAssociation.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> UserPartyAssociation::QueriedXboxUserIds()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring UserPartyAssociation::PartyId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
