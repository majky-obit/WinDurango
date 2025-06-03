#include "pch.h"
#include "Windows.Kinect.AudioSource.h"
#include "Windows.Kinect.AudioSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token AudioSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::AudioSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        throw hresult_not_implemented();
    }
    void AudioSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor AudioSource::KinectSensor()
    {
        throw hresult_not_implemented();
    }
    bool AudioSource::IsActive()
    {
        throw hresult_not_implemented();
    }
    uint32_t AudioSource::SubFrameLengthInBytes()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioSource::SubFrameDuration()
    {
        throw hresult_not_implemented();
    }
    uint32_t AudioSource::MaxSubFrameCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioFrameReader AudioSource::OpenReader()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeam> AudioSource::AudioBeams()
    {
        throw hresult_not_implemented();
    }
}
