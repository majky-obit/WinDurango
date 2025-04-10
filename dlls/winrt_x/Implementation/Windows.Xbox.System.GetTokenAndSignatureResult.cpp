#include "pch.h"
#include "Windows.Xbox.System.GetTokenAndSignatureResult.h"
#include "Windows.Xbox.System.GetTokenAndSignatureResult.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring GetTokenAndSignatureResult::Signature()
    {
        printf("%s called\n", __FUNCTION__);

        return L"";
    }

    hstring GetTokenAndSignatureResult::Token()
    {
        printf("%s called\n", __FUNCTION__);

        return L"";
    }
}
