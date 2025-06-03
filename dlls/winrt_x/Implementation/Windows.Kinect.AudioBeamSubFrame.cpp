#include "pch.h"
#include "Windows.Kinect.AudioBeamSubFrame.h"
#include "Windows.Kinect.AudioBeamSubFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void AudioBeamSubFrame::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t AudioBeamSubFrame::FrameLengthInBytes()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamSubFrame::Duration()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float AudioBeamSubFrame::BeamAngle()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float AudioBeamSubFrame::BeamAngleConfidence()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::AudioBeamMode AudioBeamSubFrame::AudioBeamMode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamSubFrame::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBodyCorrelation> AudioBeamSubFrame::AudioBodyCorrelations()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void AudioBeamSubFrame::CopyFrameDataToArray(array_view<uint8_t> frameData)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void AudioBeamSubFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer AudioBeamSubFrame::LockAudioBuffer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
