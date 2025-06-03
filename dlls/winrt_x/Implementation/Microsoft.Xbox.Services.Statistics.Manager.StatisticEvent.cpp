#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticEvent.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticEvent.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    winrt::Windows::Xbox::System::User StatisticEvent::User()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEventType StatisticEvent::EventType()
    {
        throw hresult_not_implemented();
    }
    int32_t StatisticEvent::ErrorCode()
    {
        throw hresult_not_implemented();
    }
    hstring StatisticEvent::ErrorMessage()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticEventArgs StatisticEvent::EventArgs()
    {
        throw hresult_not_implemented();
    }
}
