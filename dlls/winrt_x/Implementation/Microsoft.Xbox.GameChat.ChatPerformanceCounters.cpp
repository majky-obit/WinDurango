#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.h"
#include "Microsoft.Xbox.GameChat.ChatPerformanceCounters.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::CaptureExecutionTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::SendExecutionTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::RenderExecutionTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::AudioThreadExecutionTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::AudioThreadPeriodTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatPerformanceTime ChatPerformanceCounters::IncomingPacketTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    double ChatPerformanceCounters::IncomingPacketBandwidthBitsPerSecond()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    double ChatPerformanceCounters::OutgoingPacketBandwidthBitsPerSecond()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
