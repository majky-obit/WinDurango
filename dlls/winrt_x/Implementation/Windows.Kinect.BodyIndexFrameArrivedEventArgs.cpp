#include "pch.h"
#include "Windows.Kinect.BodyIndexFrameArrivedEventArgs.h"
#include "Windows.Kinect.BodyIndexFrameArrivedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::BodyIndexFrameReference BodyIndexFrameArrivedEventArgs::FrameReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
