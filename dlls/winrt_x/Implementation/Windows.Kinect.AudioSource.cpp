#include "pch.h"
#include "Windows.Kinect.AudioSource.h"
#include "Windows.Kinect.AudioSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token AudioSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::AudioSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void AudioSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor AudioSource::KinectSensor()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool AudioSource::IsActive()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t AudioSource::SubFrameLengthInBytes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioSource::SubFrameDuration()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t AudioSource::MaxSubFrameCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioFrameReader AudioSource::OpenReader()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeam> AudioSource::AudioBeams()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
