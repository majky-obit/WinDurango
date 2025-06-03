#include "pch.h"
#include "Windows.Xbox.ApplicationModel.Store.ProductPurchasedEventArgs.h"
#include "Windows.Xbox.ApplicationModel.Store.ProductPurchasedEventArgs.g.cpp"


namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    hstring ProductPurchasedEventArgs::Receipt()
    {
        Logger::NotImplemented(); throw hresult_not_implemented();
    }
}
