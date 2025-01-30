#include "pch.h"
#include "Windows.Xbox.Multiplayer.MultiplayerSessionReference.h"
#include "Windows.Xbox.Multiplayer.MultiplayerSessionReference.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    MultiplayerSessionReference::MultiplayerSessionReference(hstring const& sessionName, hstring const& serviceConfigurationId, hstring const& sessionTemplateName)
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionName()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionReference::SessionTemplateName()
    {
        throw hresult_not_implemented();
    }
}
