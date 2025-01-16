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
        return winrt::Windows::Xbox::System::implementation::User::Users().GetAt(0);
    }
    winrt::Microsoft::Xbox::Services::Social::ProfileService XboxLiveContext::ProfileService()
    {
		return winrt::make<Social::implementation::ProfileService>( );
    }
    winrt::Microsoft::Xbox::Services::Social::SocialService XboxLiveContext::SocialService()
    {
        return winrt::make<winrt::Microsoft::Xbox::Services::Social::implementation::SocialService>( );
    }
    winrt::Microsoft::Xbox::Services::Social::ReputationService XboxLiveContext::ReputationService()
    {
		return winrt::make<Social::implementation::ReputationService>( );
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementService XboxLiveContext::AchievementService()
    {
		return winrt::make<Achievements::implementation::AchievementService>();
    }
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardService XboxLiveContext::LeaderboardService()
    {
		return winrt::make<Leaderboard::implementation::LeaderboardService>( );
    }
    winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsService XboxLiveContext::UserStatisticsService()
    {
		return winrt::make<UserStatistics::implementation::UserStatisticsService>( );
    }
    winrt::Microsoft::Xbox::Services::Matchmaking::MatchmakingService XboxLiveContext::MatchmakingService()
    {
		return winrt::make<Matchmaking::implementation::MatchmakingService>( );
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerService XboxLiveContext::MultiplayerService()
    {
        return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerService>( );
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentService XboxLiveContext::TournamentService()
    {
		return winrt::make<Tournaments::implementation::TournamentService>( );
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
		return winrt::make<GameServerPlatform::implementation::GameServerPlatformService>( );
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageService XboxLiveContext::TitleStorageService()
    {
        return winrt::make <TitleStorage::implementation::TitleStorageService>( );
    }
    winrt::Microsoft::Xbox::Services::Privacy::PrivacyService XboxLiveContext::PrivacyService()
    {
		return winrt::make<Privacy::implementation::PrivacyService>( );
    }
    winrt::Microsoft::Xbox::Services::System::StringService XboxLiveContext::StringService()
    {
		return winrt::make<System::implementation::StringService>( );
    }
    winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchService XboxLiveContext::ContextualSearchService()
    {
		return winrt::make<ContextualSearch::implementation::ContextualSearchService>( );
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubsService XboxLiveContext::ClubsService()
    {
		return winrt::make<Clubs::implementation::ClubsService>( );
    }
    winrt::Microsoft::Xbox::Services::Marketplace::CatalogService XboxLiveContext::CatalogService()
    {
		return winrt::make<Marketplace::implementation::CatalogService>( );
    }
    winrt::Microsoft::Xbox::Services::Marketplace::InventoryService XboxLiveContext::InventoryService()
    {
		return winrt::make<Marketplace::implementation::InventoryService>( );
    }
    winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListService XboxLiveContext::EntertainmentProfileListService()
    {
		return winrt::make<EntertainmentProfile::implementation::EntertainmentProfileListService>( );
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
