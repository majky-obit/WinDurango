#include "pch.h"
#include "Windows.Kinect.FrameCapturedEventArgs.h"
#include "Windows.Kinect.FrameCapturedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::FrameSourceTypes FrameCapturedEventArgs::FrameType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameCapturedStatus FrameCapturedEventArgs::FrameStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan FrameCapturedEventArgs::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
