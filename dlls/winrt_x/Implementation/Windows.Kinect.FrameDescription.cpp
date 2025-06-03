#include "pch.h"
#include "Windows.Kinect.FrameDescription.h"
#include "Windows.Kinect.FrameDescription.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    int32_t FrameDescription::Width()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    int32_t FrameDescription::Height()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    float FrameDescription::HorizontalFieldOfView()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    float FrameDescription::VerticalFieldOfView()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    float FrameDescription::DiagonalFieldOfView()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t FrameDescription::LengthInPixels()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t FrameDescription::BytesPerPixel()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
