#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.h"
#include "Microsoft.Xbox.Services.XboxLiveHttpCallResponse.g.cpp"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    winrt::Microsoft::Xbox::Services::HttpCallResponseBodyType XboxLiveHttpCallResponse::BodyType()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseBodyString()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseBodyJson()
    {
        throw hresult_not_implemented();
    }
    com_array<uint8_t> XboxLiveHttpCallResponse::ResponseBodyVector()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> XboxLiveHttpCallResponse::Headers()
    {
        throw hresult_not_implemented();
    }
    int32_t XboxLiveHttpCallResponse::HttpStatus()
    {
        throw hresult_not_implemented();
    }
    int32_t XboxLiveHttpCallResponse::ErrorCode()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ErrorMessage()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ETag()
    {
        throw hresult_not_implemented();
    }
    hstring XboxLiveHttpCallResponse::ResponseDate()
    {
        throw hresult_not_implemented();
    }
    int64_t XboxLiveHttpCallResponse::RetryAfterInSeconds()
    {
        throw hresult_not_implemented();
    }
}
