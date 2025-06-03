#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.UserAddedEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.UserAddedEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    hstring UserAddedEventArgs::XboxUserId()
    {
        throw hresult_not_implemented();
    }
}
