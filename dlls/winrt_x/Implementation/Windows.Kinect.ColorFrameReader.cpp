#include "pch.h"
#include "Windows.Kinect.ColorFrameReader.h"
#include "Windows.Kinect.ColorFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void ColorFrameReader::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token ColorFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::ColorFrameReader, winrt::Windows::Kinect::ColorFrameArrivedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ColorFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrame ColorFrameReader::AcquireLatestFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ColorFrameReader::IsPaused()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ColorFrameReader::IsPaused(bool isPaused)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameSource ColorFrameReader::ColorFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
