#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSessionReference::MultiplayerSessionReference(hstring const& serviceConfigurationId, hstring const& sessionTemplateName, hstring const& sessionName)
    {
		printf("!!!! Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference Called! !!!!\n");
		//m_multiplayerSessionReference = { serviceConfigurationId, sessionTemplateName, sessionName };
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionReference::ParseFromUriPath(hstring const& uriPath)
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::ServiceConfigurationId()
    {
		return m_multiplayerSessionReference.ServiceConfigurationId( );
    }
    hstring MultiplayerSessionReference::SessionTemplateName()
    {
        return m_multiplayerSessionReference.SessionTemplateName( );
    }
    hstring MultiplayerSessionReference::SessionName()
    {
        return m_multiplayerSessionReference.SessionName( );
    }
    hstring MultiplayerSessionReference::ToUriPath()
    {
        throw hresult_not_implemented();
    }
}
