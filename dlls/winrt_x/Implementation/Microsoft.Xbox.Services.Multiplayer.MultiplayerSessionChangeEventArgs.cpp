#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionChangeEventArgs::SessionReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionChangeEventArgs::Branch()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerSessionChangeEventArgs::ChangeNumber()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
