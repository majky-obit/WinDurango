#pragma once
#include "Windows.Xbox.SmartGlass.SmartGlassDevice.g.h"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    struct SmartGlassDevice : SmartGlassDeviceT<SmartGlassDevice>
    {
        SmartGlassDevice() = default;

        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> CreateFromIdAsync(hstring id);
        static winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::SmartGlass::SmartGlassDeviceCollection> FindAllAsync();
        hstring Id();
        hstring DisplayName();
        winrt::Windows::Xbox::SmartGlass::SmartGlassDirectSurface DirectSurface();
        winrt::Windows::Xbox::SmartGlass::SmartGlassHtmlSurface HtmlSurface();
        winrt::Windows::Xbox::SmartGlass::SmartGlassTextEntrySurface TextEntrySurface();
        winrt::Windows::Xbox::System::User User();
        winrt::Windows::Foundation::IAsyncAction SetActiveSurfaceAsync(winrt::Windows::Xbox::SmartGlass::ISmartGlassSurface surface);
        winrt::Windows::Xbox::SmartGlass::QosMetrics QosMetrics();
        winrt::event_token QosMetricsChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice, winrt::Windows::Xbox::SmartGlass::QosMetricsChangedEventArgs> const& handler);
        void QosMetricsChanged(winrt::event_token const& token) noexcept;
        uint32_t get_DpiX();
        uint32_t get_DpiY();
        winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream AuxiliaryStream();
    };
}
namespace winrt::Windows::Xbox::SmartGlass::factory_implementation
{
    struct SmartGlassDevice : SmartGlassDeviceT<SmartGlassDevice, implementation::SmartGlassDevice>
    {
    };
}