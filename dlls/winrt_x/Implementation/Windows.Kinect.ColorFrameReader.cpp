#include "pch.h"
#include "Windows.Kinect.ColorFrameReader.h"
#include "Windows.Kinect.ColorFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void ColorFrameReader::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token ColorFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::ColorFrameReader, winrt::Windows::Kinect::ColorFrameArrivedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void ColorFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrame ColorFrameReader::AcquireLatestFrame()
    {
        throw hresult_not_implemented();
    }
    bool ColorFrameReader::IsPaused()
    {
        throw hresult_not_implemented();
    }
    void ColorFrameReader::IsPaused(bool isPaused)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameSource ColorFrameReader::ColorFrameSource()
    {
        throw hresult_not_implemented();
    }
}
