#include "pch.h"
#include "Windows.Kinect.DepthFrameArrivedEventArgs.h"
#include "Windows.Kinect.DepthFrameArrivedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::DepthFrameReference DepthFrameArrivedEventArgs::FrameReference()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
