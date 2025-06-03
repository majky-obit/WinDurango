#include "pch.h"
#include "Windows.Xbox.Chat.ChatSession.h"
#include "Windows.Xbox.Chat.ChatSession.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatSession::ChatSession(winrt::Windows::Foundation::TimeSpan const& period, winrt::Windows::Xbox::Chat::ChatFeatures const& enabledFeatures)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    ChatSession::ChatSession(winrt::Windows::Foundation::TimeSpan const& period, uint32_t processorAffinity, winrt::Windows::Xbox::Chat::ChatFeatures const& enabledFeatures)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVector<winrt::Windows::Xbox::Chat::IChatChannel> ChatSession::Channels()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token ChatSession::StateChangedEvent(winrt::Windows::Xbox::Chat::ChatSessionStateChangedHandler const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatSession::StateChangedEvent(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Chat::IChatSessionState> ChatSession::GetStateAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatSession::TranscriptionEnabled(int32_t value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    int32_t ChatSession::TranscriptionEnabled()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatEncoder ChatSession::CreateTranscribingEncoder(winrt::Windows::Xbox::Chat::IChatParticipant const& participant, winrt::Windows::Xbox::Chat::IFormat const& sourceFormat, winrt::Windows::Xbox::Chat::EncodingQuality const& quality)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token ChatSession::TranscribedTextReadyEvent(winrt::Windows::Xbox::Chat::ChatParticipantTranscribedTextReadyHandler const& handler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatSession::TranscribedTextReadyEvent(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatRestriction ChatSession::GetParticipantRelationship(winrt::Windows::Xbox::Chat::IChatParticipant const& sourceParticipant, winrt::Windows::Xbox::Chat::IChatParticipant const& targetParticipant)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::IAudioDeviceInfo ChatSession::GetDedicatedSynthesisDevice(winrt::Windows::Xbox::Chat::IChatParticipant const& participant)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
