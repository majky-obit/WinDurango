#include "pch.h"
#include "Windows.Xbox.Multiplayer.GamePlayerDeviceGroup.h"
#include "Windows.Xbox.Multiplayer.GamePlayerDeviceGroup.g.cpp"

namespace winrt::Windows::Xbox::Multiplayer::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Multiplayer::GamePlayer> GamePlayerDeviceGroup::Players()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
