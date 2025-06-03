#include "pch.h"
#include "Microsoft.Xbox.Services.UserStatistics.RequestedStatistics.h"
#include "Microsoft.Xbox.Services.UserStatistics.RequestedStatistics.g.cpp"


namespace winrt::Microsoft::Xbox::Services::UserStatistics::implementation
{
    RequestedStatistics::RequestedStatistics(hstring const& serviceConfigurationId, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& statistics)
    {
        throw hresult_not_implemented();
    }
    hstring RequestedStatistics::ServiceConfigurationId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> RequestedStatistics::Statistics()
    {
        throw hresult_not_implemented();
    }
}
