#include "pch.h"
#include "Windows.Kinect.MultiSourceFrameArrivedEventArgs.h"
#include "Windows.Kinect.MultiSourceFrameArrivedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::MultiSourceFrameReference MultiSourceFrameArrivedEventArgs::FrameReference()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
