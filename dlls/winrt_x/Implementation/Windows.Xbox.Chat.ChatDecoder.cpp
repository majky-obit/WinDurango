#include "pch.h"
#include "Windows.Xbox.Chat.ChatDecoder.h"
#include "Windows.Xbox.Chat.ChatDecoder.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Xbox::Chat::IFormat ChatDecoder::Format()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatDecoder::Decode(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Storage::Streams::IBuffer& decodedBuffer)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    int32_t ChatDecoder::IsDataInFlight()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
