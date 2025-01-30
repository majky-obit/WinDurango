#include "pch.h"
#include "Windows.Xbox.Multiplayer.GamePlayersChangedEventArgs.h"
#include "Windows.Xbox.Multiplayer.GamePlayersChangedEventArgs.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Xbox::Multiplayer::MultiplayerSessionReference GamePlayersChangedEventArgs::GameSession()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayer> GamePlayersChangedEventArgs::AvailablePlayers()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayerDeviceGroup> GamePlayersChangedEventArgs::AvailablePlayersGroupedByDevice()
    {
        throw hresult_not_implemented();
    }
}
