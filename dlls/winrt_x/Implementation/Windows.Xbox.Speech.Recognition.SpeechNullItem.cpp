#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechNullItem.h"
#include "Windows.Xbox.Speech.Recognition.SpeechNullItem.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType SpeechNullItem::MatchType()
    {
        throw hresult_not_implemented();
    }
    void SpeechNullItem::MatchType(winrt::Windows::Xbox::Speech::Recognition::SpeechRuleItemMatchType const& value)
    {
        throw hresult_not_implemented();
    }
    hstring SpeechNullItem::Semantics()
    {
        throw hresult_not_implemented();
    }
    void SpeechNullItem::Semantics(hstring const& value)
    {
        throw hresult_not_implemented();
    }
}
