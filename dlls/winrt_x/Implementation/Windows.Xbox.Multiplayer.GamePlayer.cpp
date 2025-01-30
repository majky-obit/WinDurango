#include "pch.h"
#include "Windows.Xbox.Multiplayer.GamePlayer.h"
#include "Windows.Xbox.Multiplayer.GamePlayer.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    hstring GamePlayer::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime GamePlayer::LastInvitedTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime GamePlayer::PartyJoinTime()
    {
        throw hresult_not_implemented();
    }
}
