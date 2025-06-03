#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChannelUpdatedEventArgs.h"
#include "Microsoft.Xbox.GameChat.ChannelUpdatedEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Microsoft::Xbox::GameChat::ChatUser ChannelUpdatedEventArgs::ChatUser()
    {
        throw hresult_not_implemented();
    }
    uint8_t ChannelUpdatedEventArgs::Channel()
    {
        throw hresult_not_implemented();
    }
}
