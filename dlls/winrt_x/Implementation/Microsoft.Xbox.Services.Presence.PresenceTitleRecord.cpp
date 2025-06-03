#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceTitleRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    uint32_t PresenceTitleRecord::TitleId()
    {
        throw hresult_not_implemented();
    }
    hstring PresenceTitleRecord::TitleName()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime PresenceTitleRecord::LastModifiedDate()
    {
        throw hresult_not_implemented();
    }
    bool PresenceTitleRecord::IsTitleActive()
    {
        throw hresult_not_implemented();
    }
    hstring PresenceTitleRecord::Presence()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceTitleViewState PresenceTitleRecord::TitleViewState()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceBroadcastRecord PresenceTitleRecord::BroadcastRecord()
    {
        throw hresult_not_implemented();
    }
}
