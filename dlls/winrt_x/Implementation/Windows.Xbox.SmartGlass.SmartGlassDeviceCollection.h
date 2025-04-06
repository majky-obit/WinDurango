#pragma once
#include "Windows.Xbox.SmartGlass.SmartGlassDeviceCollection.g.h"

namespace winrt::Windows::Xbox::SmartGlass::implementation
{
    struct SmartGlassDeviceCollection : SmartGlassDeviceCollectionT<SmartGlassDeviceCollection>
    {
        SmartGlassDeviceCollection() = default;

        winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> First();
        winrt::Windows::Xbox::SmartGlass::SmartGlassDevice GetAt(uint32_t index);
        uint32_t Size();
        bool IndexOf(winrt::Windows::Xbox::SmartGlass::SmartGlassDevice const& value, uint32_t& index);
        uint32_t GetMany(uint32_t startIndex, array_view<winrt::Windows::Xbox::SmartGlass::SmartGlassDevice> items);
    };
}