#include "pch.h"
#include "Microsoft.Xbox.GameChat.TextMessageReceivedEventArgs.h"
#include "Microsoft.Xbox.GameChat.TextMessageReceivedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring TextMessageReceivedEventArgs::Message()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatTextMessageType TextMessageReceivedEventArgs::ChatTextMessageType()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatUser TextMessageReceivedEventArgs::ChatUser()
    {
        throw hresult_not_implemented();
    }
}
