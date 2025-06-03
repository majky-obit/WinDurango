#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionStates.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::DateTime MultiplayerSessionStates::StartTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionStates::SessionReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionStatus MultiplayerSessionStates::Status()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerSessionStates::Visibility()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MultiplayerSessionStates::IsMyTurn()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionStates::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSessionStates::AcceptedMemberCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction MultiplayerSessionStates::JoinRestriction()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerSessionStates::Keywords()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
