#include "pch.h"
#include "Windows.Xbox.System.UserDisplayInfo.h"
#include "Windows.Xbox.System.UserDisplayInfo.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring UserDisplayInfo::Gamertag()
    {
        Logger::NotImplemented( );
        hstring gamertag = L"durangler" + m_gamertag;
        return gamertag;
    }
    uint32_t UserDisplayInfo::GamerScore()
    {
        Logger::NotImplemented( );
        Logger::NotImplemented(); return 0;
    }
    hstring UserDisplayInfo::ApplicationDisplayName()
    {
        Logger::NotImplemented( );
        return winrt::to_hstring("WinDurango");
    }
    hstring UserDisplayInfo::GameDisplayName()
    {

        Logger::NotImplemented( );
        hstring gamertag = L"durangler" + m_gamertag;
        return gamertag;
    }
    int32_t UserDisplayInfo::Reputation()
    {
        Logger::NotImplemented( );
        return 1;
    }
    winrt::Windows::Xbox::System::UserAgeGroup UserDisplayInfo::AgeGroup()
    {
        Logger::NotImplemented( );
        return UserAgeGroup::Unknown;
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> UserDisplayInfo::Privileges()
    {   
        Logger::NotImplemented( );
        auto vector = winrt::single_threaded_vector<uint32_t>();
        vector.Append(1);
        return vector.GetView();
    }
}
