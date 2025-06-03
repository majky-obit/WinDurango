#include "pch.h"
#include "Windows.Kinect.InfraredFrameReference.h"
#include "Windows.Kinect.InfraredFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::InfraredFrame InfraredFrameReference::AcquireFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan InfraredFrameReference::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
