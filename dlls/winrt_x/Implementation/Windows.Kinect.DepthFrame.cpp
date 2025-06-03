#include "pch.h"
#include "Windows.Kinect.DepthFrame.h"
#include "Windows.Kinect.DepthFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void DepthFrame::Close()
    {
        throw hresult_not_implemented();
    }
    void DepthFrame::CopyFrameDataToArray(array_view<uint16_t> frameData)
    {
        throw hresult_not_implemented();
    }
    void DepthFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer DepthFrame::LockImageBuffer()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription DepthFrame::FrameDescription()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan DepthFrame::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::DepthFrameSource DepthFrame::DepthFrameSource()
    {
        throw hresult_not_implemented();
    }
    uint16_t DepthFrame::DepthMinReliableDistance()
    {
        throw hresult_not_implemented();
    }
    uint16_t DepthFrame::DepthMaxReliableDistance()
    {
        throw hresult_not_implemented();
    }
}
