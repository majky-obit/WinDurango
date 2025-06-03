#include "pch.h"
#include "Windows.Xbox.System.UserDisplayInfo.h"
#include "Windows.Xbox.System.UserDisplayInfo.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring UserDisplayInfo::Gamertag()
    {
        LOG_NOTIMPLEMENTED();
        hstring gamertag = L"durangler" + m_gamertag;
        return gamertag;
    }
    uint32_t UserDisplayInfo::GamerScore()
    {
        LOG_NOTIMPLEMENTED(); return 0;
    }
    hstring UserDisplayInfo::ApplicationDisplayName()
    {
        LOG_NOTIMPLEMENTED();
        return winrt::to_hstring("WinDurango");
    }
    hstring UserDisplayInfo::GameDisplayName()
    {

        LOG_NOTIMPLEMENTED();
        hstring gamertag = L"durangler" + m_gamertag;
        return gamertag;
    }
    int32_t UserDisplayInfo::Reputation()
    {
        LOG_NOTIMPLEMENTED();
        return 1;
    }
    winrt::Windows::Xbox::System::UserAgeGroup UserDisplayInfo::AgeGroup()
    {
		Logger::Info("UserDisplayInfo::AgeGroup() called");
        return UserAgeGroup::Unknown;
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> UserDisplayInfo::Privileges()
    {   
        LOG_NOTIMPLEMENTED();
        auto vector = winrt::single_threaded_vector<uint32_t>();
        vector.Append(1);
        return vector.GetView();
    }
}
