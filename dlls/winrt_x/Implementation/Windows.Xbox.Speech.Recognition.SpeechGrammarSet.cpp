#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarSet.h"
#include "Windows.Xbox.Speech.Recognition.SpeechGrammarSet.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar>> SpeechGrammarSet::First()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar SpeechGrammarSet::Lookup(hstring const& key)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    uint32_t SpeechGrammarSet::Size()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    bool SpeechGrammarSet::HasKey(hstring const& key)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechGrammarSet::Split(winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar>& first, winrt::Windows::Foundation::Collections::IMapView<hstring, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar>& second)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar SpeechGrammarSet::AddGrammarFromList(hstring const& key, winrt::Windows::Foundation::Collections::IIterable<hstring> const& phrases)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar SpeechGrammarSet::AddGrammarFromUri(hstring const& key, winrt::Windows::Foundation::Uri const& grammarUri)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar SpeechGrammarSet::AddGrammarFromStream(hstring const& key, winrt::Windows::Storage::Streams::IRandomAccessStream const& stream)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    void SpeechGrammarSet::Clear()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar SpeechGrammarSet::Remove(hstring const& key)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Speech::Recognition::SpeechGrammar SpeechGrammarSet::AddGrammarFromBuilder(hstring const& key, winrt::Windows::Xbox::Speech::Recognition::SpeechGrammarBuilder const& grammar)
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
