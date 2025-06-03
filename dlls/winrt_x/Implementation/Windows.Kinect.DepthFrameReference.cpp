#include "pch.h"
#include "Windows.Kinect.DepthFrameReference.h"
#include "Windows.Kinect.DepthFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::DepthFrame DepthFrameReference::AcquireFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan DepthFrameReference::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
