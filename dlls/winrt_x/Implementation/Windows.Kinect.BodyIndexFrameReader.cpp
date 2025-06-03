#include "pch.h"
#include "Windows.Kinect.BodyIndexFrameReader.h"
#include "Windows.Kinect.BodyIndexFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyIndexFrameReader::Close()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::event_token BodyIndexFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyIndexFrameReader, winrt::Windows::Kinect::BodyIndexFrameArrivedEventArgs> const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyIndexFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrame BodyIndexFrameReader::AcquireLatestFrame()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool BodyIndexFrameReader::IsPaused()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void BodyIndexFrameReader::IsPaused(bool isPaused)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrameReader::BodyIndexFrameSource()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
