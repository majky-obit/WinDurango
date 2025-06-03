#include "pch.h"
#include "Windows.Kinect.InfraredFrame.h"
#include "Windows.Kinect.InfraredFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void InfraredFrame::Close()
    {
        throw hresult_not_implemented();
    }
    void InfraredFrame::CopyFrameDataToArray(array_view<uint16_t> frameData)
    {
        throw hresult_not_implemented();
    }
    void InfraredFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer InfraredFrame::LockImageBuffer()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription InfraredFrame::FrameDescription()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan InfraredFrame::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameSource InfraredFrame::InfraredFrameSource()
    {
        throw hresult_not_implemented();
    }
}
