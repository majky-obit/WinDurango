#include "pch.h"
#include "Windows.Kinect.AudioBeamSubFrame.h"
#include "Windows.Kinect.AudioBeamSubFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void AudioBeamSubFrame::Close()
    {
        throw hresult_not_implemented();
    }
    uint32_t AudioBeamSubFrame::FrameLengthInBytes()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamSubFrame::Duration()
    {
        throw hresult_not_implemented();
    }
    float AudioBeamSubFrame::BeamAngle()
    {
        throw hresult_not_implemented();
    }
    float AudioBeamSubFrame::BeamAngleConfidence()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeamMode AudioBeamSubFrame::AudioBeamMode()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamSubFrame::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBodyCorrelation> AudioBeamSubFrame::AudioBodyCorrelations()
    {
        throw hresult_not_implemented();
    }
    void AudioBeamSubFrame::CopyFrameDataToArray(array_view<uint8_t> frameData)
    {
        throw hresult_not_implemented();
    }
    void AudioBeamSubFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer AudioBeamSubFrame::LockAudioBuffer()
    {
        throw hresult_not_implemented();
    }
}
