#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveContext.h"

#include "Microsoft.Xbox.Services.Presence.PresenceService.h"
#include "Microsoft.Xbox.Services.XboxLiveContext.g.cpp"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.h"
#include "Microsoft.Xbox.Services.Social.SocialService.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.h"


namespace winrt::Microsoft::Xbox::Services::implementation
{
    XboxLiveContext::XboxLiveContext(winrt::Windows::Xbox::System::User const& user)
    {
        printf("[Microsoft::Xbox::Services::XboxLiveContext] Constructor called\n");
        //m_MultiplayerService = winrt::make<Multiplayer::implementation::MultiplayerService>();
    }
    winrt::Windows::Xbox::System::User XboxLiveContext::User()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [User] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::ProfileService XboxLiveContext::ProfileService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [ProfileService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::SocialService XboxLiveContext::SocialService()
    {
        return winrt::make<winrt::Microsoft::Xbox::Services::Social::implementation::SocialService>( );
    }
    winrt::Microsoft::Xbox::Services::Social::ReputationService XboxLiveContext::ReputationService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [ReputationService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementService XboxLiveContext::AchievementService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [AchievementService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardService XboxLiveContext::LeaderboardService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [LeaderboardService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsService XboxLiveContext::UserStatisticsService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [UserStatisticsService] THIS FUNCTION IS STUBBED !!!!\n");
		return winrt::make<UserStatistics::implementation::UserStatisticsService>( );
    }
    winrt::Microsoft::Xbox::Services::Matchmaking::MatchmakingService XboxLiveContext::MatchmakingService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [MatchmakingService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerService XboxLiveContext::MultiplayerService()
    {
        return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerService>( );
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentService XboxLiveContext::TournamentService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [TournamentService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityService XboxLiveContext::RealTimeActivityService()
    {
		return winrt::make<RealTimeActivity::implementation::RealTimeActivityService>( );
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceService XboxLiveContext::PresenceService()
    {
		return winrt::make<Presence::implementation::PresenceService>( );
    }
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPlatformService XboxLiveContext::GameServerPlatformService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [GameServerPlatformService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageService XboxLiveContext::TitleStorageService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [TitleStorageService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Privacy::PrivacyService XboxLiveContext::PrivacyService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [PrivacyService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::System::StringService XboxLiveContext::StringService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [StringService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchService XboxLiveContext::ContextualSearchService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [ContextualSearchService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubsService XboxLiveContext::ClubsService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [ClubsService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::CatalogService XboxLiveContext::CatalogService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [CatalogService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::InventoryService XboxLiveContext::InventoryService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [InventoryService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListService XboxLiveContext::EntertainmentProfileListService()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [EntertainmentProfileListService] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::XboxLiveContextSettings XboxLiveContext::Settings()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [Settings] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration XboxLiveContext::AppConfig()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [AppConfig] NOT IMPLEMENTED !!!!\n");
        throw hresult_not_implemented();
    }
}
