#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDevice.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDevice.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> SmartGlassDevice::CreateFromIdAsync(hstring id)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::SmartGlass::SmartGlassDeviceCollection> SmartGlassDevice::FindAllAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    hstring SmartGlassDevice::Id()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    hstring SmartGlassDevice::DisplayName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassDirectSurface SmartGlassDevice::DirectSurface()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassHtmlSurface SmartGlassDevice::HtmlSurface()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassTextEntrySurface SmartGlassDevice::TextEntrySurface()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::System::User SmartGlassDevice::User()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncAction SmartGlassDevice::SetActiveSurfaceAsync(winrt::Windows::Xbox::SmartGlass::ISmartGlassSurface surface)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::QosMetrics SmartGlassDevice::QosMetrics()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassDevice::QosMetricsChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice, winrt::Windows::Xbox::SmartGlass::QosMetricsChangedEventArgs> const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    void SmartGlassDevice::QosMetricsChanged(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    uint32_t SmartGlassDevice::get_DpiX()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    uint32_t SmartGlassDevice::get_DpiY()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassAuxiliaryStream SmartGlassDevice::AuxiliaryStream()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}