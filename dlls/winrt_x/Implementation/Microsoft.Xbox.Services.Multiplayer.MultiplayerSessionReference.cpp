#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionReference.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    MultiplayerSessionReference::MultiplayerSessionReference(hstring const& serviceConfigurationId, hstring const& sessionTemplateName, hstring const& sessionName)
    {
		LOG_FUNCTION_NAME();

        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }

	Multiplayer::MultiplayerSessionReference MultiplayerSessionReference::ParseFromUriPath(hstring const& uriPath)
    {
        LOG_FUNCTION_NAME();

		printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }

    hstring MultiplayerSessionReference::ServiceConfigurationId()
    {
        LOG_FUNCTION_NAME();

    	return m_multiplayerSessionReference.ServiceConfigurationId();
    }
    hstring MultiplayerSessionReference::SessionTemplateName()
    {
		LOG_FUNCTION_NAME();

    	return m_multiplayerSessionReference.SessionTemplateName();
    }
    hstring MultiplayerSessionReference::SessionName()
    {
        LOG_FUNCTION_NAME();

    	return m_multiplayerSessionReference.SessionName();
    }

    hstring MultiplayerSessionReference::ToUriPath()
    {
        LOG_FUNCTION_NAME();

		return m_multiplayerSessionReference.ToUriPath();
    }
}
