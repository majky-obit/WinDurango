#include "pch.h"
#include "Microsoft.Xbox.Services.Privacy.MultiplePermissionsCheckResult.h"
#include "Microsoft.Xbox.Services.Privacy.MultiplePermissionsCheckResult.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    hstring MultiplePermissionsCheckResult::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Privacy::PermissionCheckResult> MultiplePermissionsCheckResult::Items()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
