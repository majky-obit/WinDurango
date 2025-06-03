#include "pch.h"
#include "Windows.Kinect.DepthFrameReader.h"
#include "Windows.Kinect.DepthFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void DepthFrameReader::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token DepthFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::DepthFrameReader, winrt::Windows::Kinect::DepthFrameArrivedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void DepthFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrame DepthFrameReader::AcquireLatestFrame()
    {
        throw hresult_not_implemented();
    }
    bool DepthFrameReader::IsPaused()
    {
        throw hresult_not_implemented();
    }
    void DepthFrameReader::IsPaused(bool isPaused)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameSource DepthFrameReader::DepthFrameSource()
    {
        throw hresult_not_implemented();
    }
}
