#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionRoleTypes.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionRoleTypes.g.cpp"
    
namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerRoleType> MultiplayerSessionRoleTypes::RoleTypes()
    {
		printf("[Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionRoleTypes] RoleTypes called\n");
		return winrt::single_threaded_map<hstring, Multiplayer::MultiplayerRoleType>( ).GetView( );
    }
}
