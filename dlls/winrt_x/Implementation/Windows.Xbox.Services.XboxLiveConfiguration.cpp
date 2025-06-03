#include "pch.h"
#include "Windows.Xbox.Services.XboxLiveConfiguration.h"
#include "Windows.Xbox.Services.XboxLiveConfiguration.g.cpp"
#include <stdio.h>

namespace winrt::Windows::Xbox::Services::implementation
{
    hstring XboxLiveConfiguration::TitleId()
    {
		Logger::Warning("TODO: XboxLiveConfiguration::TitleId\n");
        return L"0";
    }
    hstring XboxLiveConfiguration::PrimaryServiceConfigId()
    {
        Logger::Warning("TODO: XboxLiveConfiguration::PrimaryServiceConfigId\n");
        return L"000013";
    }
    hstring XboxLiveConfiguration::SandboxId()
    {
        Logger::Warning("TODO: XboxLiveConfiguration::SandboxId\n");
        return L"0";
    }
}
