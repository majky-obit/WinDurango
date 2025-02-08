#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	struct MultiplayerSessionChangeEventArgs : MultiplayerSessionChangeEventArgsT<MultiplayerSessionChangeEventArgs>
	{
		MultiplayerSessionChangeEventArgs() = default;

		MultiplayerSessionReference SessionReference();
		hstring Branch();
		uint64_t ChangeNumber();

	private:
		MultiplayerSessionReference m_multiplayerSessionReference{ nullptr };

		hstring m_branch{ L"BRANCH" };

		uint64_t m_changeNumber{ 0 };
	};
}