#include "pch.h"
#include "Microsoft.Xbox.Services.XboxLiveContext.h"

#include "Windows.Xbox.System.User.h"
#include "Microsoft.Xbox.Services.Presence.PresenceService.h"
#include "Microsoft.Xbox.Services.XboxLiveContext.g.cpp"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerService.h"
#include "Microsoft.Xbox.Services.Social.SocialService.h"
#include "Microsoft.Xbox.Services.UserStatistics.UserStatisticsService.h"
#include "Microsoft.Xbox.Services.Leaderboard.LeaderboardService.h"
#include "Microsoft.Xbox.Services.Matchmaking.MatchmakingService.h"
#include "Microsoft.Xbox.Services.Tournaments.TournamentService.h"
#include "Microsoft.Xbox.Services.RealTimeActivity.RealTimeActivityService.h"
#include "Microsoft.Xbox.Services.ContextualSearch.ContextualSearchService.h"
#include "Microsoft.Xbox.Services.Clubs.ClubsService.h"
#include "Microsoft.Xbox.Services.Marketplace.CatalogService.h"
#include "Microsoft.Xbox.Services.Marketplace.InventoryService.h"
#include "Microsoft.Xbox.Services.System.StringService.h"
#include "Microsoft.Xbox.Services.Social.ProfileService.h"
#include "Microsoft.Xbox.Services.Social.ReputationService.h"
#include "Microsoft.Xbox.Services.EntertainmentProfile.EntertainmentProfileListService.h"
#include "Microsoft.Xbox.Services.TitleStorage.TitleStorageService.h"
#include "Microsoft.Xbox.Services.Achievements.AchievementService.h"
#include "Microsoft.Xbox.Services.GameServerPlatform.GameServerPlatformService.h"
#include "Microsoft.Xbox.Services.Privacy.PrivacyService.h"

namespace winrt::Microsoft::Xbox::Services::implementation
{
    XboxLiveContext::XboxLiveContext(winrt::Windows::Xbox::System::User const& user)
    {
        printf("[Microsoft::Xbox::Services::XboxLiveContext] Constructor called\n");
    }
    winrt::Windows::Xbox::System::User XboxLiveContext::User()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] User called\n");
        return winrt::Windows::Xbox::System::implementation::User::Users().GetAt(0);
    }
    winrt::Microsoft::Xbox::Services::Social::ProfileService XboxLiveContext::ProfileService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] ProfileService called\n");
		return winrt::make<Social::implementation::ProfileService>( );
    }
    winrt::Microsoft::Xbox::Services::Social::SocialService XboxLiveContext::SocialService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] SocialService called\n");
        return winrt::make<winrt::Microsoft::Xbox::Services::Social::implementation::SocialService>( );
    }
    winrt::Microsoft::Xbox::Services::Social::ReputationService XboxLiveContext::ReputationService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] ReputationService called\n");
		return winrt::make<Social::implementation::ReputationService>( );
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementService XboxLiveContext::AchievementService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] AchievementService called\n");
		return winrt::make<Achievements::implementation::AchievementService>();
    }
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardService XboxLiveContext::LeaderboardService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] LeaderboardService called\n");
		return winrt::make<Leaderboard::implementation::LeaderboardService>( );
    }
    winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsService XboxLiveContext::UserStatisticsService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] UserStatisticsService called\n");
		return winrt::make<UserStatistics::implementation::UserStatisticsService>( );
    }
    winrt::Microsoft::Xbox::Services::Matchmaking::MatchmakingService XboxLiveContext::MatchmakingService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] MatchmakingService called\n");
		return winrt::make<Matchmaking::implementation::MatchmakingService>( );
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerService XboxLiveContext::MultiplayerService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] MultiplayerService called\n");
        return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerService>( );
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentService XboxLiveContext::TournamentService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] TournamentService called\n");
		return winrt::make<Tournaments::implementation::TournamentService>( );
    }
    winrt::Microsoft::Xbox::Services::RealTimeActivity::RealTimeActivityService XboxLiveContext::RealTimeActivityService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] RealTimeActivityService called\n");
		return winrt::make<RealTimeActivity::implementation::RealTimeActivityService>( );
    }
    winrt::Microsoft::Xbox::Services::Presence::PresenceService XboxLiveContext::PresenceService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] PresenceService called\n");
		return winrt::make<Presence::implementation::PresenceService>( );
    }
    winrt::Microsoft::Xbox::Services::GameServerPlatform::GameServerPlatformService XboxLiveContext::GameServerPlatformService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] GameServerPlatformService called\n");
		return winrt::make<GameServerPlatform::implementation::GameServerPlatformService>( );
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageService XboxLiveContext::TitleStorageService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] TitleStorageService called\n");
        return winrt::make <TitleStorage::implementation::TitleStorageService>( );
    }
    winrt::Microsoft::Xbox::Services::Privacy::PrivacyService XboxLiveContext::PrivacyService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] PrivacyService called\n");
		return winrt::make<Privacy::implementation::PrivacyService>( );
    }
    winrt::Microsoft::Xbox::Services::System::StringService XboxLiveContext::StringService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] StringService called\n");
		return winrt::make<System::implementation::StringService>( );
    }
    winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchService XboxLiveContext::ContextualSearchService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] ContextualSearchService called\n");
		return winrt::make<ContextualSearch::implementation::ContextualSearchService>( );
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubsService XboxLiveContext::ClubsService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] ClubsService called\n");
		return winrt::make<Clubs::implementation::ClubsService>( );
    }
    winrt::Microsoft::Xbox::Services::Marketplace::CatalogService XboxLiveContext::CatalogService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] CatalogService called\n");
		return winrt::make<Marketplace::implementation::CatalogService>( );
    }
    winrt::Microsoft::Xbox::Services::Marketplace::InventoryService XboxLiveContext::InventoryService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] InventoryService called\n");
		return winrt::make<Marketplace::implementation::InventoryService>( );
    }
    winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListService XboxLiveContext::EntertainmentProfileListService()
    {
		printf("[Microsoft::Xbox::Services::XboxLiveContext] EntertainmentProfileListService called\n");
		return winrt::make<EntertainmentProfile::implementation::EntertainmentProfileListService>( );
    }
    winrt::Microsoft::Xbox::Services::XboxLiveContextSettings XboxLiveContext::Settings()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [Settings] NOT IMPLEMENTED !!!!\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration XboxLiveContext::AppConfig()
    {
        printf("!!!!! Microsoft.Xbox.Services.XboxLiveContext [AppConfig] NOT IMPLEMENTED !!!!\n");
        printf("%s called\n", __FUNCTION__); throw hresult_not_implemented();
    }
}
