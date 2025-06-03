#include "pch.h"
#include "Windows.Kinect.FrameDescription.h"
#include "Windows.Kinect.FrameDescription.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    int32_t FrameDescription::Width()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    int32_t FrameDescription::Height()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float FrameDescription::HorizontalFieldOfView()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float FrameDescription::VerticalFieldOfView()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float FrameDescription::DiagonalFieldOfView()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t FrameDescription::LengthInPixels()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t FrameDescription::BytesPerPixel()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
