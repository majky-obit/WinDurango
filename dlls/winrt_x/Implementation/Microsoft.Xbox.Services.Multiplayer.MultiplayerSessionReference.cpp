#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSessionReference::MultiplayerSessionReference(hstring const& serviceConfigurationId, hstring const& sessionTemplateName, hstring const& sessionName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionReference::ParseFromUriPath(hstring const& uriPath)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::ServiceConfigurationId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionTemplateName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::ToUriPath()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
