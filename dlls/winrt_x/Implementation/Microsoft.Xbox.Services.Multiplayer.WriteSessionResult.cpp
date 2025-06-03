#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.h"
#include "Microsoft.Xbox.Services.Multiplayer.WriteSessionResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool WriteSessionResult::Succeeded()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSession WriteSessionResult::Session()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::WriteSessionStatus WriteSessionResult::Status()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
