#include "pch.h"
#include "Microsoft.Xbox.Services.Social.SocialGroupConstants.h"
#include "Microsoft.Xbox.Services.Social.SocialGroupConstants.g.cpp"

namespace winrt::Microsoft::Xbox::Services::Social::implementation
{
    hstring SocialGroupConstants::Favorite()
    {
		return L"favorite";
    }
    hstring SocialGroupConstants::People()
    {
		return L"people";
    }
}
