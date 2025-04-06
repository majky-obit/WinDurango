#pragma once
#include "Windows.Xbox.SmartGlass.SmartGlassHtmlSurface.g.h"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    struct SmartGlassHtmlSurface : SmartGlassHtmlSurfaceT<SmartGlassHtmlSurface>
    {
        SmartGlassHtmlSurface() = default;

        hstring Id();
        bool Visible();
        winrt::Windows::Xbox::SmartGlass::SmartGlassSensors Sensors();
        winrt::Windows::Foundation::IAsyncAction SubmitMessageAsync(hstring message);
        winrt::event_token MessageReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassHtmlSurface, winrt::Windows::Xbox::SmartGlass::SmartGlassMessageReceivedEventArgs> const& handler);
        void MessageReceived(winrt::event_token const& token) noexcept;
    };
}