#include "device_x.h"
#include <stdexcept>
#include "resource.hpp"
#include "view.hpp"
#include <iostream>

HRESULT wd::device_x::CreateBuffer(const D3D11_BUFFER_DESC* pDesc, const D3D11_SUBRESOURCE_DATA* pInitialData,
	ID3D11Buffer** ppBuffer)
{
	ID3D11Buffer* buffer = nullptr;
	HRESULT hr = wrapped_interface->CreateBuffer(pDesc, pInitialData, &buffer);

	if (ppBuffer != nullptr)
	{
		*ppBuffer = SUCCEEDED(hr) ? reinterpret_cast<ID3D11Buffer*>(new wd::buffer(buffer)) : nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreateTexture1D(const D3D11_TEXTURE1D_DESC* pDesc, const D3D11_SUBRESOURCE_DATA* pInitialData,
                                      ID3D11Texture1D** ppTexture1D)
{
	ID3D11Texture1D* texture1d = nullptr;
	HRESULT hr = wrapped_interface->CreateTexture1D(pDesc, pInitialData, &texture1d);

	printf("[CreateTexture1D] created texture at 0x%llX\n", texture1d);

	if (ppTexture1D != nullptr)
	{
		*ppTexture1D = SUCCEEDED(hr) ? reinterpret_cast<ID3D11Texture1D*>(new texture_1d(texture1d)) : nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreateTexture2D(const D3D11_TEXTURE2D_DESC* pDesc, const D3D11_SUBRESOURCE_DATA* pInitialData,
	ID3D11Texture2D** ppTexture2D)
{
	//Rodrigo Todescatto: SampleDesc.Quality is kind of obsolete nowadays.
	const_cast<D3D11_TEXTURE2D_DESC*>(pDesc)->SampleDesc.Quality = 0;

	ID3D11Texture2D* texture2d = nullptr;
	HRESULT hr = wrapped_interface->CreateTexture2D(pDesc, pInitialData, &texture2d);

	printf("[CreateTexture2D] created texture at 0x%llX\n", texture2d);

	if (ppTexture2D != nullptr)
	{
		*ppTexture2D = SUCCEEDED(hr) ? reinterpret_cast<ID3D11Texture2D*>(new texture_2d(texture2d)) : nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreateTexture3D(const D3D11_TEXTURE3D_DESC* pDesc, const D3D11_SUBRESOURCE_DATA* pInitialData,
	ID3D11Texture3D** ppTexture3D)
{
	ID3D11Texture3D* texture3d = nullptr;
	HRESULT hr = wrapped_interface->CreateTexture3D(pDesc, pInitialData, &texture3d);

	printf("[CreateTexture3D] created texture at 0x%llX\n", texture3d);

	if (ppTexture3D != nullptr)
	{
		*ppTexture3D = SUCCEEDED(hr) ? reinterpret_cast<ID3D11Texture3D*>(new texture_3d(texture3d)) : nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreateShaderResourceView(ID3D11Resource* pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc,
                                               ID3D11ShaderResourceView** ppSRView)
{	
	::ID3D11ShaderResourceView* target = nullptr;
	HRESULT hr = wrapped_interface->CreateShaderResourceView(reinterpret_cast<d3d11_resource*>(pResource)->wrapped_interface, pDesc, &target);

	if (ppSRView != nullptr)
	{
		*ppSRView = SUCCEEDED(hr) ? reinterpret_cast<ID3D11ShaderResourceView*>(new shader_resource_view(target))
			: nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreateUnorderedAccessView(ID3D11Resource* pResource,
                                                const D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc, ID3D11UnorderedAccessView** ppUAView)
{
	::ID3D11UnorderedAccessView* target = nullptr;
	HRESULT hr = wrapped_interface->CreateUnorderedAccessView(reinterpret_cast<d3d11_resource*>(pResource)->wrapped_interface, pDesc, &target);

	if (ppUAView != nullptr)
	{
		*ppUAView = SUCCEEDED(hr) ? reinterpret_cast<ID3D11UnorderedAccessView*>(new unordered_access_view(target))
			: nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreateRenderTargetView(ID3D11Resource* pResource, const D3D11_RENDER_TARGET_VIEW_DESC* pDesc,
                                             ID3D11RenderTargetView** ppRTView)
{
	::ID3D11RenderTargetView* target = nullptr;
	HRESULT hr = wrapped_interface->CreateRenderTargetView(reinterpret_cast<wd::d3d11_resource*>(pResource)->wrapped_interface, pDesc, &target);

	if (ppRTView != nullptr)
	{
		*ppRTView = SUCCEEDED(hr) ? reinterpret_cast<ID3D11RenderTargetView*>(new wd::render_target_view(target))
			: nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreateDepthStencilView(ID3D11Resource* pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc,
	ID3D11DepthStencilView** ppDepthStencilView)
{
	printf("CreateDepthStencilView was called!!!!!!!\n");

	::ID3D11DepthStencilView* target = nullptr;
	HRESULT hr = wrapped_interface->CreateDepthStencilView(reinterpret_cast<d3d11_resource*>(pResource)->wrapped_interface, pDesc, &target);

	if (ppDepthStencilView != nullptr)
	{
		*ppDepthStencilView = SUCCEEDED(hr) ? reinterpret_cast<ID3D11DepthStencilView*>(new depth_stencil_view(target))
			: nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreateDeferredContext(UINT ContextFlags, ID3D11DeviceContext** ppDeferredContext)
{
	::ID3D11DeviceContext* ctx{};
	HRESULT hr = wrapped_interface->CreateDeferredContext(ContextFlags, &ctx);
	if (FAILED(hr))
	{
		printf("CreateDeferredContext failed!!!!!!!\n");
	}

	if (ppDeferredContext != nullptr && SUCCEEDED(hr))
	{
		::ID3D11DeviceContext2* ctx2{};
		ctx->QueryInterface(IID_PPV_ARGS(&ctx2));

		*ppDeferredContext = reinterpret_cast<ID3D11DeviceContext*>(new device_context_x(ctx2));
	}

	return hr;
}

void wd::device_x::GetImmediateContext(ID3D11DeviceContext** ppImmediateContext)
{
	printf("GetImmediateContext was called!!!\n");
	::ID3D11DeviceContext* ctx{};
	wrapped_interface->GetImmediateContext(&ctx);

	if (!ctx) return;

	::ID3D11DeviceContext2* ctx2{};
	ctx->QueryInterface(IID_PPV_ARGS(&ctx2));

	*ppImmediateContext = reinterpret_cast<ID3D11DeviceContext*>(new device_context_x(ctx2));
}

HRESULT wd::device_x::CreateDeferredContext1(UINT ContextFlags, ID3D11DeviceContext1** ppDeferredContext)
{
	printf("WARN: CreateDeferredContext1 is not implemented\n");
	return wrapped_interface->CreateDeferredContext1(ContextFlags, ppDeferredContext);
}

HRESULT wd::device_x::CreateDeferredContext2(UINT ContextFlags, ID3D11DeviceContext2** ppDeferredContext)
{
	printf("WARN: CreateDeferredContext2 is not implemented\n");
	return wrapped_interface->CreateDeferredContext2(ContextFlags, ppDeferredContext);
}

void wd::device_x::GetImmediateContextX(wdi::ID3D11DeviceContextX** ppImmediateContext)
{
	printf("GetImmediateContextX\n");
	::ID3D11DeviceContext2* context = nullptr;
	GetImmediateContext2(&context);

	if (ppImmediateContext != nullptr)
	{
		*ppImmediateContext = reinterpret_cast<wdi::ID3D11DeviceContextX*>(new wd::device_context_x(context));
	}

}

HRESULT wd::device_x::CreateCounterSet(const wdi::D3D11X_COUNTER_SET_DESC* pCounterSetDesc,
								   wdi::ID3D11CounterSetX** ppCounterSet)
{
	printf("CreateCounterSet!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateCounterSample(wdi::ID3D11CounterSampleX** ppCounterSample)
{
	printf("CreateCounterSample!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::SetDriverHint(UINT Feature, UINT Value)
{
	printf("SetDriverHint!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateDmaEngineContext(const wdi::D3D11_DMA_ENGINE_CONTEXT_DESC* pDmaEngineContextDesc,
										 wdi::ID3D11DmaEngineContextX** ppDmaDeviceContext)
{
	*ppDmaDeviceContext = reinterpret_cast<wdi::ID3D11DmaEngineContextX*>(new D3D11DmaEngineContextX());
	return S_OK;
}

BOOL wd::device_x::IsFencePending(UINT64 Fence)
{
	printf("IsFencePending was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

BOOL wd::device_x::IsResourcePending(ID3D11Resource* pResource)
{
	printf("IsResourcePending was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreatePlacementBuffer(const D3D11_BUFFER_DESC* pDesc, void* pVirtualAddress,
										ID3D11Buffer** ppBuffer)
{
	printf("CreatePlacementBuffer was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreatePlacementTexture1D(const D3D11_TEXTURE1D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
										   void* pVirtualAddress, ID3D11Texture1D** ppTexture1D)
{
	ID3D11Texture1D* PlacementTexture1D = nullptr;
	HRESULT hr = wrapped_interface->CreateTexture1D(pDesc, 0, &PlacementTexture1D);

	printf("[CreatePlacementTexture1D] created texture at 0x%llX\n", &PlacementTexture1D);

	if (ppTexture1D != nullptr)
	{
		*ppTexture1D = SUCCEEDED(hr) ? reinterpret_cast<ID3D11Texture1D*>(new texture_1d(PlacementTexture1D)) : nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreatePlacementTexture2D(const D3D11_TEXTURE2D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
										   void* pVirtualAddress, ID3D11Texture2D** ppTexture2D)
{
	//Rodrigo Todescatto: SampleDesc.Quality is kind of obsolete nowadays.
	const_cast<D3D11_TEXTURE2D_DESC*>(pDesc)->SampleDesc.Quality = 0;

	ID3D11Texture2D* PlacementTexture2D = nullptr;
	HRESULT hr = wrapped_interface->CreateTexture2D(pDesc, 0, &PlacementTexture2D);

	printf("[CreatePlacementTexture2D] created texture at 0x%llX\n", &PlacementTexture2D);

	if (ppTexture2D != nullptr)
	{
		*ppTexture2D = SUCCEEDED(hr) ? reinterpret_cast<ID3D11Texture2D*>(new texture_2d(PlacementTexture2D)) : nullptr;
	}

	return hr;
}

HRESULT wd::device_x::CreatePlacementTexture3D(const D3D11_TEXTURE3D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
										   void* pVirtualAddress, ID3D11Texture3D** ppTexture3D)
{
	ID3D11Texture3D* PlacementTexture3D = nullptr;
	HRESULT hr = wrapped_interface->CreateTexture3D(pDesc, 0, &PlacementTexture3D);

	printf("[CreatePlacementTexture3D] created texture at 0x%llX\n", &PlacementTexture3D);

	if (ppTexture3D != nullptr)
	{
		*ppTexture3D = SUCCEEDED(hr) ? reinterpret_cast<ID3D11Texture3D*>(new texture_3d(PlacementTexture3D)) : nullptr;
	}

	return hr;
}

void wd::device_x::GetTimestamps(UINT64* pGpuTimestamp, UINT64* pCpuRdtscTimestamp)
{
	printf("GetTimestamps was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateSamplerStateX(const wdi::D3D11X_SAMPLER_DESC* pSamplerDesc,
									  ID3D11SamplerState** ppSamplerState)
{
	printf("CreateSamplerStateX was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateDeferredContextX(UINT Flags, wdi::ID3D11DeviceContextX** ppDeferredContext)
{
	printf("CreateDeferredContextX was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::GarbageCollect(UINT Flags)
{
	printf("GarbageCollect was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateDepthStencilStateX(const D3D11_DEPTH_STENCIL_DESC* pDepthStencilStateDesc,
										   ID3D11DepthStencilState** ppDepthStencilState)
{
	printf("CreateDepthStencilStateX was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreatePlacementRenderableTexture2D(const D3D11_TEXTURE2D_DESC* pDesc, UINT TileModeIndex,
													 UINT Pitch,
													 const wdi::D3D11X_RENDERABLE_TEXTURE_ADDRESSES* pAddresses,
													 ID3D11Texture2D** ppTexture2D)
{
	printf("CreatePlacementRenderableTexture2D was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::GetDriverStatistics(UINT StructSize, wdi::D3D11X_DRIVER_STATISTICS* pStatistics)
{
	printf("GetDriverStatistics was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::CreateComputeContextX(const wdi::D3D11_COMPUTE_CONTEXT_DESC* pComputeContextDesc,
										wdi::ID3D11ComputeContextX** ppComputeContext)
{
	printf("CreateComputeContextX was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeShaderResourceView(const wdi::D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
										 const wdi::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
										 wdi::D3D11X_DESCRIPTOR_SHADER_RESOURCE_VIEW* pDescriptorSrv)
{
	printf("ComposeShaderResourceView was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeUnorderedAccessView(const wdi::D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
										  const wdi::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
										  wdi::D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW* pDescriptorUav)
{
	printf("ComposeUnorderedAccessView was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeConstantBufferView(const wdi::D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
										 const wdi::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
										 wdi::D3D11X_DESCRIPTOR_CONSTANT_BUFFER_VIEW* pDescriptorCb)
{
	printf("ComposeConstantBufferView was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeVertexBufferView(const wdi::D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
									   const wdi::D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
									   wdi::D3D11X_DESCRIPTOR_VERTEX_BUFFER_VIEW* pDescriptorVb)
{
	printf("ComposeVertexBufferView was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::ComposeSamplerState(const wdi::D3D11X_SAMPLER_STATE_DESC* pSamplerDesc,
								   wdi::D3D11X_DESCRIPTOR_SAMPLER_STATE* pDescriptorSamplerState)
{
	printf("ComposeSamplerState was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::PlaceSwapChainView(ID3D11Resource* pSwapChainBuffer, ID3D11View* pView)
{
	printf("PlaceSwapChainView was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::SetDebugFlags(UINT Flags)
{
	printf("SetDebugFlags was called!!!!!!!\n");
}

UINT wd::device_x::GetDebugFlags( )
{
	printf("GetDebugFlags was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::SetHangCallbacks(wdi::D3D11XHANGBEGINCALLBACK pBeginCallback, wdi::D3D11XHANGPRINTCALLBACK pPrintCallback,
								wdi::D3D11XHANGDUMPCALLBACK pDumpCallback)
{
	printf("SetHangCallbacks was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::ReportGpuHang(UINT Flags)
{
	printf("ReportGpuHang was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::device_x::SetGpuMemoryPriority(UINT Priority)
{
	printf("SetGpuMemoryPriority was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::device_x::GetGpuHardwareConfiguration(wdi::D3D11X_GPU_HARDWARE_CONFIGURATION* pGpuHardwareConfiguration)
{
	printf("GetGpuHardwareConfiguration was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}
