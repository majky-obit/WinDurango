#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveWnsEventArgs.h"
#include "Microsoft.Xbox.Services.XboxLiveWnsEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    hstring XboxLiveWnsEventArgs::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveWnsEventArgs::NotificationType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
