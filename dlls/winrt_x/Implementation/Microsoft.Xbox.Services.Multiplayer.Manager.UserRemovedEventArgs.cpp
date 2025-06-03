#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.UserRemovedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.UserRemovedEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring UserRemovedEventArgs::XboxUserId()
    {
        throw hresult_not_implemented();
    }
}
