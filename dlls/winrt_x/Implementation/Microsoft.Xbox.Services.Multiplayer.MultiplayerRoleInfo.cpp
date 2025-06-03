#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleInfo.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleInfo.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> MultiplayerRoleInfo::MemberXboxUserIds()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerRoleInfo::MembersCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerRoleInfo::TargetCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerRoleInfo::TargetCount(uint32_t value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerRoleInfo::MaxMembersCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerRoleInfo::MaxMembersCount(uint32_t value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
