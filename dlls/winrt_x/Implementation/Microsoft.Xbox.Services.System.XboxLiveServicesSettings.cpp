#include "pch.h"
#include "Microsoft.Xbox.Services.System.XboxLiveServicesSettings.h"
#include "Microsoft.Xbox.Services.System.XboxLiveServicesSettings.g.cpp"


namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    winrt::Microsoft::Xbox::Services::System::XboxLiveServicesSettings XboxLiveServicesSettings::SingletonInstance()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token XboxLiveServicesSettings::LogCallRouted(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::XboxLiveLogCallEventArgs> const& __param0)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveServicesSettings::LogCallRouted(winrt::event_token const& __param0) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel XboxLiveServicesSettings::DiagnosticsTraceLevel()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveServicesSettings::DiagnosticsTraceLevel(winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token XboxLiveServicesSettings::WnsEventRecevied(winrt::Windows::Foundation::EventHandler<winrt::Microsoft::Xbox::Services::XboxLiveWnsEventArgs> const& __param0)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveServicesSettings::WnsEventRecevied(winrt::event_token const& __param0) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
