#include "pch.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticValue.h"
#include "Microsoft.Xbox.Services.Statistics.Manager.StatisticValue.g.cpp"


namespace winrt::Microsoft::Xbox::Services::Statistics::Manager::implementation
{
    hstring StatisticValue::Name()
    {
        throw hresult_not_implemented();
    }
    double StatisticValue::AsNumber()
    {
        throw hresult_not_implemented();
    }
    int64_t StatisticValue::AsInteger()
    {
        throw hresult_not_implemented();
    }
    hstring StatisticValue::AsString()
    {
        throw hresult_not_implemented();
    }
    winrt::Microsoft::Xbox::Services::Statistics::Manager::StatisticDataType StatisticValue::DataType()
    {
        throw hresult_not_implemented();
    }
}
