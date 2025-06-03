#include "pch.h"
#include "Windows.Xbox.Chat.ChatParticipant.h"
#include "Windows.Xbox.Chat.ChatParticipant.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatParticipant::ChatParticipant(winrt::Windows::Xbox::System::IUser const& user)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::IUser ChatParticipant::User()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatParticipantTypes ChatParticipant::ParticipantType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatParticipant::ParticipantType(winrt::Windows::Xbox::Chat::ChatParticipantTypes const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float ChatParticipant::Volume()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatParticipant::Volume(float value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatParticipant::SynthesizeTextMessageAsAudioBuffers(hstring const& message, winrt::Windows::Media::SpeechSynthesis::VoiceInformation const& preferredVoice)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
