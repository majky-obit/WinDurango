#include "dxgi_swapchain.h"

HRESULT wd::dxgi_swapchain::QueryInterface(const IID& riid, void** ppvObject)
{
	return IDXGISwapChain1::QueryInterface(riid, ppvObject);
}

HRESULT wd::dxgi_swapchain::GetParent(const IID& riid, void** ppParent)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetDevice(const IID& riid, void** ppDevice)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::Present(UINT SyncInterval, UINT Flags)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetBuffer(UINT Buffer, const IID& riid, void** ppSurface)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::SetFullscreenState(BOOL Fullscreen, IDXGIOutput* pTarget)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetFullscreenState(BOOL* pFullscreen, IDXGIOutput** ppTarget)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetDesc(DXGI_SWAP_CHAIN_DESC* pDesc)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::ResizeBuffers(UINT BufferCount, UINT Width, UINT Height, DXGI_FORMAT NewFormat,
	UINT SwapChainFlags)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::ResizeTarget(const DXGI_MODE_DESC* pNewTargetParameters)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetContainingOutput(IDXGIOutput** ppOutput)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetFrameStatistics(DXGI_FRAME_STATISTICS* pStats)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetLastPresentCount(UINT* pLastPresentCount)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetDesc1(DXGI_SWAP_CHAIN_DESC1* pDesc)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetFullscreenDesc(DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pDesc)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetHwnd(HWND* pHwnd)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetCoreWindow(const IID& refiid, void** ppUnk)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::Present1(UINT SyncInterval, UINT PresentFlags,
	const DXGI_PRESENT_PARAMETERS* pPresentParameters)
{
	throw std::logic_error("Not implemented");
}

BOOL wd::dxgi_swapchain::IsTemporaryMonoSupported()
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetRestrictToOutput(IDXGIOutput** ppRestrictToOutput)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::SetBackgroundColor(const DXGI_RGBA* pColor)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetBackgroundColor(DXGI_RGBA* pColor)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::SetRotation(DXGI_MODE_ROTATION Rotation)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::dxgi_swapchain::GetRotation(DXGI_MODE_ROTATION* pRotation)
{
	throw std::logic_error("Not implemented");
}
