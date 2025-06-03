#include "pch.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.h"
#include "Windows.Xbox.Chat.UserMuteStateChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Xbox::System::IUser UserMuteStateChangedEventArgs::Owner()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring UserMuteStateChangedEventArgs::RecipientXboxUserId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool UserMuteStateChangedEventArgs::Muted()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
