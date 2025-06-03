#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerInputSetting.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerInputSetting.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    void SpeechRecognizerInputSetting::SetInputToAudioStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& inputStream)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToText(hstring const& text)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToPronunciation(hstring const& pronunciation)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToMicrophone()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToMicrophoneFeatureVector()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
