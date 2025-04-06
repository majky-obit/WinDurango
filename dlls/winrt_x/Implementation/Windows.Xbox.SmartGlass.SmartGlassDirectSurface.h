#pragma once
#include "Windows.Xbox.SmartGlass.SmartGlassDirectSurface.g.h"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    struct SmartGlassDirectSurface : SmartGlassDirectSurfaceT<SmartGlassDirectSurface>
    {
        SmartGlassDirectSurface() = default;

        hstring Id();
        bool Visible();
        hstring AudioDeviceId();
        winrt::Windows::Foundation::Rect Bounds();
        winrt::Windows::Foundation::Rect NativeBounds();
        winrt::Windows::Xbox::SmartGlass::QosSettings QosSettings();
        winrt::Windows::Xbox::SmartGlass::SmartGlassSensors Sensors();
    };
}