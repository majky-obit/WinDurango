#include "pch.h"
#include "Windows.Kinect.AudioBeamFrame.h"
#include "Windows.Kinect.AudioBeamFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void AudioBeamFrame::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioSource AudioBeamFrame::AudioSource()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamFrame::Duration()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamFrame::RelativeTimeStart()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeam AudioBeamFrame::AudioBeam()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamSubFrame> AudioBeamFrame::SubFrames()
    {
        throw hresult_not_implemented();
    }
}
