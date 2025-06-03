#include "pch.h"
#include "Windows.Kinect.FrameCapturedEventArgs.h"
#include "Windows.Kinect.FrameCapturedEventArgs.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::FrameSourceTypes FrameCapturedEventArgs::FrameType()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameCapturedStatus FrameCapturedEventArgs::FrameStatus()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan FrameCapturedEventArgs::RelativeTime()
    {
        throw hresult_not_implemented();
    }
}
