#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionChangeEventArgs.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
	MultiplayerSessionReference MultiplayerSessionChangeEventArgs::SessionReference()
	{
		LOG_FUNCTION_NAME();

		return m_multiplayerSessionReference;
	}

	hstring MultiplayerSessionChangeEventArgs::Branch()
	{
		LOG_FUNCTION_NAME();

		return m_branch;
	}

	uint64_t MultiplayerSessionChangeEventArgs::ChangeNumber()
	{
		LOG_FUNCTION_NAME();

		return m_changeNumber;
	}
}
