#include "pch.h"
#include "Microsoft.Xbox.Services.HttpCallRequestMessage.h"
#include "Microsoft.Xbox.Services.HttpCallRequestMessage.g.cpp"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    hstring HttpCallRequestMessage::RequestMessageString()
    {
        throw hresult_not_implemented();
    }
    com_array<uint8_t> HttpCallRequestMessage::RequestMessageVector()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::HttpRequestMessageType HttpCallRequestMessage::GetHttpRequestMessageType()
    {
        throw hresult_not_implemented();
    }
}
