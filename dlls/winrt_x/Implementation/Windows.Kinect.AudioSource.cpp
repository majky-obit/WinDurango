#include "pch.h"
#include "Windows.Kinect.AudioSource.h"
#include "Windows.Kinect.AudioSource.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::event_token AudioSource::FrameCaptured(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Kinect::AudioSource, winrt::Windows::Kinect::FrameCapturedEventArgs> const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void AudioSource::FrameCaptured(winrt::event_token const& token) noexcept
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::KinectSensor AudioSource::KinectSensor()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool AudioSource::IsActive()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t AudioSource::SubFrameLengthInBytes()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioSource::SubFrameDuration()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t AudioSource::MaxSubFrameCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioFrameReader AudioSource::OpenReader()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeam> AudioSource::AudioBeams()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
