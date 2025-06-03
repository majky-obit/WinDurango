#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerInputSetting.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognizerInputSetting.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    void SpeechRecognizerInputSetting::SetInputToAudioStream(winrt::Windows::Storage::Streams::IRandomAccessStream const& inputStream)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToText(hstring const& text)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToPronunciation(hstring const& pronunciation)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToMicrophone()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechRecognizerInputSetting::SetInputToMicrophoneFeatureVector()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
