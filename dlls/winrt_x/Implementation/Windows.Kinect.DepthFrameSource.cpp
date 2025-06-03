#include "pch.h"
#include "Windows.Kinect.DepthFrameSource.h"
#include "Windows.Kinect.DepthFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token DepthFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::DepthFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void DepthFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    bool DepthFrameSource::IsActive()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameReader DepthFrameSource::OpenReader()
    {
        throw hresult_not_implemented();
    }
    uint16_t DepthFrameSource::DepthMinReliableDistance()
    {
        throw hresult_not_implemented();
    }
    uint16_t DepthFrameSource::DepthMaxReliableDistance()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription DepthFrameSource::FrameDescription()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor DepthFrameSource::KinectSensor()
    {
        throw hresult_not_implemented();
    }
}
