// ReSharper disable CppInconsistentNaming
// ReSharper disable CppClangTidyClangDiagnosticUnusedFunction
#include "pch.h"

void D3DQuerySEQCounters_X()
{

}

void D3DUploadCustomMicrocode_X()
{

}

HRESULT __stdcall D3D11XCreateDeviceXAndSwapChain1_X(const D3D11X_CREATE_DEVICE_PARAMETERS* pParameters,
    const DXGI_SWAP_CHAIN_DESC1* pSwapChainDesc, IDXGISwapChain1** ppSwapChain, 
    // ID3D11DeviceX** ppDevice, ID3D11DeviceContextX** ppImmediateContext
    ID3D11Device** ppDevice, ID3D11DeviceContext** ppImmediateContext)
{
    // D3D11_CREATE_DEVICE_VIDEO_EXCLUSIVE
    if ((pParameters->Flags & 0x10000) != 0 || !ppSwapChain)
    {
        return E_INVALIDARG;
    }
    else
    {
        // @Patoke todo: should we be using pParameters->Flags? there's XBOX specific flags, also should we use pParameters->Version instead of D3D11_SDK_VERSION?
        return D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, 0, pParameters->Flags, NULL, NULL, D3D11_SDK_VERSION, ppDevice, NULL, ppImmediateContext);
    }
}

HRESULT __stdcall D3DAllocateGraphicsMemory_X(SIZE_T SizeBytes, SIZE_T AlignmentBytes, UINT64 DesiredGpuVirtualAddress, UINT Flags, void **ppAddress)
{
    DWORD Protect = 0;

    if (!ppAddress || AlignmentBytes > 0x20000)
        return E_INVALIDARG;

    // @Patoke note: these 2 types in the XBOX also use the MEM_GRAPHICS flag
    DWORD AllocType = MEM_4MB_PAGES | MEM_COMMIT | MEM_RESERVE;
    if (AlignmentBytes <= 0x10000)
        AllocType = MEM_LARGE_PAGES | MEM_COMMIT | MEM_RESERVE;

    if (Flags == D3D11_GRAPHICS_MEMORY_ACCESS_CPU_CACHE_COHERENT)
    {
        // @Patoke note: this also includes the PAGE_GPU_COHERENT flag in the XBOX
        Protect = PAGE_READWRITE;
    }
    else if (Flags == D3D11_GRAPHICS_MEMORY_ACCESS_CPU_WRITECOMBINE_NONCOHERENT)
    {
        Protect = PAGE_READWRITE | PAGE_WRITECOMBINE;
    }
    else if (Flags == D3D11_GRAPHICS_MEMORY_ACCESS_CPU_CACHE_NONCOHERENT_GPU_READONLY)
    {
        return E_INVALIDARG;
    }
    else
    {
        // @Patoke note: this also includes the PAGE_GPU_READONLY flag in the XBOX
        Protect = PAGE_READWRITE;
    }

    LPVOID AllocBase = VirtualAlloc((LPVOID)DesiredGpuVirtualAddress, SizeBytes, AllocType, Protect);
    *ppAddress = AllocBase;
    return AllocBase == nullptr ? E_OUTOFMEMORY : S_OK;
}

void D3DConfigureVirtualMemory_X()
{

}

void __stdcall D3DFlushEntireCpuCache_X()
{
    FlushInstructionCache(GetCurrentProcess( ), NULL, NULL);
}

HRESULT __stdcall D3DFreeGraphicsMemory_X(void* pAddress)
{
	VirtualFree(pAddress, NULL, MEM_RELEASE);
	return S_OK;
}

void D3DMapEsramMemory_X()
{

}

void DXGIXGetFrameStatistics_X()
{

}

void DXGIXPresentArray_X()
{

}

void DXGIXSetFrameNotification_X()
{

}

void DXGIXSetVLineNotification_X()
{

}