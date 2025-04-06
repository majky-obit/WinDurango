#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDevice.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDevice.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> SmartGlassDevice::CreateFromIdAsync(hstring id)
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::SmartGlass::SmartGlassDeviceCollection> SmartGlassDevice::FindAllAsync()
    {
        throw hresult_not_implemented();
    }

    hstring SmartGlassDevice::Id()
    {
        throw hresult_not_implemented();
    }

    hstring SmartGlassDevice::DisplayName()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassDirectSurface SmartGlassDevice::DirectSurface()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassHtmlSurface SmartGlassDevice::HtmlSurface()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassTextEntrySurface SmartGlassDevice::TextEntrySurface()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::System::User SmartGlassDevice::User()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncAction SmartGlassDevice::SetActiveSurfaceAsync(winrt::Windows::Xbox::SmartGlass::ISmartGlassSurface surface)
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::QosMetrics SmartGlassDevice::QosMetrics()
    {
        throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassDevice::QosMetricsChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice, winrt::Windows::Xbox::SmartGlass::QosMetricsChangedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }

    void SmartGlassDevice::QosMetricsChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }

    uint32_t SmartGlassDevice::get_DpiX()
    {
        throw hresult_not_implemented();
    }

    uint32_t SmartGlassDevice::get_DpiY()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream SmartGlassDevice::AuxiliaryStream()
    {
        throw hresult_not_implemented();
    }
}