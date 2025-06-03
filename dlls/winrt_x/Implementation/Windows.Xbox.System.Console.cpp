#include "pch.h"
#include "Windows.Xbox.System.Console.h"
#include "Windows.Xbox.System.Console.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, hstring body)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Console::ApplicationSpecificDeviceId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
