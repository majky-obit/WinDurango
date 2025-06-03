#include "pch.h"
#include "Microsoft.Xbox.Services.Clubs.Club.h"
#include "Microsoft.Xbox.Services.Clubs.Club.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Clubs::implementation
{
    hstring Club::Id()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubType Club::Type()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime Club::Created()
    {
        throw hresult_not_implemented();
    }
    hstring Club::Owner()
    {
        throw hresult_not_implemented();
    }
    hstring Club::TitleFamilyId()
    {
        throw hresult_not_implemented();
    }
    hstring Club::TitleFamilyName()
    {
        throw hresult_not_implemented();
    }
    hstring Club::ShortName()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubProfile Club::Profile()
    {
        throw hresult_not_implemented();
    }
    hstring Club::GlyphImageUrl()
    {
        throw hresult_not_implemented();
    }
    hstring Club::BannerImageUrl()
    {
        throw hresult_not_implemented();
    }
    bool Club::IsClubSuspended()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime Club::SuspendedUntil()
    {
        throw hresult_not_implemented();
    }
    hstring Club::FounderXuid()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::FollowersCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::PresenceCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::PresenceTodayCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::MembersCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::ModeratorsCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::RecommendedCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::RequestedToJoinCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::ReportCount()
    {
        throw hresult_not_implemented();
    }
    uint32_t Club::ReporteItemsCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Clubs::ClubActionSettings Club::ActionSettings()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole> Club::ViewerRoles()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubRoster> Club::GetRosterAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresenceRecord>> Club::GetClubUserPresenceRecordsAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Club::RenameClubAsync(hstring newName)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::GetRolesAsync(hstring xuid)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord>> Club::GetRoleRecordsAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRoleRecord>> Club::GetRoleRecordsAsync(hstring xuid)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Microsoft::Xbox::Services::Clubs::ClubPresenceCounts> Club::GetPresenceCountsAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction Club::SetPresenceWithinClubAsync(winrt::Microsoft::Xbox::Services::Clubs::ClubUserPresence presence)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddUserToClubAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddUserToClubAsync(hstring xuid)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveUserFromClubAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveUserFromClubAsync(hstring xuid)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::FollowClubAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::UnfollowClubAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::BanUserFromClubAsync(hstring xuid)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::UnbanUserFromClubAsync(hstring xuid)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::AddClubModeratorAsync(hstring xuid)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Clubs::ClubRole>> Club::RemoveClubModeratorAsync(hstring xuid)
    {
        throw hresult_not_implemented();
    }
}
