#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    hstring PresenceRecord::XboxUserId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Presence::UserPresenceState PresenceRecord::UserState()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceRecord> PresenceRecord::PresenceDeviceRecords()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool PresenceRecord::IsUserPlayingTitle(uint32_t titleId)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
