#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceBroadcastRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceBroadcastRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceBroadcastRecord::BroadcastId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring PresenceBroadcastRecord::Session()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring PresenceBroadcastRecord::Provider()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t PresenceBroadcastRecord::ViewerCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime PresenceBroadcastRecord::StartTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
