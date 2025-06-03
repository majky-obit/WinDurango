#include "pch.h"
#include "Windows.Xbox.Speech.Recognition.ContinuousSpeechRecognitionStatusEventArgs.h"
#include "Windows.Xbox.Speech.Recognition.ContinuousSpeechRecognitionStatusEventArgs.g.cpp"



namespace winrt::Windows::Xbox::Speech::Recognition::implementation
{
    winrt::Windows::Xbox::Speech::Recognition::ContinuousSpeechRecognitionStatus ContinuousSpeechRecognitionStatusEventArgs::Status()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
    winrt::hresult ContinuousSpeechRecognitionStatusEventArgs::ErrorCode()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
