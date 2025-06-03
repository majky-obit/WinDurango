#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::CaptureExecutionTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::SendExecutionTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::RenderExecutionTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::AudioThreadExecutionTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::AudioThreadPeriodTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::IncomingPacketTime()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    double ChatPerformanceCounters::IncomingPacketBandwidthBitsPerSecond()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    double ChatPerformanceCounters::OutgoingPacketBandwidthBitsPerSecond()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
