#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveLogCallEventArgs.h"
#include "Microsoft.Xbox.Services.XboxLiveLogCallEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::XboxServicesDiagnosticsTraceLevel XboxLiveLogCallEventArgs::Level()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveLogCallEventArgs::Category()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveLogCallEventArgs::Message()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
