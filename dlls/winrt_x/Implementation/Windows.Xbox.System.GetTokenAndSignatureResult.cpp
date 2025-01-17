#include "pch.h"
#include "Windows.Xbox.System.GetTokenAndSignatureResult.h"
#include "Windows.Xbox.System.GetTokenAndSignatureResult.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring GetTokenAndSignatureResult::Signature()
    {
		return L"Signature";
    }
    hstring GetTokenAndSignatureResult::Token()
    {
		return L"Token";
    }
}
