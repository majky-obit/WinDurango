#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionChangeEventArgs::SessionReference()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionChangeEventArgs::Branch()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint64_t MultiplayerSessionChangeEventArgs::ChangeNumber()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
