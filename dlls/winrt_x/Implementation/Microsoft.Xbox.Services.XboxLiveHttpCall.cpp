#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::XboxLiveHttpCall XboxLiveHttpCall::CreateXboxLiveHttpCall(winrt::Microsoft::Xbox::Services::XboxLiveContextSettings const& settings, hstring const& httpMethod, hstring const& serverName, hstring const& pathQueryFragment)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::XboxLiveHttpCallResponse> XboxLiveHttpCall::GetResponseWithAuth(winrt::Windows::Xbox::System::User user, winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType httpCallResponseBodyType)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::XboxLiveHttpCallResponse> XboxLiveHttpCall::GetResponseWithoutAuth(winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType httpCallResponseBodyType)
    {
        throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetRequestBody(hstring const& value)
    {
        throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetRequestBodyArray(array_view<uint8_t const> requestBodyArray)
    {
        throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetCustomHeader(hstring const& headerName, hstring const& headerValue)
    {
        throw hresult_not_implemented();
    }
    bool XboxLiveHttpCall::RetryAllowed()
    {
        throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::RetryAllowed(bool value)
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ContentTypeHeaderValue()
    {
        throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::ContentTypeHeaderValue(hstring const& value)
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ContractVersionHeaderValue()
    {
        throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::ContractVersionHeaderValue(hstring const& value)
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ServerName()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::PathQueryFragment()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::HttpMethod()
    {
        throw hresult_not_implemented();
    }
}
