#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.RequestedStatistics.h"
#include "Microsoft.Xbox.Services.UserStatistics.RequestedStatistics.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    RequestedStatistics::RequestedStatistics(hstring const& serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& statistics)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring RequestedStatistics::ServiceConfigurationId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> RequestedStatistics::Statistics()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
