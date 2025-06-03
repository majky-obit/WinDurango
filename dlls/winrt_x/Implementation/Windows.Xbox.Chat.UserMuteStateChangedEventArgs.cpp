#include "pch.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Xbox::System::IUser UserMuteStateChangedEventArgs::Owner()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring UserMuteStateChangedEventArgs::RecipientXboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool UserMuteStateChangedEventArgs::Muted()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
