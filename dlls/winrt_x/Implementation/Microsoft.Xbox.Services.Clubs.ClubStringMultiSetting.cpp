#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringMultiSetting.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::Values()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringMultiSetting::AllowedValues()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ClubStringMultiSetting::CanViewerChangeSetting()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
