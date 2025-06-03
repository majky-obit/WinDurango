#include "pch.h"
#include "Microsoft.Xbox.GameChat.TextMessageReceivedEventArgs.h"
#include "Microsoft.Xbox.GameChat.TextMessageReceivedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring TextMessageReceivedEventArgs::Message()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatTextMessageType TextMessageReceivedEventArgs::ChatTextMessageType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatUser TextMessageReceivedEventArgs::ChatUser()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
