#include "pch.h"
#include "Windows.Kinect.MultiSourceFrameReader.h"
#include "Windows.Kinect.MultiSourceFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void MultiSourceFrameReader::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token MultiSourceFrameReader::MultiSourceFrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::MultiSourceFrameReader, winrt::Windows::Kinect::MultiSourceFrameArrivedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiSourceFrameReader::MultiSourceFrameArrived(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::MultiSourceFrame MultiSourceFrameReader::AcquireLatestFrame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameSourceTypes MultiSourceFrameReader::FrameSourceTypes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MultiSourceFrameReader::IsPaused()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiSourceFrameReader::IsPaused(bool isPaused)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor MultiSourceFrameReader::KinectSensor()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
