#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResult.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResult.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    hstring SpeechRecognitionResult::Text()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionConfidence SpeechRecognitionResult::TextConfidence()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionSemanticProperty> SpeechRecognitionResult::Semantics()
    {
        throw hresult_not_implemented();
    }
    hstring SpeechRecognitionResult::RuleName()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult> SpeechRecognitionResult::GetAlternates(uint32_t maxAlternates)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultDetail SpeechRecognitionResult::Details()
    {
        throw hresult_not_implemented();
    }
}
