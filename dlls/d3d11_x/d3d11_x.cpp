#include "d3d11_x.h"
#include <cstdio>
#include <mutex>
#include "overlay/overlay.h"
#include <d3d11.h>
#include <d3d12.h>
#include <dxgi1_2.h>
#include "device_context_x.h"
#include "device_x.h"
#include "wrl.h"
#include <windows.ui.core.h>


using namespace Microsoft::WRL;
using namespace ABI::Windows::UI::Core;

#define DXGI_SWAPCHAIN_FLAG_MASK DXGI_SWAP_CHAIN_FLAG_NONPREROTATED | DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH | DXGI_SWAP_CHAIN_FLAG_GDI_COMPATIBLE \
		| DXGI_SWAP_CHAIN_FLAG_RESTRICTED_CONTENT | DXGI_SWAP_CHAIN_FLAG_RESTRICT_SHARED_RESOURCE_DRIVER | DXGI_SWAP_CHAIN_FLAG_DISPLAY_ONLY | DXGI_SWAP_CHAIN_FLAG_FRAME_LATENCY_WAITABLE_OBJECT \
		| DXGI_SWAP_CHAIN_FLAG_FOREGROUND_LAYER | DXGI_SWAP_CHAIN_FLAG_FULLSCREEN_VIDEO | DXGI_SWAP_CHAIN_FLAG_YUV_VIDEO \
		| DXGI_SWAP_CHAIN_FLAG_HW_PROTECTED | DXGI_SWAP_CHAIN_FLAG_ALLOW_TEARING \
		| DXGI_SWAP_CHAIN_FLAG_RESTRICTED_TO_ALL_HOLOGRAPHIC_DISPLAYS 

HRESULT CreateDevice(UINT Flags, wdi::ID3D11Device** ppDevice, wdi::ID3D11DeviceContext** ppImmediateContext)
{
    D3D_FEATURE_LEVEL featurelevels[] = {
        D3D_FEATURE_LEVEL_11_1,
        D3D_FEATURE_LEVEL_11_0,
    };

    ID3D11Device2* device2{};
    ID3D11DeviceContext2* device_context2{};

    auto flags = Flags & CREATE_DEVICE_FLAG_MASK;

#ifdef _DEBUG
    flags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

    HRESULT hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, flags, featurelevels, _ARRAYSIZE(featurelevels), D3D11_SDK_VERSION, reinterpret_cast<ID3D11Device**>(ppDevice), NULL, reinterpret_cast<ID3D11DeviceContext**>(ppImmediateContext));
    if (SUCCEEDED(hr))
    {
        // get dx11.2 feature level, since that's what dx11.x inherits from
        if (ppDevice != nullptr)
        {
            (*ppDevice)->QueryInterface(IID_PPV_ARGS(&device2));
            *ppDevice = reinterpret_cast<wdi::ID3D11Device*>(new wd::device_x(device2));
        }

        if (ppImmediateContext != nullptr)
        {
            (*ppImmediateContext)->QueryInterface(IID_PPV_ARGS(&device_context2));
            *ppImmediateContext = reinterpret_cast<wdi::ID3D11DeviceContext*>(new wd::device_context_x(device_context2));
        }
    }
    else
    {
        printf("failed to assign wrapped device, result code 0x%X, error code 0x%X\n", hr, GetLastError( ));
    }

    return hr;
}

#include "../common/debug.h"
#include <wrl/client.h>
#include <iostream>
#include "dxgi_swapchain.h"

HRESULT _stdcall D3DQuerySEQCounters_X(D3D_SEQ_COUNTER_DATA* pData)
{
    return E_NOTIMPL;
}

HRESULT _stdcall D3DUploadCustomMicrocode_X(
    _In_ UINT32 MicrocodeVersion,
    _In_ SIZE_T CeMicrocodeSizeBytes,
    _In_reads_bytes_(CeMicrocodeSizeBytes) const void* pCeMicrocode,
    _In_ SIZE_T PfpMicrocodeSizeBytes,
    _In_reads_bytes_(PfpMicrocodeSizeBytes) const void* pPfpMicrocode,
    _In_ SIZE_T MeMicrocodeSizeBytes,
    _In_reads_bytes_(MeMicrocodeSizeBytes) const void* pMeMicrocode)
{
    return E_NOTIMPL;
}

