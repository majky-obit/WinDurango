#include "pch.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.h"
#include "Microsoft.Xbox.Services.Multiplayer.Manager.MultiplayerManager.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Multiplayer::Manager::implementation
{
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerManager MultiplayerManager::SingletonInstance()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::Initialize(hstring const& lobbySessionTemplateName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::FindMatch(hstring const& hopperName, hstring const& attributes, winrt::Windows::Foundation::TimeSpan const& timeout)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::CancelMatch()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(hstring const& handleId, winrt::Windows::Xbox::System::User const& user)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(hstring const& handleId, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> const& users)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::System::User> const& users)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinLobby(winrt::Windows::ApplicationModel::Activation::IProtocolActivatedEventArgs const& eventArgs, winrt::Windows::Xbox::System::User const& user)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::InvitePartyToGame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGameFromLobby(hstring const& sessionTemplateName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGame(hstring const& sessionName, hstring const& sessionTemplateName)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::JoinGame(hstring const& sessionName, hstring const& sessionTemplateName, winrt::Windows::Foundation::Collections::IVectorView<hstring> const& xboxUserIds)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::LeaveGame()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerEvent> MultiplayerManager::DoWork()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MatchStatus MultiplayerManager::MatchStatus()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::TimeSpan MultiplayerManager::EstimatedMatchWaitTime()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerLobbySession MultiplayerManager::LobbySession()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::MultiplayerGameSession MultiplayerManager::GameSession()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Multiplayer::Manager::Joinability MultiplayerManager::Joinability()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::SetJoinInProgress(winrt::Microsoft::Xbox::Services::Multiplayer::Manager::Joinability const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool MultiplayerManager::AutoFillMembersDuringMatchmaking()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::AutoFillMembersDuringMatchmaking(bool value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void MultiplayerManager::SetQualityOfServiceMeasurements(winrt::Windows::Foundation::Collections::IVectorView<winrt::Microsoft::Xbox::Services::Multiplayer::MultiplayerQualityOfServiceMeasurements> const& measurements)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
