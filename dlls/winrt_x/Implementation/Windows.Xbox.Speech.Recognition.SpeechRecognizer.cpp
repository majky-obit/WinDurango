#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizer.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizer.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    void SpeechRecognizer::Close()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> SpeechRecognizer::RecognizeAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SpeechRecognizer::PreloadGrammarsAsync()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSettings SpeechRecognizer::Settings()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarSet SpeechRecognizer::Grammars()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::StartContinuousRecognition()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::StopContinuousRecognition()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::ResumeContinuousRecognition()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool SpeechRecognizer::PauseOnContinuousRecognitionResultAvailable()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::PauseOnContinuousRecognitionResultAvailable(bool value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation SpeechRecognizer::GetRecognizer()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::SetRecognizer(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation const& recognizerInformation)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::AudioProblemOccurred(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechAudioProblemOccurredEventArgs> const& audioProblemOccuredHandler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::AudioProblemOccurred(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::AudioCaptureStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerAudioCaptureStateChangedEventArgs> const& audioCaptureStateChangedHandler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::AudioCaptureStateChanged(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::ContinuousRecognitionResultAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionResultEventArgs> const& continuousRecognitionResultAvailableHandler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::ContinuousRecognitionResultAvailable(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::ContinuousRecognitionStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionStatusEventArgs> const& continuousRecognitionStatusChangedHandler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::ContinuousRecognitionStatusChanged(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::HypothesisAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechHypothesisResultEventArgs> const& hypothesisAvailableHandler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::HypothesisAvailable(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::SoundStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSoundStartedEventArgs> const& soundStartedHandler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::SoundStarted(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::SoundEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSoundEndedEventArgs> const& soundEndedHandler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::SoundEnded(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::PhraseStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerPhraseStartedEventArgs> const& phraseStartedHandler)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizer::PhraseStarted(winrt::event_token const& cookie) noexcept
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
