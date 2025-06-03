#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarBuilder.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarBuilder.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    SpeechGrammarBuilder::SpeechGrammarBuilder(hstring const& language)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilder> SpeechGrammarBuilder::CreateFromSpeechGrammarAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar speechGrammar)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilder> SpeechGrammarBuilder::CreateFromStreamAsync(winrt::Windows::Storage::Streams::IRandomAccessStream stream)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderRuleSet SpeechGrammarBuilder::Rules()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderSemanticsFormat SpeechGrammarBuilder::SemanticsFormat()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechGrammarBuilder::SemanticsFormat(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderSemanticsFormat const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::ISpeechRule SpeechGrammarBuilder::RootRule()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechGrammarBuilder::SetRootRule(hstring const& ruleKey)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechGrammarBuilder::PronunciationFormat(winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationFormat const& value)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationFormat SpeechGrammarBuilder::PronunciationFormat()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
