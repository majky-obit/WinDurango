#include "pch.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTimeWindow.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementTimeWindow.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Achievements::implementation
{
    winrt::Windows::Foundation::DateTime AchievementTimeWindow::StartDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime AchievementTimeWindow::EndDate()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
