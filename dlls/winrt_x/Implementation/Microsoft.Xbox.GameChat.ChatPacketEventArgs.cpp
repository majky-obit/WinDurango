#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.h"
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Windows::Storage::Streams::IBuffer ChatPacketEventArgs::PacketBuffer()
    {
        throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendReliable()
    {
        throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendInOrder()
    {
        throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendPacketToAllConnectedConsoles()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IInspectable ChatPacketEventArgs::UniqueTargetConsoleIdentifier()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatMessageType ChatPacketEventArgs::ChatMessageType()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatUser ChatPacketEventArgs::ChatUser()
    {
        throw hresult_not_implemented();
    }
}
