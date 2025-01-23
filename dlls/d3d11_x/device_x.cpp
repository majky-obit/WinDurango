#include "device_x.h"
#include <stdexcept>

void wd::device_x::GetImmediateContextX(wdi::ID3D11DeviceContextX** ppImmediateContextX)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateCounterSet(const wdi::D3D11X_COUNTER_SET_DESC* pCounterSetDesc,
								   wdi::ID3D11CounterSetX** ppCounterSet)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateCounterSample(wdi::ID3D11CounterSampleX** ppCounterSample)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::SetDriverHint(UINT Feature, UINT Value)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateDmaEngineContext(const wdi::D3D11_DMA_ENGINE_CONTEXT_DESC* pDmaEngineContextDesc,
										 wdi::ID3D11DmaEngineContextX** ppDmaDeviceContext)
{
	throw std::logic_error("Not implemented");
}

BOOL wd::device_x::IsFencePending(UINT64 Fence)
{
	throw std::logic_error("Not implemented");
}

BOOL wd::device_x::IsResourcePending(ID3D11Resource* pResource)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreatePlacementBuffer(const D3D11_BUFFER_DESC* pDesc, void* pVirtualAddress,
										ID3D11Buffer** ppBuffer)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreatePlacementTexture1D(const D3D11_TEXTURE1D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
										   void* pVirtualAddress, ID3D11Texture1D** ppTexture1D)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreatePlacementTexture2D(const D3D11_TEXTURE2D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
										   void* pVirtualAddress, ID3D11Texture2D** ppTexture2D)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreatePlacementTexture3D(const D3D11_TEXTURE3D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
										   void* pVirtualAddress, ID3D11Texture3D** ppTexture3D)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::GetTimestamps(UINT64* pGpuTimestamp, UINT64* pCpuRdtscTimestamp)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateSamplerStateX(const wdi::D3D11X_SAMPLER_DESC* pSamplerDesc,
									  ID3D11SamplerState** ppSamplerState)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateDeferredContextX(UINT Flags, wdi::ID3D11DeviceContextX** ppDeferredContext)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::GarbageCollect(UINT Flags)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateDepthStencilStateX(const D3D11_DEPTH_STENCIL_DESC* pDepthStencilStateDesc,
										   ID3D11DepthStencilState** ppDepthStencilState)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreatePlacementRenderableTexture2D(const D3D11_TEXTURE2D_DESC* pDesc, UINT TileModeIndex,
													 UINT Pitch,
													 const wdi::D3D11X_RENDERABLE_TEXTURE_ADDRESSES* pAddresses,
													 ID3D11Texture2D** ppTexture2D)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::GetDriverStatistics(UINT StructSize, wdi::D3D11X_DRIVER_STATISTICS* pStatistics)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateComputeContextX(const wdi::D3D11_COMPUTE_CONTEXT_DESC* pComputeContextDesc,
										wdi::ID3D11ComputeContextX** ppComputeContext)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeShaderResourceView(const wdi::D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
										 const wdi::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
										 wdi::D3D11X_DESCRIPTOR_SHADER_RESOURCE_VIEW* pDescriptorSrv)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeUnorderedAccessView(const wdi::D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
										  const wdi::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
										  wdi::D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW* pDescriptorUav)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeConstantBufferView(const wdi::D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
										 const wdi::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
										 wdi::D3D11X_DESCRIPTOR_CONSTANT_BUFFER_VIEW* pDescriptorCb)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeVertexBufferView(const wdi::D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
									   const wdi::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
									   wdi::D3D11X_DESCRIPTOR_VERTEX_BUFFER_VIEW* pDescriptorVb)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeSamplerState(const wdi::D3D11X_SAMPLER_STATE_DESC* pSamplerDesc,
								   wdi::D3D11X_DESCRIPTOR_SAMPLER_STATE* pDescriptorSamplerState)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::PlaceSwapChainView(ID3D11Resource* pSwapChainBuffer, ID3D11View* pView)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::SetDebugFlags(UINT Flags)
{
	throw std::logic_error("Not implemented");
}

UINT wd::device_x::GetDebugFlags( )
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::SetHangCallbacks(wdi::D3D11XHANGBEGINCALLBACK pBeginCallback, wdi::D3D11XHANGPRINTCALLBACK pPrintCallback,
								wdi::D3D11XHANGDUMPCALLBACK pDumpCallback)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::ReportGpuHang(UINT Flags)
{
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::SetGpuMemoryPriority(UINT Priority)
{
	throw std::logic_error("Not implemented");
}

void wd::device_x::GetGpuHardwareConfiguration(wdi::D3D11X_GPU_HARDWARE_CONFIGURATION* pGpuHardwareConfiguration)
{
	throw std::logic_error("Not implemented");
}
