#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatUser.h"
#include "Microsoft.Xbox.GameChat.ChatUser.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring ChatUser::XboxUserId()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IInspectable ChatUser::UniqueConsoleIdentifier()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatUserTalkingMode ChatUser::TalkingMode()
    {
        throw hresult_not_implemented();
    }
    uint32_t ChatUser::NumberOfPendingAudioPacketsToPlay()
    {
        throw hresult_not_implemented();
    }
    uint32_t ChatUser::DynamicNeededPacketCount()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatRestriction ChatUser::RestrictionMode()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::IUser ChatUser::User()
    {
        throw hresult_not_implemented();
    }
    bool ChatUser::IsLocal()
    {
        throw hresult_not_implemented();
    }
    bool ChatUser::IsLocalUserMuted()
    {
        throw hresult_not_implemented();
    }
    bool ChatUser::IsMuted()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint8_t> ChatUser::GetAllChannels()
    {
        throw hresult_not_implemented();
    }
    void ChatUser::GenerateTextMessage(hstring const& message, bool allowTextToSpeechConversion)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatParticipantTypes ChatUser::ParticipantType()
    {
        throw hresult_not_implemented();
    }
    void ChatUser::ParticipantType(winrt::Windows::Xbox::Chat::ChatParticipantTypes const& val)
    {
        throw hresult_not_implemented();
    }
    float ChatUser::Volume()
    {
        throw hresult_not_implemented();
    }
    void ChatUser::Volume(float val)
    {
        throw hresult_not_implemented();
    }
    float ChatUser::LocalRenderTargetVolume()
    {
        throw hresult_not_implemented();
    }
    void ChatUser::LocalRenderTargetVolume(float val)
    {
        throw hresult_not_implemented();
    }
    bool ChatUser::HasRequestedTranscription()
    {
        throw hresult_not_implemented();
    }
    bool ChatUser::HasRequestedSynthesizedAudio()
    {
        throw hresult_not_implemented();
    }
}
