#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammar.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammar.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    bool SpeechGrammar::Enabled()
    {
        throw hresult_not_implemented();
    }
    void SpeechGrammar::Enabled(bool value)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarProbability SpeechGrammar::Probability()
    {
        throw hresult_not_implemented();
    }
    void SpeechGrammar::Probability(winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarProbability const& value)
    {
        throw hresult_not_implemented();
    }
    void SpeechGrammar::EnableRule(hstring const& ruleName)
    {
        throw hresult_not_implemented();
    }
    void SpeechGrammar::DisableRule(hstring const& ruleName)
    {
        throw hresult_not_implemented();
    }
}
