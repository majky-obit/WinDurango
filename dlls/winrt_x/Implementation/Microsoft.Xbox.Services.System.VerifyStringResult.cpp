#include "pch.h"
#include "Microsoft.Xbox.Services.System.VerifyStringResult.h"
#include "Microsoft.Xbox.Services.System.VerifyStringResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::System::implementation
{
    winrt::Microsoft::Xbox::Services::System::VerifyStringResultCode VerifyStringResult::ResultCode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring VerifyStringResult::FirstOffendingSubstring()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
