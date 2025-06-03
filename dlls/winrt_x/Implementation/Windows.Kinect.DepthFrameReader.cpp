#include "pch.h"
#include "Windows.Kinect.DepthFrameReader.h"
#include "Windows.Kinect.DepthFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void DepthFrameReader::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token DepthFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::DepthFrameReader, winrt::Windows::Kinect::DepthFrameArrivedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void DepthFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrame DepthFrameReader::AcquireLatestFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool DepthFrameReader::IsPaused()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void DepthFrameReader::IsPaused(bool isPaused)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameSource DepthFrameReader::DepthFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
