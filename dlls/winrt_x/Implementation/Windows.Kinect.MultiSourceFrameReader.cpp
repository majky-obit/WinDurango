#include "pch.h"
#include "Windows.Kinect.MultiSourceFrameReader.h"
#include "Windows.Kinect.MultiSourceFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void MultiSourceFrameReader::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token MultiSourceFrameReader::MultiSourceFrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::MultiSourceFrameReader, winrt::Windows::Kinect::MultiSourceFrameArrivedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void MultiSourceFrameReader::MultiSourceFrameArrived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::MultiSourceFrame MultiSourceFrameReader::AcquireLatestFrame()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameSourceTypes MultiSourceFrameReader::FrameSourceTypes()
    {
        throw hresult_not_implemented();
    }
    bool MultiSourceFrameReader::IsPaused()
    {
        throw hresult_not_implemented();
    }
    void MultiSourceFrameReader::IsPaused(bool isPaused)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor MultiSourceFrameReader::KinectSensor()
    {
        throw hresult_not_implemented();
    }
}
