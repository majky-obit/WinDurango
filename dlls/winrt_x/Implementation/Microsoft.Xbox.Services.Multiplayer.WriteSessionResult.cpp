#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.h"
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool WriteSessionResult::Succeeded()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession WriteSessionResult::Session()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus WriteSessionResult::Status()
    {
        throw hresult_not_implemented();
    }
}
