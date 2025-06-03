#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerEvent.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerEvent.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    int32_t MultiplayerEvent::ErrorCode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerEvent::ErrorMessage()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IInspectable MultiplayerEvent::Context()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEventType MultiplayerEvent::EventType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEventArgs MultiplayerEvent::EventArgs()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerSessionType MultiplayerEvent::SessionType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
