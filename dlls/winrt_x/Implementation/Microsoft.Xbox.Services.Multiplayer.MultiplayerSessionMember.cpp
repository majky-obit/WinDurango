#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.cpp"

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
		PRINT_FUNCTION_NAME();

		return true;
	}

	bool MultiplayerSessionMember::InitializeRequested()
	{
		return false;
	}

	hstring MultiplayerSessionMember::MatchmakingResultServerMeasurementsJson()
	{
		PRINT_FUNCTION_NAME();

		return RESULTS_SERVER_MEASUREMENTS_JSON;
	}

	hstring MultiplayerSessionMember::MemberServerMeasurementsJson()
	{
		PRINT_FUNCTION_NAME();

		return SERVER_MEASUREMENTS_JSON;
	}

	Windows::Foundation::Collections::IVector<Multiplayer::MultiplayerSessionMember> MultiplayerSessionMember::MembersInGroup()
	{
		PRINT_FUNCTION_NAME();

		auto members = single_threaded_vector<Multiplayer::MultiplayerSessionMember>();

		return members;
	}

	Windows::Foundation::Collections::IVector<MultiplayerQualityOfServiceMeasurements> MultiplayerSessionMember::MemberMeasurements()
	{
		auto memberMeasurement = single_threaded_vector<MultiplayerQualityOfServiceMeasurements>();

		const MultiplayerQualityOfServiceMeasurements measurement{
			DEVICE_ID,
			Windows::Foundation::TimeSpan{ 10000000 },
			1000,
			1000,
			L"{}"
		};

		memberMeasurement.Append(measurement);

		return memberMeasurement;
	}

	hstring MultiplayerSessionMember::DeviceToken()
	{
		PRINT_FUNCTION_NAME();

		return DEVICE_ID;
	}

	NetworkAddressTranslationSetting MultiplayerSessionMember::Nat()
	{
		PRINT_FUNCTION_NAME();

		return NetworkAddressTranslationSetting::Open;
	}

	uint32_t MultiplayerSessionMember::ActiveTitleId()
	{
		PRINT_FUNCTION_NAME();

		return ACTIVE_TITLE_ID;
	}

	uint32_t MultiplayerSessionMember::InitializationEpisode()
	{
		return 0;
	}

	Windows::Foundation::DateTime MultiplayerSessionMember::JoinTime( )
	{
		PRINT_FUNCTION_NAME( );

		const auto now = std::chrono::system_clock::now( );
		const auto duration = now.time_since_epoch( );
		const auto hundred_nanoseconds = std::chrono::duration_cast<Windows::Foundation::TimeSpan>(duration);

		return Windows::Foundation::DateTime{ hundred_nanoseconds };
	}

	MultiplayerMeasurementFailure MultiplayerSessionMember::InitializationFailureCause()
	{
		PRINT_FUNCTION_NAME();

		return MultiplayerMeasurementFailure::None;
	}

	MultiplayerSessionReference MultiplayerSessionMember::TournamentTeamSessionRef()
	{
		PRINT_FUNCTION_NAME();

		return MultiplayerSessionReference{
			L"serviceConfigurationId",
			L"sessionTemplateName",
			L"sessionName"
		};
	}

	Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Groups()
	{
		PRINT_FUNCTION_NAME();

		auto groups = winrt::single_threaded_vector<hstring>();

		groups.Append(L"WinDurango");

		return groups;
	}

	void MultiplayerSessionMember::Groups(Windows::Foundation::Collections::IVector<hstring> const& value)
	{
		PRINT_FUNCTION_NAME();

		return;
	}

	Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Encounters()
	{
		PRINT_FUNCTION_NAME();

		auto encounters = winrt::single_threaded_vector<hstring>();

		encounters.Append(L"WinDurango");

		return encounters;
	}

	void MultiplayerSessionMember::Encounters(winrt::Windows::Foundation::Collections::IVector<hstring> const& value)
	{
		PRINT_FUNCTION_NAME();

		return;
	}

	Windows::Foundation::Collections::IMap<hstring, Tournaments::TournamentTeamResult> MultiplayerSessionMember::Results()
	{
		PRINT_FUNCTION_NAME();

		auto results = winrt::single_threaded_map<hstring, Tournaments::TournamentTeamResult>();

		return results;
	}

	Tournaments::TournamentArbitrationStatus MultiplayerSessionMember::ArbitrationStatus()
	{
		PRINT_FUNCTION_NAME();

		return Tournaments::TournamentArbitrationStatus::Playing;
	}
}
