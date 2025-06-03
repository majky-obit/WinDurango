#include "pch.h"
#include "Windows.Kinect.BodyIndexFrameReader.h"
#include "Windows.Kinect.BodyIndexFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyIndexFrameReader::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token BodyIndexFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyIndexFrameReader, winrt::Windows::Kinect::BodyIndexFrameArrivedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyIndexFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrame BodyIndexFrameReader::AcquireLatestFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool BodyIndexFrameReader::IsPaused()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyIndexFrameReader::IsPaused(bool isPaused)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrameReader::BodyIndexFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
