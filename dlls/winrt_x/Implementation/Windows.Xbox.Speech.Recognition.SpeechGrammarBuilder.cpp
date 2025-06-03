#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarBuilder.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarBuilder.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    SpeechGrammarBuilder::SpeechGrammarBuilder(hstring const& language)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilder> SpeechGrammarBuilder::CreateFromSpeechGrammarAsync(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar speechGrammar)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilder> SpeechGrammarBuilder::CreateFromStreamAsync(winrt::Windows::Storage::Streams::IRandomAccessStream stream)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderRuleSet SpeechGrammarBuilder::Rules()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderSemanticsFormat SpeechGrammarBuilder::SemanticsFormat()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammarBuilder::SemanticsFormat(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilderSemanticsFormat const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::ISpeechRule SpeechGrammarBuilder::RootRule()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammarBuilder::SetRootRule(hstring const& ruleKey)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    void SpeechGrammarBuilder::PronunciationFormat(winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationFormat const& value)
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechPronunciationFormat SpeechGrammarBuilder::PronunciationFormat()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
