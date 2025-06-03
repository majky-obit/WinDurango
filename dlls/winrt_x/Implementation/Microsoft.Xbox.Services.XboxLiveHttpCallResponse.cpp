#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType XboxLiveHttpCallResponse::BodyType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseBodyString()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseBodyJson()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    com_array<uint8_t> XboxLiveHttpCallResponse::ResponseBodyVector()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> XboxLiveHttpCallResponse::Headers()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    int32_t XboxLiveHttpCallResponse::HttpStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    int32_t XboxLiveHttpCallResponse::ErrorCode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ErrorMessage()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ETag()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    int64_t XboxLiveHttpCallResponse::RetryAfterInSeconds()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
