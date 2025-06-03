#include "pch.h"
#include "Windows.Kinect.BodyIndexFrameSource.h"
#include "Windows.Kinect.BodyIndexFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token BodyIndexFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyIndexFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void BodyIndexFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    bool BodyIndexFrameSource::IsActive()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameReader BodyIndexFrameSource::OpenReader()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription BodyIndexFrameSource::FrameDescription()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor BodyIndexFrameSource::KinectSensor()
    {
        throw hresult_not_implemented();
    }
}
