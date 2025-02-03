#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.h"

#define MEMBER_ID                               1234567890  // NOLINT(modernize-macro-to-enum)
#define TEAM_ID                                 CONVERT_TO_HSTRING("0987654321")
#define XBOX_USER_ID                            CONVERT_TO_HSTRING("0987612345")
#define CUSTOM_JSON_CONSTANTS                   CONVERT_TO_HSTRING("{}")
#define CUSTOM_JSON_PROPS                       CONVERT_TO_HSTRING("{}")
#define SECURE_BASE_64                          CONVERT_TO_HSTRING("1234567890qwerty")
#define GAMERTAG                                CONVERT_TO_HSTRING("Durangler")
#define RESULTS_SERVER_MEASUREMENTS_JSON        CONVERT_TO_HSTRING("{}")
#define SERVER_MEASUREMENTS_JSON                CONVERT_TO_HSTRING("{}")
#define DEVICE_ID                               CONVERT_TO_HSTRING("device01234567890")
#define ACTIVE_TITLE_ID                         69420  // NOLINT(modernize-macro-to-enum)

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionMember : MultiplayerSessionMemberT<MultiplayerSessionMember>
    {
        MultiplayerSessionMember() = default;

        uint32_t MemberId();
        hstring TeamId();
        hstring XboxUserId();
        hstring MemberCustomConstantsJson();
        hstring SecureDeviceAddressBase64();
        winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> Roles();
        hstring MemberCustomPropertiesJson();
        hstring Gamertag();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus Status();
        bool IsTurnAvailable();
        bool IsCurrentUser();
        bool InitializeRequested();
        hstring MatchmakingResultServerMeasurementsJson();
        hstring MemberServerMeasurementsJson();
        winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> MembersInGroup();
        winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> MemberMeasurements();
        hstring DeviceToken();
        winrt::Microsoft::Xbox::Services::Multiplayer::NetworkAddressTranslationSetting Nat();
        uint32_t ActiveTitleId();
        uint32_t InitializationEpisode();
        winrt::Windows::Foundation::DateTime JoinTime();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerMeasurementFailure InitializationFailureCause();
        winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference TournamentTeamSessionRef();
        winrt::Windows::Foundation::Collections::IVector<hstring> Groups();
        void Groups(winrt::Windows::Foundation::Collections::IVector<hstring> const& value);
        winrt::Windows::Foundation::Collections::IVector<hstring> Encounters();
        void Encounters(winrt::Windows::Foundation::Collections::IVector<hstring> const& value);
        winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> Results();
        winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus ArbitrationStatus();
    };
}
