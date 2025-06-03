#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechHypothesisResultEventArgs.h"
#include "Windows.Xbox.Speech.Recognition.SpeechHypothesisResultEventArgs.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionResult SpeechHypothesisResultEventArgs::Hypothesis()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
