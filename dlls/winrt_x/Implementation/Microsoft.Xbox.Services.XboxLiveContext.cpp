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
        Logger::Info("[Microsoft::Xbox::Services::XboxLiveContext] Constructor called\n");
        //m_MultiplayerService = winrt::make<Multiplayer::implementation::MultiplayerService>();
    }
    winrt::Windows::Xbox::System::User XboxLiveContext::User()
    {
        Logger::NotImplemented();
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::ProfileService XboxLiveContext::ProfileService()
    {
        Logger::NotImplemented(); 
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Social::SocialService XboxLiveContext::SocialService()
    {
        return winrt::make<winrt::Microsoft::Xbox::Services::Social::implementation::SocialService>( );
    }
    winrt::Microsoft::Xbox::Services::Social::ReputationService XboxLiveContext::ReputationService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Achievements::AchievementService XboxLiveContext::AchievementService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Leaderboard::LeaderboardService XboxLiveContext::LeaderboardService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::UserStatistics::UserStatisticsService XboxLiveContext::UserStatisticsService()
    {
		return winrt::make<UserStatistics::implementation::UserStatisticsService>( );
    }
    winrt::Microsoft::Xbox::Services::Matchmaking::MatchmakingService XboxLiveContext::MatchmakingService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerService XboxLiveContext::MultiplayerService()
    {
        return winrt::make<winrt::Microsoft::Xbox::Services::Multiplayer::implementation::MultiplayerService>( );
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentService XboxLiveContext::TournamentService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
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
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::TitleStorage::TitleStorageService XboxLiveContext::TitleStorageService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Privacy::PrivacyService XboxLiveContext::PrivacyService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::System::StringService XboxLiveContext::StringService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::ContextualSearch::ContextualSearchService XboxLiveContext::ContextualSearchService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubsService XboxLiveContext::ClubsService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::CatalogService XboxLiveContext::CatalogService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Marketplace::InventoryService XboxLiveContext::InventoryService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::EntertainmentProfile::EntertainmentProfileListService XboxLiveContext::EntertainmentProfileListService()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::XboxLiveContextSettings XboxLiveContext::Settings()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::XboxLiveAppConfiguration XboxLiveContext::AppConfig()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
