#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.ContinuousSpeechRecognitionStatusEventArgs.h"
#include "Windows.Xbox.Speech.Recognition.ContinuousSpeechRecognitionStatusEventArgs.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionStatus ContinuousSpeechRecognitionStatusEventArgs::Status()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
    winrt::hresult ContinuousSpeechRecognitionStatusEventArgs::ErrorCode()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
