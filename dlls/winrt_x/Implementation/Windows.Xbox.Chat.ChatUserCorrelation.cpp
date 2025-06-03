#include "pch.h"
#include "Windows.Xbox.Chat.ChatUserCorrelation.h"
#include "Windows.Xbox.Chat.ChatUserCorrelation.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    winrt::Windows::Xbox::System::IUser ChatUserCorrelation::User()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
