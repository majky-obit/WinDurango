#include "pch.h"
#include "Windows.Kinect.AudioBeam.h"
#include "Windows.Kinect.AudioBeam.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Kinect::AudioSource AudioBeam::AudioSource()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeamMode AudioBeam::AudioBeamMode()
    {
        throw hresult_not_implemented();
    }
    void AudioBeam::AudioBeamMode(winrt::Windows::Kinect::AudioBeamMode const& audioBeamMode)
    {
        throw hresult_not_implemented();
    }
    float AudioBeam::BeamAngle()
    {
        throw hresult_not_implemented();
    }
    void AudioBeam::BeamAngle(float beamAngle)
    {
        throw hresult_not_implemented();
    }
    float AudioBeam::BeamAngleConfidence()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeam::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IInputStream AudioBeam::OpenInputStream()
    {
        throw hresult_not_implemented();
    }
}
