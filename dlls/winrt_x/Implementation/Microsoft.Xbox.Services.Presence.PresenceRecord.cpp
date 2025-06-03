#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceRecord::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::UserPresenceState PresenceRecord::UserState()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceRecord> PresenceRecord::PresenceDeviceRecords()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool PresenceRecord::IsUserPlayingTitle(uint32_t titleId)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
