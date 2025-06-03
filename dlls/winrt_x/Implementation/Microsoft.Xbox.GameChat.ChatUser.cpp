#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatUser.h"
#include "Microsoft.Xbox.GameChat.ChatUser.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring ChatUser::XboxUserId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IInspectable ChatUser::UniqueConsoleIdentifier()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatUserTalkingMode ChatUser::TalkingMode()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ChatUser::NumberOfPendingAudioPacketsToPlay()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    uint32_t ChatUser::DynamicNeededPacketCount()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatRestriction ChatUser::RestrictionMode()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::IUser ChatUser::User()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatUser::IsLocal()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatUser::IsLocalUserMuted()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatUser::IsMuted()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint8_t> ChatUser::GetAllChannels()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatUser::GenerateTextMessage(hstring const& message, bool allowTextToSpeechConversion)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatParticipantTypes ChatUser::ParticipantType()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatUser::ParticipantType(winrt::Windows::Xbox::Chat::ChatParticipantTypes const& val)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    float ChatUser::Volume()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatUser::Volume(float val)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    float ChatUser::LocalRenderTargetVolume()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void ChatUser::LocalRenderTargetVolume(float val)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatUser::HasRequestedTranscription()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    bool ChatUser::HasRequestedSynthesizedAudio()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
