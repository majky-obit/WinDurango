#include "pch.h"
#include "Windows.Kinect.ColorFrameReference.h"
#include "Windows.Kinect.ColorFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::ColorFrame ColorFrameReference::AcquireFrame()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan ColorFrameReference::RelativeTime()
    {
        throw hresult_not_implemented();
    }
}
