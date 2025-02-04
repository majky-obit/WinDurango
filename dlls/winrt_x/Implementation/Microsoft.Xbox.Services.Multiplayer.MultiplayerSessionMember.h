#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.h"

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
		Windows::Foundation::Collections::IMapView<hstring, hstring> Roles();
		hstring MemberCustomPropertiesJson();
		hstring Gamertag();
		MultiplayerSessionMemberStatus Status();
		bool IsTurnAvailable();
		bool IsCurrentUser();
		bool InitializeRequested();
		hstring MatchmakingResultServerMeasurementsJson();
		hstring MemberServerMeasurementsJson();
		Windows::Foundation::Collections::IVector<Multiplayer::MultiplayerSessionMember> MembersInGroup();
		Windows::Foundation::Collections::IVector<MultiplayerQualityOfServiceMeasurements> MemberMeasurements();
		hstring DeviceToken();
		NetworkAddressTranslationSetting Nat();
		uint32_t ActiveTitleId();
		uint32_t InitializationEpisode();
		Windows::Foundation::DateTime JoinTime();
		MultiplayerMeasurementFailure InitializationFailureCause();
		MultiplayerSessionReference TournamentTeamSessionRef();
		Windows::Foundation::Collections::IVector<hstring> Groups();
		void Groups(Windows::Foundation::Collections::IVector<hstring> const& value);
		Windows::Foundation::Collections::IVector<hstring> Encounters();
		void Encounters(Windows::Foundation::Collections::IVector<hstring> const& value);
		Windows::Foundation::Collections::IMap<hstring, Tournaments::TournamentTeamResult> Results();
		Tournaments::TournamentArbitrationStatus ArbitrationStatus();

	private:
		uint32_t m_memberId = MEMBER_ID;
		hstring m_teamId = TEAM_ID;
		hstring m_xboxUserId = XBOX_USER_ID;
		hstring m_memberCustomConstantsJson = CUSTOM_JSON_CONSTANTS;
		hstring m_secureDeviceAddressBase64 = SECURE_BASE_64;
		Windows::Foundation::Collections::IMapView<hstring, hstring> m_roles
			= EMPTY_IMAPVIEW(hstring, hstring);
		hstring m_customJsonProps = CUSTOM_JSON_PROPS;
		hstring m_gamertag = GAMERTAG;
		MultiplayerSessionMemberStatus m_status = MultiplayerSessionMemberStatus::Active;
		bool m_isTurnAvailable = true;
		bool m_isCurrentUser = true;
		bool m_initializeRequest = true;
		hstring m_matchingMakingResultServerMeasurementsJson = RESULTS_SERVER_MEASUREMENTS_JSON;
		hstring m_memberServerMeasurementsJson = SERVER_MEASUREMENTS_JSON;
		Windows::Foundation::Collections::IVector<Multiplayer::MultiplayerSessionMember> m_membersInGroup
			= EMPTY_IVECTOR(Multiplayer::MultiplayerSessionMember);
		Windows::Foundation::Collections::IVector<MultiplayerQualityOfServiceMeasurements> m_memberMeasurements
			= EMPTY_IVECTOR(MultiplayerQualityOfServiceMeasurements);
		hstring m_deviceId = DEVICE_ID;
		NetworkAddressTranslationSetting m_nat = NetworkAddressTranslationSetting::Open;
		uint32_t m_activeTitleId = ACTIVE_TITLE_ID;
		uint32_t m_initializationEpisode = 0;
		Windows::Foundation::DateTime m_joinTime = DATETIME_NOW( );
		MultiplayerMeasurementFailure m_initializationFailureCause = MultiplayerMeasurementFailure::None;
		MultiplayerSessionReference m_tournamentTeamSessionRef{
			L"serviceConfigurationId",
			L"sessionTemplateName",
			L"sessionName"
		};
		Windows::Foundation::Collections::IVector<hstring> m_groups = EMPTY_IVECTOR(hstring);
		Windows::Foundation::Collections::IVector<hstring> m_encounters = EMPTY_IVECTOR(hstring);
		Windows::Foundation::Collections::IMap<hstring, Tournaments::TournamentTeamResult> m_tournamentTeamResult = EMPTY_IMAP(hstring, Tournaments::TournamentTeamResult);
		Tournaments::TournamentArbitrationStatus m_arbitrationStatus = Tournaments::TournamentArbitrationStatus::Playing;
	};
}
