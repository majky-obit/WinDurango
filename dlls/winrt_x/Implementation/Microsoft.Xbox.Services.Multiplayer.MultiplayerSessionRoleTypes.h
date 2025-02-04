#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionRoleTypes.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	struct MultiplayerSessionRoleTypes : MultiplayerSessionRoleTypesT<MultiplayerSessionRoleTypes>
	{
		MultiplayerSessionRoleTypes() = default;

		Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> RoleTypes();

	private:
		Windows::Foundation::Collections::IMapView<hstring, MultiplayerRoleType> m_roleTypes = EMPTY_IMAPVIEW(hstring, MultiplayerRoleType);
	};
}
