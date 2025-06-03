#include "pch.h"
#include "Windows.Xbox.Chat.ChatMuteList.h"
#include "Windows.Xbox.Chat.ChatMuteList.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::event_token ChatMuteList::UserMuteStateChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::Xbox::Chat::UserMuteStateChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatMuteList::UserMuteStateChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
