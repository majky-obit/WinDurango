#include "pch.h"
#include "Windows.Xbox.System.UserDisplayInfo.h"
#include "Windows.Xbox.System.UserDisplayInfo.g.cpp"

namespace winrt::Windows::Xbox::System::implementation
{
    hstring UserDisplayInfo::Gamertag()
    {
        printf("!!!!! Windows.Xbox.System.UserDisplayInfo [Gamertag] NOT IMPLEMENTED !!!!\n");
		hstring gamertag = L"durangler" + m_gamertag;
        return gamertag;
    }
    uint32_t UserDisplayInfo::GamerScore()
    {
        printf("!!!!! Windows.Xbox.System.UserDisplayInfo [GamerScore] NOT IMPLEMENTED !!!!\n");
        return 0;
    }
    hstring UserDisplayInfo::ApplicationDisplayName()
    {
        printf("!!!!! Windows.Xbox.System.UserDisplayInfo [ApplicationDisplayName] NOT IMPLEMENTED !!!!\n");
        return winrt::to_hstring("WinDurango");
    }
    hstring UserDisplayInfo::GameDisplayName()
    {

        printf("!!!!! Windows.Xbox.System.UserDisplayInfo [GameDisplayName] NOT IMPLEMENTED !!!!\n");
        hstring gamertag = L"durangler" + m_gamertag;
        return gamertag;
    }
    int32_t UserDisplayInfo::Reputation()
    {
        printf("!!!!! Windows.Xbox.System.UserDisplayInfo [Reputation] NOT IMPLEMENTED !!!!\n");
        return 1;
    }
    winrt::Windows::Xbox::System::UserAgeGroup UserDisplayInfo::AgeGroup()
    {
        printf("!!!!! Windows.Xbox.System.UserDisplayInfo [AgeGroup] NOT IMPLEMENTED !!!!\n");
        return UserAgeGroup::Unknown;
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint32_t> UserDisplayInfo::Privileges()
    {   
        printf("!!!!! Windows.Xbox.System.UserDisplayInfo [Privileges] NOT IMPLEMENTED !!!!\n");

        auto vector = winrt::single_threaded_vector<uint32_t>();
        vector.Append(1);
        return vector.GetView();
    }
}
