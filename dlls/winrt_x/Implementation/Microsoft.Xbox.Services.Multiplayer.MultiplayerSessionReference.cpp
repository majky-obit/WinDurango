#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSessionReference::MultiplayerSessionReference(hstring const& serviceConfigurationId, hstring const& sessionTemplateName, hstring const& sessionName)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionReference::ParseFromUriPath(hstring const& uriPath)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::ServiceConfigurationId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionTemplateName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::ToUriPath()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
