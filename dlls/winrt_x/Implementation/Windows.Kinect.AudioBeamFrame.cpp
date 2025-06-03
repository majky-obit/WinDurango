#include "pch.h"
#include "Windows.Kinect.AudioBeamFrame.h"
#include "Windows.Kinect.AudioBeamFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void AudioBeamFrame::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioSource AudioBeamFrame::AudioSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamFrame::Duration()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamFrame::RelativeTimeStart()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeam AudioBeamFrame::AudioBeam()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamSubFrame> AudioBeamFrame::SubFrames()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
