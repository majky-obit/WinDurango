#include "pch.h"
#include "Windows.Kinect.BodyFrameReader.h"
#include "Windows.Kinect.BodyFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyFrameReader::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token BodyFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyFrameReader, winrt::Windows::Kinect::BodyFrameArrivedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void BodyFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrame BodyFrameReader::AcquireLatestFrame()
    {
        throw hresult_not_implemented();
    }
    bool BodyFrameReader::IsPaused()
    {
        throw hresult_not_implemented();
    }
    void BodyFrameReader::IsPaused(bool isPaused)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyFrameSource BodyFrameReader::BodyFrameSource()
    {
        throw hresult_not_implemented();
    }
}
