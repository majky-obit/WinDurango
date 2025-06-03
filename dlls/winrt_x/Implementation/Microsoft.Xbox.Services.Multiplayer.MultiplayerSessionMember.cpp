#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.h"
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionMember.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    uint32_t MultiplayerSessionMember::MemberId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::TeamId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::MemberCustomConstantsJson()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::SecureDeviceAddressBase64()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, hstring> MultiplayerSessionMember::Roles()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::MemberCustomPropertiesJson()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::Gamertag()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMemberStatus MultiplayerSessionMember::Status()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MultiplayerSessionMember::IsTurnAvailable()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MultiplayerSessionMember::IsCurrentUser()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MultiplayerSessionMember::InitializeRequested()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::MatchmakingResultServerMeasurementsJson()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::MemberServerMeasurementsJson()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionMember> MultiplayerSessionMember::MembersInGroup()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> MultiplayerSessionMember::MemberMeasurements()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring MultiplayerSessionMember::DeviceToken()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::NetworkAddressTranslationSetting MultiplayerSessionMember::Nat()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSessionMember::ActiveTitleId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t MultiplayerSessionMember::InitializationEpisode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::DateTime MultiplayerSessionMember::JoinTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerMeasurementFailure MultiplayerSessionMember::InitializationFailureCause()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerSessionReference MultiplayerSessionMember::TournamentTeamSessionRef()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Groups()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSessionMember::Groups(winrt::Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<hstring> MultiplayerSessionMember::Encounters()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerSessionMember::Encounters(winrt::Windows::Foundation::Collections::IVector<hstring> const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMap<hstring, winrt::Microsoft::Xbox::Services::Tournaments::TournamentTeamResult> MultiplayerSessionMember::Results()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Tournaments::TournamentArbitrationStatus MultiplayerSessionMember::ArbitrationStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
