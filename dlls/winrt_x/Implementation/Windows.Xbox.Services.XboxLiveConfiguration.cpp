#include "pch.h"
#include "Windows.Xbox.Services.XboxLiveConfiguration.h"
#include "Windows.Xbox.Services.XboxLiveConfiguration.g.cpp"
#include <stdio.h>

namespace winrt::Windows::Xbox::Services::implementation
{
    hstring XboxLiveConfiguration::TitleId()
    {
		printf("TODO: XboxLiveConfiguration::TitleId\n");
        return L"0";
    }
    hstring XboxLiveConfiguration::PrimaryServiceConfigId()
    {
        printf("TODO: XboxLiveConfiguration::PrimaryServiceConfigId\n");
        return L"000013";
    }
    hstring XboxLiveConfiguration::SandboxId()
    {
        printf("TODO: XboxLiveConfiguration::SandboxId\n");
        return L"0";
    }
}
