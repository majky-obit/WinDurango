#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    uint32_t MultiplayerSessionMember::MemberId()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::TeamId()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::MemberCustomConstantsJson()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::SecureDeviceAddressBase64()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSessionMember::Roles()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::MemberCustomPropertiesJson()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::Gamertag()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus MultiplayerSessionMember::Status()
    {
        throw hresult_not_implemented();
    }
    bool MultiplayerSessionMember::IsTurnAvailable()
    {
        throw hresult_not_implemented();
    }
    bool MultiplayerSessionMember::IsCurrentUser()
    {
        throw hresult_not_implemented();
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
    winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> MultiplayerSessionMember::MembersInGroup()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> MultiplayerSessionMember::MemberMeasurements()
    {
        throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::DeviceToken()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::NetworkAddressTranslationSetting MultiplayerSessionMember::Nat()
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
    winrt::Windows::Foundation::DateTime MultiplayerSessionMember::JoinTime()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerMeasurementFailure MultiplayerSessionMember::InitializationFailureCause()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionMember::TournamentTeamSessionRef()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Groups()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSessionMember::Groups(winrt::Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Encounters()
    {
        throw hresult_not_implemented();
    }
    void MultiplayerSessionMember::Encounters(winrt::Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> MultiplayerSessionMember::Results()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus MultiplayerSessionMember::ArbitrationStatus()
    {
        throw hresult_not_implemented();
    }
}