HRESULT CreateDeviceAndSwapChain(UINT Flags, wdi::ID3D11Device** ppDevice, wdi::ID3D11DeviceContext** ppImmediateContext, wdi::IDXGISwapChain1** ppSwapChain, const DXGI_SWAP_CHAIN_DESC1* pSwapChainDesc)
{
    D3D_FEATURE_LEVEL featurelevels[] = {
        D3D_FEATURE_LEVEL_11_1,
        D3D_FEATURE_LEVEL_11_0,
    };

    ID3D11Device2* device2{};
    ID3D11DeviceContext2* device_context2{};
    IDXGISwapChain1* swap_chain1{};


    auto flags = Flags & CREATE_DEVICE_FLAG_MASK;

#ifdef _DEBUG
    flags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

    HRESULT hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, flags, featurelevels, _ARRAYSIZE(featurelevels), D3D11_SDK_VERSION, reinterpret_cast<ID3D11Device**>(ppDevice), NULL, reinterpret_cast<ID3D11DeviceContext**>(ppImmediateContext));
    if (SUCCEEDED(hr))
    {
        // get dx11.2 feature level, since that's what dx11.x inherits from
        if (ppDevice != nullptr)
        {
            (*ppDevice)->QueryInterface(IID_PPV_ARGS(&device2));
            *ppDevice = reinterpret_cast<wdi::ID3D11Device*>(new wd::device_x(device2));
        }

        if (ppImmediateContext != nullptr)
        {
            (*ppImmediateContext)->QueryInterface(IID_PPV_ARGS(&device_context2));
            *ppImmediateContext = reinterpret_cast<wdi::ID3D11DeviceContext*>(new wd::device_context_x(device_context2));
        }
    }
    else
    {
        printf("failed to assign wrapped device, result code 0x%X, error code 0x%X\n", hr, GetLastError( ));
    }

    ComPtr<IDXGIFactory2> pFactory;
    CreateDXGIFactory1(IID_PPV_ARGS(&pFactory));

    ComPtr<ICoreWindowStatic> pWindowStatic;
    RoGetActivationFactory(Microsoft::WRL::Wrappers::HStringReference::HStringReference(RuntimeClass_Windows_UI_Core_CoreWindow).Get( ), IID_PPV_ARGS(&pWindowStatic));

    ComPtr<ICoreWindow> pWindow;
    pWindowStatic->GetForCurrentThread(&pWindow);

    auto swap_chain_desc = *pSwapChainDesc;

    swap_chain_desc.Scaling = DXGI_SCALING_ASPECT_RATIO_STRETCH;
    swap_chain_desc.Flags &= DXGI_SWAPCHAIN_FLAG_MASK;

    pFactory->CreateSwapChainForCoreWindow(reinterpret_cast<IUnknown*>(device2), pWindow.Get( ), &swap_chain_desc, nullptr, &swap_chain1);

    if (ppSwapChain != nullptr)
    {
        *ppSwapChain = new wd::dxgi_swapchain(swap_chain1);
    }
    return hr;
}

HRESULT __stdcall D3D11XCreateDeviceXAndSwapChain1_X(const D3D11X_CREATE_DEVICE_PARAMETERS* pParameters,
    const DXGI_SWAP_CHAIN_DESC1* pSwapChainDesc, wdi::IDXGISwapChain1** ppSwapChain,
    // ID3D11DeviceX** ppDevice, ID3D11DeviceContextX** ppImmediateContext
    wdi::ID3D11Device** ppDevice, wdi::ID3D11DeviceContext** ppImmediateContext)
{
    // D3D11_CREATE_DEVICE_VIDEO_EXCLUSIVE
    if ((pParameters->Flags & 0x10000) != 0 || !ppSwapChain)
    {
        return E_INVALIDARG;
    }

    DEBUGPRINT("!!! Game is trying to initialize D3D11 through D3D11X !!!");
    DEBUGPRINT("SDK Version: %d\n", pParameters->Version);

    HRESULT hr = CreateDeviceAndSwapChain(pParameters->Flags, ppDevice, ppImmediateContext, ppSwapChain, pSwapChainDesc);

    return hr;
}

