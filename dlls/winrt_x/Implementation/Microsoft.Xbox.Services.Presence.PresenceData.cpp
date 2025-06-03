#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceData.h"
#include "Microsoft.Xbox.Services.Presence.PresenceData.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    PresenceData::PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId)
    {
		printf("[PresenceData] PresenceData::PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId) called\n");
    }
    PresenceData::PresenceData(hstring const& serviceConfigurationId, hstring const& presenceId, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& presenceTokenIds)
    {
        throw hresult_not_implemented();
    }
    hstring PresenceData::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    hstring PresenceData::PresenceId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> PresenceData::PresenceTokenIds()
    {
        throw hresult_not_implemented();
    }
}
