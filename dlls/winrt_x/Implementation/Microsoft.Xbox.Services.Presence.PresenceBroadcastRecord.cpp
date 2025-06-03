#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceBroadcastRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceBroadcastRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceBroadcastRecord::BroadcastId()
    {
        throw hresult_not_implemented();
    }
    hstring PresenceBroadcastRecord::Session()
    {
        throw hresult_not_implemented();
    }
    hstring PresenceBroadcastRecord::Provider()
    {
        throw hresult_not_implemented();
    }
    uint32_t PresenceBroadcastRecord::ViewerCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime PresenceBroadcastRecord::StartTime()
    {
        throw hresult_not_implemented();
    }
}
