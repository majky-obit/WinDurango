#include "pch.h"
#include "Microsoft.Xbox.Services.Privacy.PermissionDenyReason.h"
#include "Microsoft.Xbox.Services.Privacy.PermissionDenyReason.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Privacy::implementation
{
    hstring PermissionDenyReason::Reason()
    {
        throw hresult_not_implemented();
    }
    hstring PermissionDenyReason::RestrictedSetting()
    {
        throw hresult_not_implemented();
    }
}
