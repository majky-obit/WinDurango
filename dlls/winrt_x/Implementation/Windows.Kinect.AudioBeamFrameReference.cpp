#include "pch.h"
#include "Windows.Kinect.AudioBeamFrameReference.h"
#include "Windows.Kinect.AudioBeamFrameReference.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Kinect::AudioBeamFrame> AudioBeamFrameReference::AcquireBeamFrames()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan AudioBeamFrameReference::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
