#include "pch.h"
#include "Windows.Kinect.ColorFrame.h"
#include "Windows.Kinect.ColorFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void ColorFrame::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorImageFormat ColorFrame::RawColorImageFormat()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrame::FrameDescription()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ColorFrame::CopyRawFrameDataToArray(array_view<uint8_t> frameData)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ColorFrame::CopyRawFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer ColorFrame::LockRawImageBuffer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ColorFrame::CopyConvertedFrameDataToArray(array_view<uint8_t> frameData, winrt::Windows::Kinect::ColorImageFormat const& colorFormat)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ColorFrame::CopyConvertedFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer, winrt::Windows::Kinect::ColorImageFormat const& colorFormat)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription ColorFrame::CreateFrameDescription(winrt::Windows::Kinect::ColorImageFormat const& format)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan ColorFrame::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::ColorFrameSource ColorFrame::ColorFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
