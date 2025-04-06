#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassHtmlSurface.h"
#include "Windows.Xbox.SmartGlass.SmartGlassHtmlSurface.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    hstring SmartGlassHtmlSurface::Id()
    {
        throw hresult_not_implemented();
    }

    bool SmartGlassHtmlSurface::Visible()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Xbox::SmartGlass::SmartGlassSensors SmartGlassHtmlSurface::Sensors()
    {
        throw hresult_not_implemented();
    }

    winrt::Windows::Foundation::IAsyncAction SmartGlassHtmlSurface::SubmitMessageAsync(hstring message)
    {
        throw hresult_not_implemented();
    }

    winrt::event_token SmartGlassHtmlSurface::MessageReceived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::SmartGlass::SmartGlassHtmlSurface, winrt::Windows::Xbox::SmartGlass::SmartGlassMessageReceivedEventArgs> const& handler)
    {
        throw hresult_not_implemented();
    }

    void SmartGlassHtmlSurface::MessageReceived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
}