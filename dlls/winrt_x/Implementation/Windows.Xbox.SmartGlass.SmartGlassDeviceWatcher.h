#pragma once
#include "Windows.Xbox.SmartGlass.SmartGlassDeviceWatcher.g.h"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    struct SmartGlassDeviceWatcher : SmartGlassDeviceWatcherT<SmartGlassDeviceWatcher>
    {
        SmartGlassDeviceWatcher() = default;

        winrt::event_token DeviceAdded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassDeviceWatcher, winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> const& handler);
        void DeviceAdded(winrt::event_token const& token) noexcept;
        winrt::event_token DeviceRemoved(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassDeviceWatcher, winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> const& handler);
        void DeviceRemoved(winrt::event_token const& token) noexcept;
    };
}

namespace winrt::Windows::Xbox::SmartGlass::factory_implementation
{
    struct SmartGlassDeviceWatcher : SmartGlassDeviceWatcherT<SmartGlassDeviceWatcher, implementation::SmartGlassDeviceWatcher>
    {
    };
}