#include "pch.h"
#include "Windows.Kinect.BodyIndexFrame.h"
#include "Windows.Kinect.BodyIndexFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyIndexFrame::Close()
    {
        throw hresult_not_implemented();
    }
    void BodyIndexFrame::CopyFrameDataToArray(array_view<uint8_t> frameData)
    {
        throw hresult_not_implemented();
    }
    void BodyIndexFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer BodyIndexFrame::LockImageBuffer()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription BodyIndexFrame::FrameDescription()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan BodyIndexFrame::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrame::BodyIndexFrameSource()
    {
        throw hresult_not_implemented();
    }
}
