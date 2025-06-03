#include "pch.h"
#include "Windows.Kinect.BodyFrameReference.h"
#include "Windows.Kinect.BodyFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::BodyFrame BodyFrameReference::AcquireFrame()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan BodyFrameReference::RelativeTime()
    {
        throw hresult_not_implemented();
    }
}
