#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.SpeechAudioProblemOccurredEventArgs.h"
#include "Windows.Xbox.Speech.Recognition.SpeechAudioProblemOccurredEventArgs.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Xbox::Speech::Recognition::SpeechRecognitionAudioProblem SpeechAudioProblemOccurredEventArgs::Problem()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
