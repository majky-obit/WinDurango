#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.h"
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Windows::Storage::Streams::IBuffer ChatPacketEventArgs::PacketBuffer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendReliable()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendInOrder()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendPacketToAllConnectedConsoles()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IInspectable ChatPacketEventArgs::UniqueTargetConsoleIdentifier()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatMessageType ChatPacketEventArgs::ChatMessageType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatUser ChatPacketEventArgs::ChatUser()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
