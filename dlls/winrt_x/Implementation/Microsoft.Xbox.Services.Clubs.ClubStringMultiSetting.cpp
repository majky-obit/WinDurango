#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::Values()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::AllowedValues()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ClubStringMultiSetting::CanViewerChangeSetting()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
