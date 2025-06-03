#include "pch.h"
#include "Windows.Kinect.AudioBeamFrame.h"
#include "Windows.Kinect.AudioBeamFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void AudioBeamFrame::Close()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioSource AudioBeamFrame::AudioSource()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamFrame::Duration()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamFrame::RelativeTimeStart()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeam AudioBeamFrame::AudioBeam()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamSubFrame> AudioBeamFrame::SubFrames()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