HRESULT __stdcall D3DAllocateGraphicsMemory_X(SIZE_T SizeBytes, SIZE_T AlignmentBytes, UINT64 DesiredGpuVirtualAddress, UINT Flags, void** ppAddress)
{
    printf("D3DAllocateGraphicsMemory_X was called!!!\n");
    DWORD Protect = 0;

    if (!ppAddress || AlignmentBytes > 0x20000)
        return E_INVALIDARG;

    // @Patoke todo: these 2 types in the XBOX also use the MEM_GRAPHICS flag
    //  meaning it's allocating GPU memory, fix
    DWORD AllocType = MEM_4MB_PAGES | MEM_COMMIT | MEM_RESERVE;
    if (AlignmentBytes <= 0x10000)
        AllocType = MEM_LARGE_PAGES | MEM_COMMIT | MEM_RESERVE;

    switch(Flags) {
    case D3D11_GRAPHICS_MEMORY_ACCESS_CPU_CACHE_COHERENT:
        // @Patoke note: this also includes the PAGE_GPU_COHERENT flag in the XBOX
        Protect = PAGE_READWRITE;
        break;
    case D3D11_GRAPHICS_MEMORY_ACCESS_CPU_WRITECOMBINE_NONCOHERENT:
        Protect = PAGE_READWRITE | PAGE_WRITECOMBINE;
        break;
    case D3D11_GRAPHICS_MEMORY_ACCESS_CPU_CACHE_NONCOHERENT_GPU_READONLY:
        return E_INVALIDARG;
    default:
        // @Patoke note: this also includes the PAGE_GPU_READONLY flag in the XBOX
        Protect = PAGE_READWRITE;
    }

    *ppAddress = VirtualAlloc((LPVOID) DesiredGpuVirtualAddress, SizeBytes, AllocType, Protect);

    return !*ppAddress ? E_OUTOFMEMORY : S_OK;
}

HRESULT __stdcall D3DConfigureVirtualMemory_X(_Inout_ D3D11X_VIRTUAL_MEMORY_CONFIGURATION* pVMConfiguration)
{
    return E_NOTIMPL;
}

void __stdcall D3DFlushEntireCpuCache_X()
{
    FlushInstructionCache(GetCurrentProcess( ), NULL, NULL);
}

HRESULT __stdcall D3DFreeGraphicsMemory_X(void* pAddress)
{
    // @Patoke todo: this should be freeing GPU memory
    VirtualFree(pAddress, NULL, MEM_RELEASE);
    return S_OK;
}

HRESULT __stdcall D3DMapEsramMemory_X(UINT Flags, VOID* pVirtualAddress, UINT NumPages, const UINT* pPageList)
{
    printf("D3DMapEsramMemory_X was called!!!\n");
    
    //Rodrigo Todescatto: This will allocate 4mb of RAM as a stub.
    VirtualAlloc(pVirtualAddress, 0x3D0900, MEM_COMMIT, PAGE_READWRITE);

    if (pPageList == 0)
    {
        VirtualFree(pVirtualAddress, 0x3D0900, MEM_RELEASE);
    }

    return S_OK;
}

HRESULT __stdcall DXGIXGetFrameStatistics_X(
    _In_ UINT NumberFramesRequested,
    _Out_writes_(NumberFramesRequested) DXGIX_FRAME_STATISTICS* pStats)
{
    return E_NOTIMPL;
}

HRESULT _stdcall DXGIXPresentArray_X(
    _In_ UINT SyncInterval,
    _In_ UINT PresentImmediateThreshold,
    _In_ UINT Flags,
    _In_ UINT NumSwapChains,
    _In_ wdi::IDXGISwapChain1* const* ppSwapChain,
    _In_ const DXGIX_PRESENTARRAY_PARAMETERS* pPresentParameters)
{
    //printf("DXGIXPresentArray_X was called!!!\n");

    int i = 0;
    HRESULT hr = ppSwapChain[i]->Present(SyncInterval, Flags);

    return hr;
}

HRESULT __stdcall DXGIXSetFrameNotification_X(
    _In_ DXGIX_FRAME_NOTIFICATION NotificationType,
    _In_ HANDLE hEvent)
{
    return E_NOTIMPL;
}

HRESULT __stdcall DXGIXSetVLineNotification_X(
    _In_ DXGIX_VLINECOUNTER VLineCounter,
    _In_ UINT32 VLineNumber,
    _In_opt_ HANDLE hEvent)
{
    return E_NOTIMPL;
}

