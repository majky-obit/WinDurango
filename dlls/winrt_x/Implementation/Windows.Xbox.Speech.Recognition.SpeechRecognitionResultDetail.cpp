#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultDetail.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultDetail.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> SpeechRecognitionResultDetail::RuleStack()
    {
        throw hresult_not_implemented();
    }
    float SpeechRecognitionResultDetail::ConfidenceScore()
    {
        throw hresult_not_implemented();
    }
    hstring SpeechRecognitionResultDetail::Pronunciation()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultToken> SpeechRecognitionResultDetail::Tokens()
    {
        throw hresult_not_implemented();
    }
    uint64_t SpeechRecognitionResultDetail::AudioPosition()
    {
        throw hresult_not_implemented();
    }
    uint32_t SpeechRecognitionResultDetail::AudioSize()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultBodyCorrelation> SpeechRecognitionResultDetail::BodyCorrelation()
    {
        throw hresult_not_implemented();
    }
}
