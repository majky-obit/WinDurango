#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType PresenceDeviceRecord::DeviceType()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceTitleRecord> PresenceDeviceRecord::PresenceTitleRecords()
    {
        throw hresult_not_implemented();
    }
}
