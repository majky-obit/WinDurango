#include "pch.h"
#include "Windows.Xbox.Multiplayer.MultiplayerSessionReference.h"
#include "Windows.Xbox.Multiplayer.MultiplayerSessionReference.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    MultiplayerSessionReference::MultiplayerSessionReference(hstring const& sessionName, hstring const& serviceConfigurationId, hstring const& sessionTemplateName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionName()
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
}
