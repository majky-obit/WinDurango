#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResult.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResult.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    hstring SpeechRecognitionResult::Text()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionConfidence SpeechRecognitionResult::TextConfidence()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionSemanticProperty> SpeechRecognitionResult::Semantics()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring SpeechRecognitionResult::RuleName()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> SpeechRecognitionResult::GetAlternates(uint32_t maxAlternates)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultDetail SpeechRecognitionResult::Details()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
