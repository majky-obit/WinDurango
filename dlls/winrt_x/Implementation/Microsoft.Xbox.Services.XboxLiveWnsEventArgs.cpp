#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveWnsEventArgs.h"
#include "Microsoft.Xbox.Services.XboxLiveWnsEventArgs.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    hstring XboxLiveWnsEventArgs::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveWnsEventArgs::NotificationType()
    {
        throw hresult_not_implemented();
    }
}
