#include "pch.h"
#include "Windows.Kinect.InfraredFrameReader.h"
#include "Windows.Kinect.InfraredFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void InfraredFrameReader::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token InfraredFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::InfraredFrameReader, winrt::Windows::Kinect::InfraredFrameArrivedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InfraredFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrame InfraredFrameReader::AcquireLatestFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool InfraredFrameReader::IsPaused()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InfraredFrameReader::IsPaused(bool isPaused)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameSource InfraredFrameReader::InfraredFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
