#include "pch.h"
#include "Windows.Xbox.System.Console.h"
#include "Windows.Xbox.System.Console.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, array_view<uint8_t const> body)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::System::GetTokenAndSignatureResult> Console::GetTokenAndSignatureAsync(hstring httpMethod, hstring url, hstring headers, hstring body)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Console::ApplicationSpecificDeviceId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
