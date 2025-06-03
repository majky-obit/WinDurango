#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizer.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizer.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    void SpeechRecognizer::Close()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> SpeechRecognizer::RecognizeAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncAction SpeechRecognizer::PreloadGrammarsAsync()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSettings SpeechRecognizer::Settings()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarSet SpeechRecognizer::Grammars()
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::StartContinuousRecognition()
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::StopContinuousRecognition()
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::ResumeContinuousRecognition()
    {
        throw hresult_not_implemented();
    }
    bool SpeechRecognizer::PauseOnContinuousRecognitionResultAvailable()
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::PauseOnContinuousRecognitionResultAvailable(bool value)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation SpeechRecognizer::GetRecognizer()
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::SetRecognizer(winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerInformation const& recognizerInformation)
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::AudioProblemOccurred(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechAudioProblemOccurredEventArgs> const& audioProblemOccuredHandler)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::AudioProblemOccurred(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::AudioCaptureStateChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerAudioCaptureStateChangedEventArgs> const& audioCaptureStateChangedHandler)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::AudioCaptureStateChanged(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::ContinuousRecognitionResultAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionResultEventArgs> const& continuousRecognitionResultAvailableHandler)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::ContinuousRecognitionResultAvailable(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::ContinuousRecognitionStatusChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionStatusEventArgs> const& continuousRecognitionStatusChangedHandler)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::ContinuousRecognitionStatusChanged(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::HypothesisAvailable(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechHypothesisResultEventArgs> const& hypothesisAvailableHandler)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::HypothesisAvailable(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::SoundStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSoundStartedEventArgs> const& soundStartedHandler)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::SoundStarted(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::SoundEnded(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerSoundEndedEventArgs> const& soundEndedHandler)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::SoundEnded(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token SpeechRecognizer::PhraseStarted(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizer, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognizerPhraseStartedEventArgs> const& phraseStartedHandler)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizer::PhraseStarted(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
}
