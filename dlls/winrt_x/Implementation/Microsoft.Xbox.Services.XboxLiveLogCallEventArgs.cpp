#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveLogCallEventArgs.h"
#include "Microsoft.Xbox.Services.XboxLiveLogCallEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel XboxLiveLogCallEventArgs::Level()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveLogCallEventArgs::Category()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveLogCallEventArgs::Message()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
