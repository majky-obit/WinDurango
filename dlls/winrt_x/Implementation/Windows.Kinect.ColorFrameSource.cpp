#include "pch.h"
#include "Windows.Kinect.ColorFrameSource.h"
#include "Windows.Kinect.ColorFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token ColorFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::ColorFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void ColorFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    bool ColorFrameSource::IsActive()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameReader ColorFrameSource::OpenReader()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrameSource::CreateFrameDescription(winrt::Windows::Kinect::ColorImageFormat const& format)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrameSource::FrameDescription()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor ColorFrameSource::KinectSensor()
    {
        throw hresult_not_implemented();
    }
}
