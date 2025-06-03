#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerInputSetting.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerInputSetting.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    void SpeechRecognizerInputSetting::SetInputToAudioStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& inputStream)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToText(hstring const& text)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToPronunciation(hstring const& pronunciation)
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToMicrophone()
    {
        throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToMicrophoneFeatureVector()
    {
        throw hresult_not_implemented();
    }
}
