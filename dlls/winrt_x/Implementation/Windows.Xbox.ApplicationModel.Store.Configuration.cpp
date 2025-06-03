#include "pch.h"
#include "Windows.Xbox.ApplicationModel.Store.Configuration.h"
#include "Windows.Xbox.ApplicationModel.Store.Configuration.g.cpp"

namespace winrt::Windows::Xbox::ApplicationModel::Store::implementation
{
    hstring Configuration::MarketplaceId()
    {
        LOG_NOTIMPLEMENTED(); throw hresult_not_implemented();
    }
}
