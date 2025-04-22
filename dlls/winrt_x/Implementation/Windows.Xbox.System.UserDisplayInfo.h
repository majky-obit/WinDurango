#pragma once
#include "Windows.Xbox.System.UserDisplayInfo.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct UserDisplayInfo : UserDisplayInfoT<UserDisplayInfo>
    {
        UserDisplayInfo() = default;
        UserDisplayInfo(hstring gamertag) : m_gamertag(gamertag) {}

        hstring Gamertag();
        uint32_t GamerScore();
        hstring ApplicationDisplayName();
        hstring GameDisplayName();
        int32_t Reputation();
        winrt::Windows::Xbox::System::UserAgeGroup AgeGroup();
        winrt::Windows::Foundation::Collections::IVectorView<uint32_t> Privileges();
        hstring m_gamertag{ 0 };
    };
}
