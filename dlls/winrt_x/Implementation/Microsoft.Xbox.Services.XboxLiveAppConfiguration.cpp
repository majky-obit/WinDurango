#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.h"
#include "Microsoft.Xbox.Services.XboxLiveAppConfiguration.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration XboxLiveAppConfiguration::SingletonInstance()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t XboxLiveAppConfiguration::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::ServiceConfigurationId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::Environment()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveAppConfiguration::Sandbox()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
