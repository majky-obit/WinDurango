#include "pch.h"
#include "Windows.Kinect.BodyFrameReader.h"
#include "Windows.Kinect.BodyFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyFrameReader::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token BodyFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyFrameReader, winrt::Windows::Kinect::BodyFrameArrivedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrame BodyFrameReader::AcquireLatestFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool BodyFrameReader::IsPaused()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyFrameReader::IsPaused(bool isPaused)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameSource BodyFrameReader::BodyFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
