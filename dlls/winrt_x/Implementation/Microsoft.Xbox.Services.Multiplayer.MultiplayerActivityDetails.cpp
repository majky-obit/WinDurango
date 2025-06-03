#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerActivityDetails::SessionReference()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::HandleId()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::TitleId()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerActivityDetails::Visibility()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction MultiplayerActivityDetails::JoinRestriction()
    {
        throw hresult_not_implemented();
    }
    bool MultiplayerActivityDetails::Closed()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::OwnerXboxUserId()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::MaxMembersCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::MembersCount()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::CustomSessionPropertiesJson()
    {
        throw hresult_not_implemented();
    }
}
