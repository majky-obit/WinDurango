#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.cpp"

// TODO: Add this globally for all projects.
#define PRINT_FUNCTION_NAME() printf("[%s]\n", __FUNCSIG__)
#define CONVERT_TO_HSTRING(str) winrt::hstring(std::wstring(str, (str) + strlen(str)))

#define MEMBER_ID                       1234567890  // NOLINT(modernize-macro-to-enum)
#define TEAM_ID                         CONVERT_TO_HSTRING("0987654321")
#define XBOX_USER_ID                    CONVERT_TO_HSTRING("0987612345")
#define CUSTOM_JSON_CONSTANTS           CONVERT_TO_HSTRING("{}")
#define CUSTOM_JSON_PROPS               CONVERT_TO_HSTRING("{}")
#define SECURE_BASE_64                  CONVERT_TO_HSTRING("1234567890qwerty")
#define GAMERTAG                        CONVERT_TO_HSTRING("Durangler")

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    uint32_t MultiplayerSessionMember::MemberId()
    {
        PRINT_FUNCTION_NAME();

        return MEMBER_ID;
    }

    hstring MultiplayerSessionMember::TeamId()
    {
        PRINT_FUNCTION_NAME( );

        return TEAM_ID;
    }

    hstring MultiplayerSessionMember::XboxUserId()
    {
        PRINT_FUNCTION_NAME();

        return XBOX_USER_ID;
    }

    hstring MultiplayerSessionMember::MemberCustomConstantsJson()
    {
        PRINT_FUNCTION_NAME();

        return CUSTOM_JSON_CONSTANTS;
    }

    hstring MultiplayerSessionMember::SecureDeviceAddressBase64()
    {
        PRINT_FUNCTION_NAME();

        return SECURE_BASE_64;
    }

    Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSessionMember::Roles()
    {
        PRINT_FUNCTION_NAME();

        // TODO: Add roles to this collection.
        Windows::Foundation::Collections::IMapView<hstring, hstring> roles{};

        return roles;
    }

    hstring MultiplayerSessionMember::MemberCustomPropertiesJson()
    {
        PRINT_FUNCTION_NAME();

        return CUSTOM_JSON_PROPS;
    }

    hstring MultiplayerSessionMember::Gamertag()
    {
        PRINT_FUNCTION_NAME();

        return GAMERTAG;
    }

    MultiplayerSessionMemberStatus MultiplayerSessionMember::Status()
    {
        PRINT_FUNCTION_NAME();

        return MultiplayerSessionMemberStatus::Active;
    }

    bool MultiplayerSessionMember::IsTurnAvailable()
    {
        PRINT_FUNCTION_NAME( );

		return true;
    }

    bool MultiplayerSessionMember::IsCurrentUser()
    {
        PRINT_FUNCTION_NAME( );

        return true;
    }

    bool MultiplayerSessionMember::InitializeRequested()
    {
        throw hresult_not_implemented();
    }

    hstring MultiplayerSessionMember::MatchmakingResultServerMeasurementsJson()
    {
        throw hresult_not_implemented();
    }

    hstring MultiplayerSessionMember::MemberServerMeasurementsJson()
    {
        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVector<Multiplayer::MultiplayerSessionMember> MultiplayerSessionMember::MembersInGroup()
    {
        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVector<MultiplayerQualityOfServiceMeasurements> MultiplayerSessionMember::MemberMeasurements()
    {
        throw hresult_not_implemented();
    }

    hstring MultiplayerSessionMember::DeviceToken()
    {
        throw hresult_not_implemented();
    }

    NetworkAddressTranslationSetting MultiplayerSessionMember::Nat()
    {
        throw hresult_not_implemented();
    }

    uint32_t MultiplayerSessionMember::ActiveTitleId()
    {
        throw hresult_not_implemented();
    }

    uint32_t MultiplayerSessionMember::InitializationEpisode()
    {
        throw hresult_not_implemented();
    }

    Windows::Foundation::DateTime MultiplayerSessionMember::JoinTime()
    {
        throw hresult_not_implemented();
    }

    MultiplayerMeasurementFailure MultiplayerSessionMember::InitializationFailureCause()
    {
        throw hresult_not_implemented();
    }

    MultiplayerSessionReference MultiplayerSessionMember::TournamentTeamSessionRef()
    {
        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Groups()
    {
        throw hresult_not_implemented();
    }

    void MultiplayerSessionMember::Groups(winrt::Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Encounters()
    {
        throw hresult_not_implemented();
    }

    void MultiplayerSessionMember::Encounters(winrt::Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        throw hresult_not_implemented();
    }

    Windows::Foundation::Collections::IMap<hstring, Tournaments::TournamentTeamResult> MultiplayerSessionMember::Results()
    {
        throw hresult_not_implemented();
    }

    Tournaments::TournamentArbitrationStatus MultiplayerSessionMember::ArbitrationStatus()
    {
        throw hresult_not_implemented();
    }
}
