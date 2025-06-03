#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    uint32_t PresenceTitleRecord::TitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring PresenceTitleRecord::TitleName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime PresenceTitleRecord::LastModifiedDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool PresenceTitleRecord::IsTitleActive()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring PresenceTitleRecord::Presence()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceTitleViewState PresenceTitleRecord::TitleViewState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceBroadcastRecord PresenceTitleRecord::BroadcastRecord()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
