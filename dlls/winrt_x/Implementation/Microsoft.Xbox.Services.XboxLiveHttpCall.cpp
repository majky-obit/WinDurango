#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::XboxLiveHttpCall XboxLiveHttpCall::CreateXboxLiveHttpCall(winrt::Microsoft::Xbox::Services::XboxLiveContextSettings const& settings, hstring const& httpMethod, hstring const& serverName, hstring const& pathQueryFragment)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::XboxLiveHttpCallResponse> XboxLiveHttpCall::GetResponseWithAuth(winrt::Windows::Xbox::System::User user, winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType httpCallResponseBodyType)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::XboxLiveHttpCallResponse> XboxLiveHttpCall::GetResponseWithoutAuth(winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType httpCallResponseBodyType)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetRequestBody(hstring const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetRequestBodyArray(array_view<uint8_t const> requestBodyArray)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetCustomHeader(hstring const& headerName, hstring const& headerValue)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool XboxLiveHttpCall::RetryAllowed()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::RetryAllowed(bool value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ContentTypeHeaderValue()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::ContentTypeHeaderValue(hstring const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ContractVersionHeaderValue()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::ContractVersionHeaderValue(hstring const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ServerName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::PathQueryFragment()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::HttpMethod()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
