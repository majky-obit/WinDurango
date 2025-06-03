#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.h"
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration XboxLiveAppConfiguration::SingletonInstance()
    {
        throw hresult_not_implemented();
    }
    uint32_t XboxLiveAppConfiguration::TitleId()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::Environment()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::Sandbox()
    {
        throw hresult_not_implemented();
    }
}
