#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultDetail.h"
#include "Windows.Xbox.Speech.Recognition.SpeechRecognitionResultDetail.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Foundation::Collections::IVectorView<hstring> SpeechRecognitionResultDetail::RuleStack()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    float SpeechRecognitionResultDetail::ConfidenceScore()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    hstring SpeechRecognitionResultDetail::Pronunciation()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultToken> SpeechRecognitionResultDetail::Tokens()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint64_t SpeechRecognitionResultDetail::AudioPosition()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t SpeechRecognitionResultDetail::AudioSize()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResultBodyCorrelation> SpeechRecognitionResultDetail::BodyCorrelation()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
