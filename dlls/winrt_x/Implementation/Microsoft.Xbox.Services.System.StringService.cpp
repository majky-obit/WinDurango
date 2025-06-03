#include "pch.h"
#include "Microsoft.Xbox.Services.System.StringService.h"
#include "Microsoft.Xbox.Services.System.StringService.g.cpp"


namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::System::VerifyStringResult> StringService::VerifyStringAsync(hstring stringToVerify)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::System::VerifyStringResult>> StringService::VerifyStringsAsync(winrt::Windows::Foundation::Collections::IVectorView<hstring> stringsToVerify)
    {
        throw hresult_not_implemented();
    }
}
