#include "pch.h"
#include "Microsoft.Xbox.GameChat.DebugMessageEventArgs.h"
#include "Microsoft.Xbox.GameChat.DebugMessageEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring DebugMessageEventArgs::Message()
    {
        throw hresult_not_implemented();
    }
    int32_t DebugMessageEventArgs::ErrorCode()
    {
        throw hresult_not_implemented();
    }
}
