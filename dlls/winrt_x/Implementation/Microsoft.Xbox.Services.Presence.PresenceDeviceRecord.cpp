#include "pch.h"
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.h"
#include "Microsoft.Xbox.Services.Presence.PresenceDeviceRecord.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Presence::implementation
{
    winrt::Microsoft::Xbox::Services::Presence::PresenceDeviceType PresenceDeviceRecord::DeviceType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Presence::PresenceTitleRecord> PresenceDeviceRecord::PresenceTitleRecords()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
