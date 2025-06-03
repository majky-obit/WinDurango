#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::Values()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::AllowedValues()
    {
        throw hresult_not_implemented();
    }
    bool ClubStringMultiSetting::CanViewerChangeSetting()
    {
        throw hresult_not_implemented();
    }
}
