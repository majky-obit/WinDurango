#include "pch.h"
#include "Windows.Kinect.InfraredFrameSource.h"
#include "Windows.Kinect.InfraredFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token InfraredFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::InfraredFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InfraredFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool InfraredFrameSource::IsActive()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameReader InfraredFrameSource::OpenReader()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription InfraredFrameSource::FrameDescription()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor InfraredFrameSource::KinectSensor()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
