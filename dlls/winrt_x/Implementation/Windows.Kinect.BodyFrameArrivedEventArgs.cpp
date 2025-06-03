#include "pch.h"
#include "Windows.Kinect.BodyFrameArrivedEventArgs.h"
#include "Windows.Kinect.BodyFrameArrivedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::BodyFrameReference BodyFrameArrivedEventArgs::FrameReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
