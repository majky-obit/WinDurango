#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringSetting.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubStringSetting::Value()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringSetting::AllowedValues()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ClubStringSetting::CanViewerChangeSetting()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
