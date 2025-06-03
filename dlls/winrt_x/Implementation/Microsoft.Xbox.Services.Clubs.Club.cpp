#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.Club.h"
#include "Microsoft.Xbox.Services.Clubs.Club.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring Club::Id()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubType Club::Type()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime Club::Created()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Club::Owner()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Club::TitleFamilyId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Club::TitleFamilyName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Club::ShortName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubProfile Club::Profile()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Club::GlyphImageUrl()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Club::BannerImageUrl()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool Club::IsClubSuspended()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime Club::SuspendedUntil()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring Club::FounderXuid()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::FollowersCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::PresenceCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::PresenceTodayCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::MembersCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::ModeratorsCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::RecommendedCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::RequestedToJoinCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::ReportCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t Club::ReporteItemsCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubActionSettings Club::ActionSettings()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole> Club::ViewerRoles()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubRoster> Club::GetRosterAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresenceRecord>> Club::GetClubUserPresenceRecordsAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Club::RenameClubAsync(hstring newName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::GetRolesAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord>> Club::GetRoleRecordsAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord>> Club::GetRoleRecordsAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubPresenceCounts> Club::GetPresenceCountsAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Club::SetPresenceWithinClubAsync(winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresence presence)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddUserToClubAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddUserToClubAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveUserFromClubAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveUserFromClubAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::FollowClubAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::UnfollowClubAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::BanUserFromClubAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::UnbanUserFromClubAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddClubModeratorAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveClubModeratorAsync(hstring xuid)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
