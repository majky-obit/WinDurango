#include "pch.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Xbox::System::IUser UserMuteStateChangedEventArgs::Owner()
    {
        throw hresult_not_implemented();
    }
    hstring UserMuteStateChangedEventArgs::RecipientXboxUserId()
    {
        throw hresult_not_implemented();
    }
    bool UserMuteStateChangedEventArgs::Muted()
    {
        throw hresult_not_implemented();
    }
}
