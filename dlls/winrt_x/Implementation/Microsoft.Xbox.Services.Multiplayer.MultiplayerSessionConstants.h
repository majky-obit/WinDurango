#pragma once
#include "Microsoft.Xbox.Services.Multiplayer.MultiplayerSessionConstants.g.h"

namespace winrt::Microsoft::Xbox::Services::Multiplayer::implementation
{
    struct MultiplayerSessionConstants : MultiplayerSessionConstantsT<MultiplayerSessionConstants>
    {
        MultiplayerSessionConstants() = default;

        uint32_t MaxMembersInSession();
        void MaxMembersInSession(uint32_t value);
        MultiplayerSessionVisibility MultiplayerSessionVisibility();
        void MultiplayerSessionVisibility(Multiplayer::MultiplayerSessionVisibility const& value);
        Windows::Foundation::Collections::IVectorView<hstring> InitiatorXboxUserIds();
        hstring CustomConstantsJson();
        Windows::Foundation::TimeSpan MemberReservationTimeout();
        Windows::Foundation::TimeSpan MemberInactiveTimeout();
        Windows::Foundation::TimeSpan MemberReadyTimeout();
        Windows::Foundation::TimeSpan SessionEmptyTimeout();
        Windows::Foundation::TimeSpan ArbitrationTimeout();
        Windows::Foundation::TimeSpan ForfeitTimeout();
        bool CapabilitiesConnectivity();
        bool CapabilitiesSuppressPresenceActivityCheck();
        bool CapabilitiesGameplay();
        bool CapabilitiesLarge();
        bool CapabilitiesConnectionRequiredForActiveMember();
        bool CapabilitiesCrossplay();
        bool CapabilitiesUserAuthorizationStyle();
        bool CapabilitiesTeam();
        bool CapabilitiesSearchable();
        bool CapabilitiesArbitration();
        bool EnableMetricsLatency();
        bool EnableMetricsBandwidthDown();
        bool EnableMetricsBandwidthUp();
        bool EnableMetricsCustom();
        MultiplayerManagedInitialization ManagedInitialization();
        MultiplayerMemberInitialization MemberInitialization();
        MultiplayerPeerToPeerRequirements PeerToPeerRequirements();
        MultiplayerPeerToHostRequirements PeerToHostRequirements();
        hstring MeasurementServerAddressesJson();

    public:
        uint32_t m_MaxMembersInSession{ 100 };

        Windows::Foundation::Collections::IVector<hstring> m_UserIds{ winrt::single_threaded_vector<hstring>() };

        hstring m_CustomJsonProperties{};

        Windows::Foundation::TimeSpan m_MemberReservationTimeout{};
        Windows::Foundation::TimeSpan m_MemberInactiveTimeout{};
        Windows::Foundation::TimeSpan m_MemberReadyTimeout{};
        Windows::Foundation::TimeSpan m_SessionEmptyTimeout{};
        Windows::Foundation::TimeSpan m_ArbitrationTimeout{};
        Windows::Foundation::TimeSpan m_ForfeitTimeout{};

        bool m_CapabilitiesConnectivity{ false };
        bool m_CapabilitiesSuppressPresenceActivityCheck{ false };
        bool m_CapabilitiesGameplay{ false };
        bool m_CapabilitiesLarge{ false };
        bool m_CapabilitiesConnectionRequiredForActiveMember{ false };
        bool m_CapabilitiesCrossplay{ false };
        bool m_CapabilitiesUserAuthorizationStyle{ false };
        bool m_CapabilitiesTeam{ false };
        bool m_CapabilitiesSearchable{ false };
        bool m_CapabilitiesArbitration{ false };
        bool m_EnableMetricsLatency{ false };
        bool m_EnableMetricsBandwidthDown{ false };
        bool m_EnableMetricsBandwidthUp{ false };
        bool m_EnableMetricsCustom{ false };

        MultiplayerManagedInitialization m_MultiplayerManagedInitialization{ nullptr };
        MultiplayerMemberInitialization m_MultiplayerMemberInitialization{ nullptr };
        MultiplayerPeerToPeerRequirements m_MultiplayerPeerToPeerRequirements{ nullptr };
        MultiplayerPeerToHostRequirements m_MultiplayerPeerToHostRequirements{ nullptr };

        hstring m_MeasurementServerAddressesJson{};
    };
}
