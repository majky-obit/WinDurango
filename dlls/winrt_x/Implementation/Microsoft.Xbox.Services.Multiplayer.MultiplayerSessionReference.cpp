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
		printf("!!!! Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference::ServiceConfigurationId Called! !!!!\n");
		return m_multiplayerSessionReference.ServiceConfigurationId( );
    }
    hstring MultiplayerSessionReference::SessionTemplateName()
    {
		printf("!!!! Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference::SessionTemplateName Called! !!!!\n");
        return m_multiplayerSessionReference.SessionTemplateName( );
    }
    hstring MultiplayerSessionReference::SessionName()
    {
		printf("!!!! Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference::SessionName Called! !!!!\n");
        return m_multiplayerSessionReference.SessionName( );
    }
    hstring MultiplayerSessionReference::ToUriPath()
    {
        throw hresult_not_implemented();
    }
}
