#include "pch.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDirectSurface.h"
#include "Windows.Xbox.SmartGlass.SmartGlassDirectSurface.g.cpp"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    hstring SmartGlassDirectSurface::Id()
    {
        throw hresult_not_implemented();
    }
    
    bool SmartGlassDirectSurface::Visible()
    {
        throw hresult_not_implemented();
    }
    
    hstring SmartGlassDirectSurface::AudioDeviceId()
    {
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Foundation::Rect SmartGlassDirectSurface::Bounds()
    {
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Foundation::Rect SmartGlassDirectSurface::NativeBounds()
    {
        throw hresult_not_implemented();
    }
    
    winrt::Windows::Xbox::SmartGlass::QosSettings SmartGlassDirectSurface::QosSettings()
    {
        throw hresult_not_implemented();
    }
 
    winrt::Windows::Xbox::SmartGlass::SmartGlassSensors SmartGlassDirectSurface::Sensors()
    {
        throw hresult_not_implemented();
    }
}