#pragma once
#include "Windows.Xbox.System.GetTokenAndSignatureResult.g.h"

namespace winrt::Windows::Xbox::System::implementation
{
    struct GetTokenAndSignatureResult : GetTokenAndSignatureResultT<GetTokenAndSignatureResult>
    {
        GetTokenAndSignatureResult() = default;

        hstring Signature();
        hstring Token();
    };
}
