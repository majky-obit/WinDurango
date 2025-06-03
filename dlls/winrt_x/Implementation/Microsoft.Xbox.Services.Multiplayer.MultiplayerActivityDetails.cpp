#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerActivityDetails.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerActivityDetails::SessionReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::HandleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionVisibility MultiplayerActivityDetails::Visibility()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRestriction MultiplayerActivityDetails::JoinRestriction()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MultiplayerActivityDetails::Closed()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::OwnerXboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::MaxMembersCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerActivityDetails::MembersCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerActivityDetails::CustomSessionPropertiesJson()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
