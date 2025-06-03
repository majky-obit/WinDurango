#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringSetting.h"
#include "Microsoft.Xbox.Services.Clubs.ClubStringSetting.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring ClubStringSetting::Value()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> ClubStringSetting::AllowedValues()
    {
        throw hresult_not_implemented();
    }
    bool ClubStringSetting::CanViewerChangeSetting()
    {
        throw hresult_not_implemented();
    }
}
