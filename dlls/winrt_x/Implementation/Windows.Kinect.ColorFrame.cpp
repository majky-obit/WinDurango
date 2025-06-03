#include "pch.h"
#include "Windows.Kinect.ColorFrame.h"
#include "Windows.Kinect.ColorFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void ColorFrame::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorImageFormat ColorFrame::RawColorImageFormat()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrame::FrameDescription()
    {
        throw hresult_not_implemented();
    }
    void ColorFrame::CopyRawFrameDataToArray(array_view<uint8_t> frameData)
    {
        throw hresult_not_implemented();
    }
    void ColorFrame::CopyRawFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer ColorFrame::LockRawImageBuffer()
    {
        throw hresult_not_implemented();
    }
    void ColorFrame::CopyConvertedFrameDataToArray(array_view<uint8_t> frameData, winrt::Windows::Kinect::ColorImageFormat const& colorFormat)
    {
        throw hresult_not_implemented();
    }
    void ColorFrame::CopyConvertedFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Kinect::ColorImageFormat const& colorFormat)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrame::CreateFrameDescription(winrt::Windows::Kinect::ColorImageFormat const& format)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan ColorFrame::RelativeTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameSource ColorFrame::ColorFrameSource()
    {
        throw hresult_not_implemented();
    }
}
