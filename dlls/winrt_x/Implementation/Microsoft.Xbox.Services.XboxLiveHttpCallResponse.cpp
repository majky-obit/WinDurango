#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType XboxLiveHttpCallResponse::BodyType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseBodyString()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseBodyJson()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    com_array<uint8_t> XboxLiveHttpCallResponse::ResponseBodyVector()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> XboxLiveHttpCallResponse::Headers()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t XboxLiveHttpCallResponse::HttpStatus()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t XboxLiveHttpCallResponse::ErrorCode()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ErrorMessage()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ETag()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseDate()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    int64_t XboxLiveHttpCallResponse::RetryAfterInSeconds()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
