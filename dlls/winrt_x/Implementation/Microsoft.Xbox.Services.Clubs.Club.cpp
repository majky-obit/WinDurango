#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.Club.h"
#include "Microsoft.Xbox.Services.Clubs.Club.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring Club::Id()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubType Club::Type()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime Club::Created()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Club::Owner()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Club::TitleFamilyId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Club::TitleFamilyName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Club::ShortName()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubProfile Club::Profile()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Club::GlyphImageUrl()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Club::BannerImageUrl()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool Club::IsClubSuspended()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime Club::SuspendedUntil()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    hstring Club::FounderXuid()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::FollowersCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::PresenceCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::PresenceTodayCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::MembersCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::ModeratorsCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::RecommendedCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::RequestedToJoinCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::ReportCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t Club::ReporteItemsCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubActionSettings Club::ActionSettings()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole> Club::ViewerRoles()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubRoster> Club::GetRosterAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresenceRecord>> Club::GetClubUserPresenceRecordsAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Club::RenameClubAsync(hstring newName)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::GetRolesAsync(hstring xuid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord>> Club::GetRoleRecordsAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord>> Club::GetRoleRecordsAsync(hstring xuid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubPresenceCounts> Club::GetPresenceCountsAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Club::SetPresenceWithinClubAsync(winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresence presence)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddUserToClubAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddUserToClubAsync(hstring xuid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveUserFromClubAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveUserFromClubAsync(hstring xuid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::FollowClubAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::UnfollowClubAsync()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::BanUserFromClubAsync(hstring xuid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::UnbanUserFromClubAsync(hstring xuid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddClubModeratorAsync(hstring xuid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveClubModeratorAsync(hstring xuid)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
