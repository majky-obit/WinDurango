#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleType.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerRoleType.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    bool MultiplayerRoleType::OwnerManaged()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MutableRoleSetting> MultiplayerRoleType::MutableRoleSettings()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleInfo> MultiplayerRoleType::Roles()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void MultiplayerRoleType::Roles(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleInfo> const& roles)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