HRESULT __stdcall D3D11CreateDevice_X(
    _In_opt_ IDXGIAdapter* pAdapter,
    D3D_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    _In_reads_opt_(FeatureLevels) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
    UINT FeatureLevels,
    UINT SDKVersion,
    _Out_opt_ wdi::ID3D11Device** ppDevice,
    _Out_opt_ D3D_FEATURE_LEVEL* pFeatureLevel,
    _Out_opt_ wdi::ID3D11DeviceContext** ppImmediateContext)
{
    DEBUGPRINT("!!! Game is trying to initialize D3D11 through NORMAL D3D11 !!!\n");
    DEBUGPRINT("SDK Version: %d\n", SDKVersion);

    if (SDKVersion != D3D11_SDK_VERSION)
    {
        DEBUGPRINT("SDK Version mismatch: %d, correcting to %d\n", SDKVersion, D3D11_SDK_VERSION);
        SDKVersion = D3D11_SDK_VERSION;
    }

    D3D_FEATURE_LEVEL featurelevels[] = {
        D3D_FEATURE_LEVEL_11_1,
        D3D_FEATURE_LEVEL_11_0,
    };

    ID3D11Device2* device2{};
    ID3D11DeviceContext2* device_context2{};
    auto flags = Flags & CREATE_DEVICE_FLAG_MASK;
#ifdef _DEBUG
    flags |= D3D11_CREATE_DEVICE_DEBUG;
#endif

    HRESULT hr = D3D11CreateDevice(pAdapter, DriverType, Software, flags, featurelevels, _ARRAYSIZE(featurelevels), SDKVersion, (ID3D11Device**) ppDevice, pFeatureLevel, (ID3D11DeviceContext**) ppImmediateContext);


    if (SUCCEEDED(hr))
    {
        // get dx11.2 feature level, since that's what dx11.x inherits from
        if (ppDevice != nullptr)
        {
            (*ppDevice)->QueryInterface(IID_PPV_ARGS(&device2));
            *ppDevice = reinterpret_cast<wdi::ID3D11Device*>(new wd::device_x(device2));
        }

        if (ppImmediateContext != nullptr)
        {
            (*ppImmediateContext)->QueryInterface(IID_PPV_ARGS(&device_context2));
            *ppImmediateContext = reinterpret_cast<wdi::ID3D11DeviceContext*>(new wd::device_context_x(device_context2));
        }
    }
    else
    {
        DEBUGPRINT("failed to assign wrapped device, result code 0x%X, error code 0x%X\n", hr, GetLastError());
    }
    
    return hr;
}

HRESULT __stdcall D3D11XCreateDeviceX_X(
    _In_ const D3D11X_CREATE_DEVICE_PARAMETERS* pParameters,
    _Out_opt_ wdi::ID3D11Device** ppDevice,
    _Out_opt_ wdi::ID3D11DeviceContext** ppImmediateContext)
{
    printf("!!! Game is trying to initialize D3D11 through D3D11X !!!");
    printf("SDK Version: %d\n", pParameters->Version);

	return CreateDevice(pParameters->Flags, ppDevice, ppImmediateContext);
}

HRESULT __stdcall D3D11CreateDeviceAndSwapChain_X(
    _In_opt_ IDXGIAdapter* pAdapter,
    D3D_DRIVER_TYPE DriverType,
    HMODULE Software,
    UINT Flags,
    _In_reads_opt_(FeatureLevels) CONST D3D_FEATURE_LEVEL* pFeatureLevels,
    UINT FeatureLevels,
    UINT SDKVersion,
    _In_opt_ CONST DXGI_SWAP_CHAIN_DESC* pSwapChainDesc,
    _Out_opt_ IDXGISwapChain** ppSwapChain,
    _Out_opt_ ID3D11Device** ppDevice,
    _Out_opt_ D3D_FEATURE_LEVEL* pFeatureLevel,
    _Out_opt_ ID3D11DeviceContext** ppImmediateContext)
{
    DEBUGPRINT("!!! Game is trying to initialize D3D11 through NORMAL D3D11 !!!");
    DEBUGPRINT("SDK Version: %d\n", SDKVersion);
    return D3D11CreateDeviceAndSwapChain(pAdapter, DriverType, Software, Flags, pFeatureLevels, FeatureLevels, SDKVersion, pSwapChainDesc, ppSwapChain, ppDevice, pFeatureLevel, ppImmediateContext);
}



std::mutex g_NotifyMutex;

// this function exists for other WinDurango dlls to notify the graphics component of an action
// for right now, this is used for signaling when a keyboard is requested by a game and rendering it using ImGUI
void WD11XNotify_X(WDEVENT_TYPE event)
{
    const std::lock_guard lock(g_NotifyMutex);
	DEBUGPRINT("[d3d11_x] received notification\n");

    switch (event)
    {
	case WDEVENT_TYPE_INVALID:
		throw std::exception("this shouldn't happen, check code that sends events.");
	case WDEVENT_TYPE_KEYBOARD_ENGAGE:
		DEBUGPRINT("[d3d11_x] keyboard engage\n");
		WinDurango::g_Overlay->EnableKeyboard( );
		break;
    }
}

void WDWaitForKeyboard(const char** outText)
{
	DEBUGPRINT("[d3d11_x] waiting for keyboard\n");

    WaitForSingleObject(WinDurango::g_KeyboardFinished, INFINITE);

	*outText = WinDurango::g_KeyboardText;
}