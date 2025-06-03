#include "pch.h"
#include "Windows.Kinect.ColorFrameReference.h"
#include "Windows.Kinect.ColorFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::ColorFrame ColorFrameReference::AcquireFrame()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan ColorFrameReference::RelativeTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
