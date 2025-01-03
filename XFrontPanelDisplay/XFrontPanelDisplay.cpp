#include "pch.h"
#include <cstdint>
#include <dxgiformat.h>


HRESULT __stdcall XFrontPanelGetButtonStates_X(
    _Out_ uint32_t* buttons
)
{
	*buttons = 0;
	return S_OK;
}

HRESULT __stdcall XFrontPanelGetLightStates_X(
    _Out_ uint32_t* lights
)
{
	*lights = 0;
	return S_OK;
}

HRESULT __stdcall XFrontPanelSetLightStates_X(
    _In_ uint32_t lights
)
{
	return S_OK;
}

HRESULT __stdcall XFrontPanelGetScreenDimensions_X(
    _Out_ uint32_t* height,
    _Out_ uint32_t* width
)
{
    // unixian: this replicates the front panel display that is on series console devkits, which is 256 x 64
	*height = 64;
	*width = 256;
	return S_OK;
}

HRESULT __stdcall XFrontPanelGetScreenPixelFormat_X(
    _Out_ DXGI_FORMAT* pixelFormat
)
{
    return E_NOTIMPL;
}

HRESULT __stdcall XFrontPanelSetDisplayName_X(
    _In_ const char* displayName
)
{
	return S_OK;
}

HRESULT __stdcall XFrontPanelPresentBuffer_X(
    _In_ uint32_t bufferSize,
    _In_reads_(bufferSize) const uint8_t* buffer
)
{
    return E_NOTIMPL;
}

bool __stdcall XFrontPanelIsSupported_X()
{
	return false;
}