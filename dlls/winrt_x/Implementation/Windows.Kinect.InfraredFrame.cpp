#include "pch.h"
#include "Windows.Kinect.InfraredFrame.h"
#include "Windows.Kinect.InfraredFrame.g.cpp"


namespace winrt::Windows::Kinect::implementation
{
    void InfraredFrame::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InfraredFrame::CopyFrameDataToArray(array_view<uint16_t> frameData)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void InfraredFrame::CopyFrameDataToBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Storage::Streams::IBuffer InfraredFrame::LockImageBuffer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::FrameDescription InfraredFrame::FrameDescription()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan InfraredFrame::RelativeTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Kinect::InfraredFrameSource InfraredFrame::InfraredFrameSource()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
