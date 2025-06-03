#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::CaptureExecutionTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::SendExecutionTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::RenderExecutionTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::AudioThreadExecutionTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::AudioThreadPeriodTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::IncomingPacketTime()
    {
        throw hresult_not_implemented();
    }
    double ChatPerformanceCounters::IncomingPacketBandwidthBitsPerSecond()
    {
        throw hresult_not_implemented();
    }
    double ChatPerformanceCounters::OutgoingPacketBandwidthBitsPerSecond()
    {
        throw hresult_not_implemented();
    }
}
