#include "pch.h"
#include "Windows.Kinect.BodyIndexFrame.h"
#include "Windows.Kinect.BodyIndexFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void BodyIndexFrame::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyIndexFrame::CopyFrameDataToArray(array_view<uint8_t> frameData)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void BodyIndexFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer BodyIndexFrame::LockImageBuffer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription BodyIndexFrame::FrameDescription()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan BodyIndexFrame::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::BodyIndexFrameSource BodyIndexFrame::BodyIndexFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
