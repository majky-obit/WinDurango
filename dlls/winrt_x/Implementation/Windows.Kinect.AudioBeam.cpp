#include "pch.h"
#include "Windows.Kinect.AudioBeam.h"
#include "Windows.Kinect.AudioBeam.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::AudioSource AudioBeam::AudioSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeamMode AudioBeam::AudioBeamMode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void AudioBeam::AudioBeamMode(winrt::Windows::Kinect::AudioBeamMode const& audioBeamMode)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float AudioBeam::BeamAngle()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void AudioBeam::BeamAngle(float beamAngle)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float AudioBeam::BeamAngleConfidence()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeam::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IInputStream AudioBeam::OpenInputStream()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
