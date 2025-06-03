#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticEvent.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticEvent.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    winrt::Windows::Xbox::System::User StatisticEvent::User()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEventType StatisticEvent::EventType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    int32_t StatisticEvent::ErrorCode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring StatisticEvent::ErrorMessage()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEventArgs StatisticEvent::EventArgs()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
