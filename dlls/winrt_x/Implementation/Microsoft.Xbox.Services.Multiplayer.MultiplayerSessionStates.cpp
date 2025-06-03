#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::DateTime MultiplayerSessionStates::StartTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionStates::SessionReference()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStatus MultiplayerSessionStates::Status()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerSessionStates::Visibility()
    {
        throw hresult_not_implemented();
    }
    bool MultiplayerSessionStates::IsMyTurn()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionStates::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    uint32_t MultiplayerSessionStates::AcceptedMemberCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction MultiplayerSessionStates::JoinRestriction()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionStates::Keywords()
    {
        throw hresult_not_implemented();
    }
}
