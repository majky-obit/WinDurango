#include "pch.h"
#include "Microsoft.Xbox.GameChat.ChatUser.h"
#include "Microsoft.Xbox.GameChat.ChatUser.g.cpp"

namespace winrt::Microsoft::Xbox::GameChat::implementation
{
    hstring ChatUser::XboxUserId()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IInspectable ChatUser::UniqueConsoleIdentifier()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::GameChat::ChatUserTalkingMode ChatUser::TalkingMode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t ChatUser::NumberOfPendingAudioPacketsToPlay()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t ChatUser::DynamicNeededPacketCount()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatRestriction ChatUser::RestrictionMode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::System::IUser ChatUser::User()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ChatUser::IsLocal()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ChatUser::IsLocalUserMuted()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ChatUser::IsMuted()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<uint8_t> ChatUser::GetAllChannels()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatUser::GenerateTextMessage(hstring const& message, bool allowTextToSpeechConversion)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Chat::ChatParticipantTypes ChatUser::ParticipantType()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatUser::ParticipantType(winrt::Windows::Xbox::Chat::ChatParticipantTypes const& val)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float ChatUser::Volume()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatUser::Volume(float val)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float ChatUser::LocalRenderTargetVolume()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void ChatUser::LocalRenderTargetVolume(float val)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ChatUser::HasRequestedTranscription()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool ChatUser::HasRequestedSynthesizedAudio()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
