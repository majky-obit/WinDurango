#include "pch.h"
#include "Windows.Kinect.BodyIndexFrameReader.h"
#include "Windows.Kinect.BodyIndexFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyIndexFrameReader::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token BodyIndexFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::BodyIndexFrameReader, winrt::Windows::Kinect::BodyIndexFrameArrivedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void BodyIndexFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrame BodyIndexFrameReader::AcquireLatestFrame()
    {
        throw hresult_not_implemented();
    }
    bool BodyIndexFrameReader::IsPaused()
    {
        throw hresult_not_implemented();
    }
    void BodyIndexFrameReader::IsPaused(bool isPaused)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrameReader::BodyIndexFrameSource()
    {
        throw hresult_not_implemented();
    }
}
