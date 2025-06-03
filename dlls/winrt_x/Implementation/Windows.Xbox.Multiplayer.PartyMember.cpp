#include "pch.h"
#include "Windows.Xbox.Multiplayer.PartyMember.h"
#include "Windows.Xbox.Multiplayer.PartyMember.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    hstring PartyMember::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool PartyMember::IsLocal()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime PartyMember::JoinTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
