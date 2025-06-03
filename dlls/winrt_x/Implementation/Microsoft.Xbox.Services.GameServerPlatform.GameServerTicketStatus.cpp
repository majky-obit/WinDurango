#include "pch.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerTicketStatus.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerTicketStatus.g.cpp"


namespace winrt::Microsoft::Xbox::Services::GameServerPlatform::implementation
{
    hstring GameServerTicketStatus::TicketId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::ClusterId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t GameServerTicketStatus::TitleId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::HostName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerHostStatus GameServerTicketStatus::Status()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::Description()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::SecureContext()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPortMapping> GameServerTicketStatus::PortMappings()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::GameHostId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring GameServerTicketStatus::Region()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
