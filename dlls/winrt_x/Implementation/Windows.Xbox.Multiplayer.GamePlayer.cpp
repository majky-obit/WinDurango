#include "pch.h"
#include "Windows.Xbox.Multiplayer.GamePlayer.h"
#include "Windows.Xbox.Multiplayer.GamePlayer.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    hstring GamePlayer::XboxUserId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime GamePlayer::LastInvitedTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime GamePlayer::PartyJoinTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
