#include "pch.h"
#include "Windows.Xbox.Chat.ChatParticipant.h"
#include "Windows.Xbox.Chat.ChatParticipant.g.cpp"

namespace winrt::Windows::Xbox::Chat::implementation
{
    ChatParticipant::ChatParticipant(winrt::Windows::Xbox::System::IUser const& user)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::IUser ChatParticipant::User()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatParticipantTypes ChatParticipant::ParticipantType()
    {
        throw hresult_not_implemented();
    }
    void ChatParticipant::ParticipantType(winrt::Windows::Xbox::Chat::ChatParticipantTypes const& value)
    {
        throw hresult_not_implemented();
    }
    float ChatParticipant::Volume()
    {
        throw hresult_not_implemented();
    }
    void ChatParticipant::Volume(float value)
    {
        throw hresult_not_implemented();
    }
    void ChatParticipant::SynthesizeTextMessageAsAudioBuffers(hstring const& message, winrt::Windows::Media::SpeechSynthesis::VoiceInformation const& preferredVoice)
    {
        throw hresult_not_implemented();
    }
}
