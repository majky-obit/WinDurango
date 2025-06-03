#include "pch.h"
#include "Windows.Kinect.AudioFrameReader.h"
#include "Windows.Kinect.AudioFrameReader.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void AudioFrameReader::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token AudioFrameReader::FrameArrived(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::AudioFrameReader, winrt::Windows::Kinect::AudioFrameArrivedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void AudioFrameReader::FrameArrived(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamFrame> AudioFrameReader::AcquireLatestBeamFrames()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool AudioFrameReader::IsPaused()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void AudioFrameReader::IsPaused(bool isPaused)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioSource AudioFrameReader::AudioSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
