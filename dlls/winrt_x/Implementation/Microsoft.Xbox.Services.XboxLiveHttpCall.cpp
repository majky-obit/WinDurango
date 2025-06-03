#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCall.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::XboxLiveHttpCall XboxLiveHttpCall::CreateXboxLiveHttpCall(winrt::Microsoft::Xbox::Services::XboxLiveContextSettings const& settings, hstring const& httpMethod, hstring const& serverName, hstring const& pathQueryFragment)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::XboxLiveHttpCallResponse> XboxLiveHttpCall::GetResponseWithAuth(winrt::Windows::Xbox::System::User user, winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType httpCallResponseBodyType)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::XboxLiveHttpCallResponse> XboxLiveHttpCall::GetResponseWithoutAuth(winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType httpCallResponseBodyType)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetRequestBody(hstring const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetRequestBodyArray(array_view<uint8_t const> requestBodyArray)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::SetCustomHeader(hstring const& headerName, hstring const& headerValue)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool XboxLiveHttpCall::RetryAllowed()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::RetryAllowed(bool value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ContentTypeHeaderValue()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::ContentTypeHeaderValue(hstring const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ContractVersionHeaderValue()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void XboxLiveHttpCall::ContractVersionHeaderValue(hstring const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::ServerName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::PathQueryFragment()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCall::HttpMethod()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
