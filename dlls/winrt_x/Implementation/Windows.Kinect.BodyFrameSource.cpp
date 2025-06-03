#include "pch.h"
#include "Windows.Kinect.BodyFrameSource.h"
#include "Windows.Kinect.BodyFrameSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token BodyFrameSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyFrameSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void BodyFrameSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    bool BodyFrameSource::IsActive()
    {
        throw hresult_not_implemented();
    }
    int32_t BodyFrameSource::BodyCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameReader BodyFrameSource::OpenReader()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor BodyFrameSource::KinectSensor()
    {
        throw hresult_not_implemented();
    }
    void BodyFrameSource::OverrideHandTracking(uint64_t trackingId)
    {
        throw hresult_not_implemented();
    }
    void BodyFrameSource::OverrideHandTracking(uint64_t oldTrackingId, uint64_t newTrackingId)
    {
        throw hresult_not_implemented();
    }
}
