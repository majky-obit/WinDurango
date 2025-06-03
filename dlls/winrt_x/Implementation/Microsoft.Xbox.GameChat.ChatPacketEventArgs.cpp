#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.h"
#include "Microsoft.Xbox.GameChat.ChatPacketEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Windows::Storage::Streams::IBuffer ChatPacketEventArgs::PacketBuffer()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendReliable()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendInOrder()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatPacketEventArgs::SendPacketToAllConnectedConsoles()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IInspectable ChatPacketEventArgs::UniqueTargetConsoleIdentifier()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatMessageType ChatPacketEventArgs::ChatMessageType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatUser ChatPacketEventArgs::ChatUser()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
