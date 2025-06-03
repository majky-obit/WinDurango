#include "pch.h"
#include "Windows.Xbox.UI.WebAuthenticationResult.h"
#include "Windows.Xbox.UI.WebAuthenticationResult.g.cpp"


namespace winrt::Windows::Xbox::UI::implementation
{
    hstring WebAuthenticationResult::ResponseData()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::UI::WebAuthenticationStatus WebAuthenticationResult::ResponseStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t WebAuthenticationResult::ResponseErrorDetail()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
