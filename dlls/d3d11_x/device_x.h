#pragma once
#include "graphics_unknown.h"
#include <d3d11_1.h>
#include <d3d11_2.h>

namespace wdi
{
	struct D3D11X_COUNTER_SET_DESC;
	struct D3D11X_DESCRIPTOR_RESOURCE;
	struct D3D11_DMA_ENGINE_CONTEXT_DESC;
	struct D3D11X_SAMPLER_DESC;
	struct D3D11X_RENDERABLE_TEXTURE_ADDRESSES;
	struct D3D11X_DRIVER_STATISTICS;
	struct D3D11_COMPUTE_CONTEXT_DESC;
	struct D3D11X_RESOURCE_VIEW_DESC;
	struct D3D11X_DESCRIPTOR_SHADER_RESOURCE_VIEW;
	struct D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW;
	struct D3D11X_DESCRIPTOR_CONSTANT_BUFFER_VIEW;
	struct D3D11X_DESCRIPTOR_VERTEX_BUFFER_VIEW;
	struct D3D11X_SAMPLER_STATE_DESC;
	struct D3D11X_DESCRIPTOR_SAMPLER_STATE;
	class ID3D11CounterSetX;
	class ID3D11CounterSampleX;
	class ID3D11DmaEngineContextX;
	class ID3D11ComputeContextX;

	typedef UINT (*D3D11XHANGBEGINCALLBACK)(UINT64 Flags);
	typedef void (*D3D11XHANGPRINTCALLBACK)(const CHAR* strLine);
	typedef void (*D3D11XHANGDUMPCALLBACK)(const WCHAR* strFileName);

	typedef enum D3D11X_HARDWARE_VERSION
	{
		D3D11X_HARDWARE_VERSION_XBOX_ONE = 0,
		D3D11X_HARDWARE_VERSION_XBOX_ONE_S = 1,
		D3D11X_HARDWARE_VERSION_XBOX_ONE_X = 2,
		D3D11X_HARDWARE_VERSION_XBOX_ONE_X_DEVKIT = 3
	} D3D11X_HARDWARE_VERSION;

	struct D3D11X_GPU_HARDWARE_CONFIGURATION
	{
		UINT64 GpuFrequency;
		D3D11X_HARDWARE_VERSION HardwareVersion;
		UINT32 GpuCuCount;
	};

	D3DINTERFACE(ID3D11Device, db6f6ddb, ac77, 4e88, 82, 53, 81, 9d, f9, bb, f1, 40) : public wd::graphics_unknown
	{
	public:
		UINT m_CreationFlags;

		virtual HRESULT (CreateBuffer)(const D3D11_BUFFER_DESC* pDesc,
		                               const D3D11_SUBRESOURCE_DATA* pInitialData,
		                               ID3D11Buffer** ppBuffer);
		virtual HRESULT (CreateTexture1D)(const D3D11_TEXTURE1D_DESC* pDesc,
		                                  _In_reads_opt_(_Inexpressible_(pDesc->MipLevels* pDesc->ArraySize)) const
		                                  D3D11_SUBRESOURCE_DATA* pInitialData,
		                                  ID3D11Texture1D** ppTexture1D);
		virtual HRESULT (CreateTexture2D)(const D3D11_TEXTURE2D_DESC* pDesc,
		                                  _In_reads_opt_(_Inexpressible_(pDesc->MipLevels* pDesc->ArraySize)) const
		                                  D3D11_SUBRESOURCE_DATA* pInitialData,
		                                  ID3D11Texture2D** ppTexture2D);
		virtual HRESULT (CreateTexture3D)(const D3D11_TEXTURE3D_DESC* pDesc,
		                                  _In_reads_opt_(_Inexpressible_(pDesc->MipLevels)) const D3D11_SUBRESOURCE_DATA
		                                  * pInitialData, ID3D11Texture3D** ppTexture3D);
		virtual HRESULT (CreateShaderResourceView)(ID3D11Resource* pResource,
		                                           const D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc,
		                                           ID3D11ShaderResourceView** ppSRView);
		virtual HRESULT (CreateUnorderedAccessView)(ID3D11Resource* pResource,
		                                            const D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc,
		                                            ID3D11UnorderedAccessView** ppUAView);
		virtual HRESULT (CreateRenderTargetView)(ID3D11Resource* pResource,
		                                         const D3D11_RENDER_TARGET_VIEW_DESC* pDesc,
		                                         ID3D11RenderTargetView** ppRTView);
		virtual HRESULT (CreateDepthStencilView)(ID3D11Resource* pResource,
		                                         const D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc,
		                                         ID3D11DepthStencilView** ppDepthStencilView);
		virtual HRESULT (CreateInputLayout)(_In_reads_(NumElements) const D3D11_INPUT_ELEMENT_DESC* pInputElementDescs,
		                                    _In_range_(0, D3D11_IA_VERTEX_INPUT_STRUCTURE_ELEMENT_COUNT) UINT
		                                    NumElements,
		                                    _In_reads_(BytecodeLength) const void* pShaderBytecodeWithInputSignature,
		                                    SIZE_T BytecodeLength, ID3D11InputLayout** ppInputLayout);
		virtual HRESULT (CreateVertexShader)(_In_reads_(BytecodeLength) const void* pShaderBytecode,
		                                     SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage,
		                                     ID3D11VertexShader** ppVertexShader);
		virtual HRESULT (CreateGeometryShader)(
			_In_reads_(BytecodeLength) const void* pShaderBytecode, SIZE_T BytecodeLength,
			ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader);
		virtual HRESULT (CreateGeometryShaderWithStreamOutput)(
			_In_reads_(BytecodeLength) const void* pShaderBytecode, SIZE_T BytecodeLength,
			_In_reads_opt_(NumEntries) const D3D11_SO_DECLARATION_ENTRY* pSODeclaration,
			_In_range_(0, D3D11_SO_STREAM_COUNT* D3D11_SO_OUTPUT_COMPONENT_COUNT) UINT NumEntries,
			_In_reads_opt_(NumStrides) const UINT* pBufferStrides,
			_In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT) UINT NumStrides, UINT RasterizedStream,
			ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader);
		virtual HRESULT (CreatePixelShader)(_In_reads_(BytecodeLength) const void* pShaderBytecode,
		                                    SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage,
		                                    ID3D11PixelShader** ppPixelShader);
		virtual HRESULT (CreateHullShader)(_In_reads_(BytecodeLength) const void* pShaderBytecode,
		                                   SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage,
		                                   ID3D11HullShader** ppHullShader);
		virtual HRESULT (CreateDomainShader)(_In_reads_(BytecodeLength) const void* pShaderBytecode,
		                                     SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage,
		                                     ID3D11DomainShader** ppDomainShader);
		virtual HRESULT (CreateComputeShader)(
			_In_reads_(BytecodeLength) const void* pShaderBytecode, SIZE_T BytecodeLength,
			ID3D11ClassLinkage* pClassLinkage, ID3D11ComputeShader** ppComputeShader);
		virtual HRESULT (CreateClassLinkage)(ID3D11ClassLinkage** ppLinkage);
		virtual HRESULT (CreateBlendState)(const D3D11_BLEND_DESC* pBlendStateDesc,
		                                   ID3D11BlendState** ppBlendState);
		virtual HRESULT (CreateDepthStencilState)(const D3D11_DEPTH_STENCIL_DESC* pDepthStencilDesc,
		                                          ID3D11DepthStencilState** ppDepthStencilState);
		virtual HRESULT (CreateRasterizerState)(const D3D11_RASTERIZER_DESC* pRasterizerDesc,
		                                        ID3D11RasterizerState** ppRasterizerState);
		virtual HRESULT (CreateSamplerState)(const D3D11_SAMPLER_DESC* pSamplerDesc,
		                                     ID3D11SamplerState** ppSamplerState);
		virtual HRESULT (CreateQuery)(const D3D11_QUERY_DESC* pQueryDesc, ID3D11Query** ppQuery);
		virtual HRESULT (CreatePredicate)(const D3D11_QUERY_DESC* pPredicateDesc,
		                                  ID3D11Predicate** ppPredicate);
		virtual HRESULT (CreateCounter)(const D3D11_COUNTER_DESC* pCounterDesc,
		                                ID3D11Counter** ppCounter);
		virtual HRESULT (CreateDeferredContext)(UINT ContextFlags, ID3D11DeviceContext** ppDeferredContext);
		virtual HRESULT (OpenSharedResource)(HANDLE hResource, REFIID ReturnedInterface,
		                                     void** ppResource);
		virtual HRESULT (CheckFormatSupport)(DXGI_FORMAT Format, UINT* pFormatSupport);
		virtual HRESULT (CheckMultisampleQualityLevels)(DXGI_FORMAT Format, UINT SampleCount,
		                                                UINT* pNumQualityLevels);
		virtual void (CheckCounterInfo)(D3D11_COUNTER_INFO* pCounterInfo);
		virtual HRESULT (CheckCounter)(const D3D11_COUNTER_DESC* pDesc, D3D11_COUNTER_TYPE* pType,
		                               UINT* pActiveCounters, _Out_writes_opt_(*pNameLength) LPSTR szName,
		                               _Inout_opt_ UINT* pNameLength, _Out_writes_opt_(*pUnitsLength) LPSTR szUnits,
		                               _Inout_opt_ UINT* pUnitsLength,
		                               _Out_writes_opt_(*pDescriptionLength) LPSTR szDescription,
		                               _Inout_opt_ UINT* pDescriptionLength);
		virtual HRESULT (CheckFeatureSupport)(D3D11_FEATURE Feature,
		                                      _Out_writes_bytes_(FeatureSupportDataSize) void* pFeatureSupportData,
		                                      UINT FeatureSupportDataSize);
		virtual HRESULT (GetPrivateData)(REFGUID guid, UINT* pDataSize,
		                                 _Out_writes_bytes_opt_(*pDataSize) void* pData);
		virtual HRESULT (SetPrivateData)(REFGUID guid, UINT DataSize,
		                                 _In_reads_bytes_opt_(DataSize) const void* pData);
		virtual HRESULT (SetPrivateDataInterface)(REFGUID guid, const IUnknown* pData);
		virtual HRESULT (SetPrivateDataInterfaceGraphics)(REFGUID guid, const IGraphicsUnknown* pData);
		virtual D3D_FEATURE_LEVEL (GetFeatureLevel)();
		virtual UINT (GetCreationFlags)();
		virtual HRESULT (GetDeviceRemovedReason)();
		virtual void (GetImmediateContext)(ID3D11DeviceContext** ppImmediateContext);
		virtual HRESULT (SetExceptionMode)(UINT RaiseFlags);
		virtual UINT (GetExceptionMode)();
	};

	D3DINTERFACE(ID3D11Device1, a04bfb29, 08ef, 43d6, a4, 9c, a9, bd, bd, cb, e6, 86) : public ID3D11Device
	{
	public:
		virtual void (GetImmediateContext1)(ID3D11DeviceContext1** ppImmediateContext);
		virtual HRESULT (CreateDeferredContext1)(UINT ContextFlags, ID3D11DeviceContext1** ppDeferredContext);
		virtual HRESULT (CreateBlendState1)(const D3D11_BLEND_DESC1* pBlendStateDesc,
		                                    ID3D11BlendState1** ppBlendState);
		virtual HRESULT (CreateRasterizerState1)(const D3D11_RASTERIZER_DESC1* pRasterizerDesc,
		                                         ID3D11RasterizerState1** ppRasterizerState);
		virtual HRESULT (CreateDeviceContextState)(
			UINT Flags,_In_reads_(FeatureLevels) const D3D_FEATURE_LEVEL* pFeatureLevels, UINT FeatureLevels,
			UINT SDKVersion,REFIID EmulatedInterface, D3D_FEATURE_LEVEL* pChosenFeatureLevel,
			ID3DDeviceContextState** ppContextState);
		virtual HRESULT (OpenSharedResource1)(HANDLE hResource,REFIID ReturnedInterface,
		                                      void** ppResource);
		virtual HRESULT (OpenSharedResourceByName)(LPCWSTR lpName, DWORD dwDesiredAccess,
		                                           REFIID ReturnedInterface, void** ppResource);
	};

	D3DINTERFACE(ID3D11Device2, 9d06dffa, d1e5, 4d07, 83, a8, 1b, b1, 23, f2, f8, 41) : public ID3D11Device1
	{
	public:
		virtual void (GetImmediateContext2)(ID3D11DeviceContext2** ppImmediateContext);
		virtual HRESULT (CreateDeferredContext2)(UINT ContextFlags, ID3D11DeviceContext2** ppDeferredContext);
		virtual void (GetResourceTiling)(ID3D11Resource* pTiledResource, UINT* pNumTilesForEntireResource,
		                                 D3D11_PACKED_MIP_DESC* pPackedMipDesc,
		                                 D3D11_TILE_SHAPE* pStandardTileShapeForNonPackedMips,
		                                 _Inout_opt_ UINT* pNumSubresourceTilings, UINT FirstSubresourceTilingToGet,
		                                 _Out_writes_(*pNumSubresourceTilings) D3D11_SUBRESOURCE_TILING*
		                                 pSubresourceTilingsForNonPackedMips);
		virtual HRESULT (CheckMultisampleQualityLevels1)(DXGI_FORMAT Format, UINT SampleCount, UINT Flags,
		                                                 UINT* pNumQualityLevels);
	};

	D3DINTERFACE(ID3D11DeviceX, 177700f9, 876a, 4436, b3, 68, 36, a6, 04, f8, 2c, ef) : public ID3D11Device2
	{
	public:
		virtual void (GetImmediateContextX)(ID3D11DeviceContextX** ppImmediateContextX);
		virtual HRESULT (CreateCounterSet)(const D3D11X_COUNTER_SET_DESC* pCounterSetDesc,
		                                   ID3D11CounterSetX** ppCounterSet);
		virtual HRESULT (CreateCounterSample)(ID3D11CounterSampleX** ppCounterSample);
		virtual HRESULT (SetDriverHint)(UINT Feature, UINT Value);
		virtual HRESULT (CreateDmaEngineContext)(const D3D11_DMA_ENGINE_CONTEXT_DESC* pDmaEngineContextDesc,
		                                         ID3D11DmaEngineContextX** ppDmaDeviceContext);
		virtual BOOL (IsFencePending)(UINT64 Fence);
		virtual BOOL (IsResourcePending)(ID3D11Resource* pResource);
		virtual HRESULT (CreatePlacementBuffer)(const D3D11_BUFFER_DESC* pDesc, void* pVirtualAddress,
		                                        ID3D11Buffer** ppBuffer);
		virtual HRESULT (CreatePlacementTexture1D)(const D3D11_TEXTURE1D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
		                                           void* pVirtualAddress, ID3D11Texture1D** ppTexture1D);
		virtual HRESULT (CreatePlacementTexture2D)(const D3D11_TEXTURE2D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
		                                           void* pVirtualAddress, ID3D11Texture2D** ppTexture2D);
		virtual HRESULT (CreatePlacementTexture3D)(const D3D11_TEXTURE3D_DESC* pDesc, UINT TileModeIndex, UINT Pitch,
		                                           void* pVirtualAddress, ID3D11Texture3D** ppTexture3D);
		virtual void (GetTimestamps)(UINT64* pGpuTimestamp, UINT64* pCpuRdtscTimestamp);
		virtual HRESULT (CreateSamplerStateX)(const D3D11X_SAMPLER_DESC* pSamplerDesc,
		                                      ID3D11SamplerState** ppSamplerState);
		virtual HRESULT (CreateDeferredContextX)(UINT Flags, ID3D11DeviceContextX** ppDeferredContext);
		virtual void (GarbageCollect)(UINT Flags);
		virtual HRESULT (CreateDepthStencilStateX)(const D3D11_DEPTH_STENCIL_DESC* pDepthStencilStateDesc,
		                                           ID3D11DepthStencilState** ppDepthStencilState);
		virtual HRESULT (CreatePlacementRenderableTexture2D)(const D3D11_TEXTURE2D_DESC* pDesc, UINT TileModeIndex,
		                                                     UINT Pitch,
		                                                     const D3D11X_RENDERABLE_TEXTURE_ADDRESSES* pAddresses,
		                                                     ID3D11Texture2D** ppTexture2D);
		virtual void (GetDriverStatistics)(UINT StructSize, D3D11X_DRIVER_STATISTICS* pStatistics);
		virtual HRESULT (CreateComputeContextX)(const D3D11_COMPUTE_CONTEXT_DESC* pComputeContextDesc,
		                                        ID3D11ComputeContextX** ppComputeContext);
		virtual void (ComposeShaderResourceView)(const D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
		                                         const D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
		                                         D3D11X_DESCRIPTOR_SHADER_RESOURCE_VIEW* pDescriptorSrv);
		virtual void (ComposeUnorderedAccessView)(const D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
		                                          const D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
		                                          D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW* pDescriptorUav);
		virtual void (ComposeConstantBufferView)(const D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
		                                         const D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
		                                         D3D11X_DESCRIPTOR_CONSTANT_BUFFER_VIEW* pDescriptorCb);
		virtual void (ComposeVertexBufferView)(const D3D11X_DESCRIPTOR_RESOURCE* pDescriptorResource,
		                                       const D3D11X_RESOURCE_VIEW_DESC* pViewDesc,
		                                       D3D11X_DESCRIPTOR_VERTEX_BUFFER_VIEW* pDescriptorVb);
		virtual void (ComposeSamplerState)(const D3D11X_SAMPLER_STATE_DESC* pSamplerDesc,
		                                   D3D11X_DESCRIPTOR_SAMPLER_STATE* pDescriptorSamplerState);
		virtual void (PlaceSwapChainView)(ID3D11Resource* pSwapChainBuffer, ID3D11View* pView);
		virtual void (SetDebugFlags)(UINT Flags);
		virtual UINT (GetDebugFlags)();
		virtual void (SetHangCallbacks)(D3D11XHANGBEGINCALLBACK pBeginCallback, D3D11XHANGPRINTCALLBACK pPrintCallback,
		                                D3D11XHANGDUMPCALLBACK pDumpCallback);
		virtual void (ReportGpuHang)(UINT Flags);
		virtual HRESULT (SetGpuMemoryPriority)(UINT Priority);
		virtual void (GetGpuHardwareConfiguration)(D3D11X_GPU_HARDWARE_CONFIGURATION* pGpuHardwareConfiguration);
	};
}

namespace wd
{
	class device_x : wdi::ID3D11DeviceX
	{
	public:
		device_x(ID3D11Device2* device) : wrapped_interface(device) { wrapped_interface->AddRef(); }

		virtual HRESULT CreateBuffer(const D3D11_BUFFER_DESC* pDesc, const D3D11_SUBRESOURCE_DATA* pInitialData, ID3D11Buffer** ppBuffer) override
		{
			return wrapped_interface->CreateBuffer(pDesc, pInitialData, ppBuffer);
		}

		virtual HRESULT CreateTexture1D(const D3D11_TEXTURE1D_DESC* pDesc, const D3D11_SUBRESOURCE_DATA* pInitialData, ID3D11Texture1D** ppTexture1D) override
		{
			return wrapped_interface->CreateTexture1D(pDesc, pInitialData, ppTexture1D);
		}

		virtual HRESULT CreateTexture2D(const D3D11_TEXTURE2D_DESC* pDesc, const D3D11_SUBRESOURCE_DATA* pInitialData, ID3D11Texture2D** ppTexture2D) override
		{
			return wrapped_interface->CreateTexture2D(pDesc, pInitialData, ppTexture2D);
		}

		virtual HRESULT CreateTexture3D(const D3D11_TEXTURE3D_DESC* pDesc, const D3D11_SUBRESOURCE_DATA* pInitialData, ID3D11Texture3D** ppTexture3D) override
		{
			return wrapped_interface->CreateTexture3D(pDesc, pInitialData, ppTexture3D);
		}

		virtual HRESULT CreateShaderResourceView(ID3D11Resource* pResource, const D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc, ID3D11ShaderResourceView** ppSRView) override
		{
			return wrapped_interface->CreateShaderResourceView(pResource, pDesc, ppSRView);
		}

		virtual HRESULT CreateUnorderedAccessView(ID3D11Resource* pResource, const D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc, ID3D11UnorderedAccessView** ppUAView) override
		{
			return wrapped_interface->CreateUnorderedAccessView(pResource, pDesc, ppUAView);
		}

		virtual HRESULT CreateRenderTargetView(ID3D11Resource* pResource, const D3D11_RENDER_TARGET_VIEW_DESC* pDesc, ID3D11RenderTargetView** ppRTView) override
		{
			return wrapped_interface->CreateRenderTargetView(pResource, pDesc, ppRTView);
		}

		virtual HRESULT CreateDepthStencilView(ID3D11Resource* pResource, const D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc, ID3D11DepthStencilView** ppDepthStencilView) override
		{
			return wrapped_interface->CreateDepthStencilView(pResource, pDesc, ppDepthStencilView);
		}

		virtual HRESULT CreateInputLayout(const D3D11_INPUT_ELEMENT_DESC* pInputElementDescs, UINT NumElements, const void* pShaderBytecodeWithInputSignature, SIZE_T BytecodeLength, ID3D11InputLayout** ppInputLayout) override
		{
			return wrapped_interface->CreateInputLayout(pInputElementDescs, NumElements, pShaderBytecodeWithInputSignature, BytecodeLength, ppInputLayout);
		}

		virtual HRESULT CreateVertexShader(const void* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11VertexShader** ppVertexShader) override
		{
			return wrapped_interface->CreateVertexShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppVertexShader);
		}

		virtual HRESULT CreateGeometryShader(const void* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader) override
		{
			return wrapped_interface->CreateGeometryShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppGeometryShader);
		}

		virtual HRESULT CreateGeometryShaderWithStreamOutput(const void* pShaderBytecode, SIZE_T BytecodeLength, const D3D11_SO_DECLARATION_ENTRY* pSODeclaration, UINT NumEntries, const UINT* pBufferStrides, UINT NumStrides, UINT RasterizedStream, ID3D11ClassLinkage* pClassLinkage, ID3D11GeometryShader** ppGeometryShader) override
		{
			return wrapped_interface->CreateGeometryShaderWithStreamOutput(pShaderBytecode, BytecodeLength, pSODeclaration, NumEntries, pBufferStrides, NumStrides, RasterizedStream, pClassLinkage, ppGeometryShader);
		}

		virtual HRESULT CreatePixelShader(const void* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11PixelShader** ppPixelShader) override
		{
			return wrapped_interface->CreatePixelShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppPixelShader);
		}

		virtual HRESULT CreateHullShader(const void* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11HullShader** ppHullShader) override
		{
			return wrapped_interface->CreateHullShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppHullShader);
		}

		virtual HRESULT CreateDomainShader(const void* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11DomainShader** ppDomainShader) override
		{
			return wrapped_interface->CreateDomainShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppDomainShader);
		}

		virtual HRESULT CreateComputeShader(const void* pShaderBytecode, SIZE_T BytecodeLength, ID3D11ClassLinkage* pClassLinkage, ID3D11ComputeShader** ppComputeShader) override
		{
			return wrapped_interface->CreateComputeShader(pShaderBytecode, BytecodeLength, pClassLinkage, ppComputeShader);
		}

		virtual HRESULT CreateClassLinkage(ID3D11ClassLinkage** ppLinkage) override
		{
			return wrapped_interface->CreateClassLinkage(ppLinkage);
		}

		virtual HRESULT CreateBlendState(const D3D11_BLEND_DESC* pBlendStateDesc, ID3D11BlendState** ppBlendState) override
		{
			return wrapped_interface->CreateBlendState(pBlendStateDesc, ppBlendState);
		}

		virtual HRESULT CreateDepthStencilState(const D3D11_DEPTH_STENCIL_DESC* pDepthStencilDesc, ID3D11DepthStencilState** ppDepthStencilState) override
		{
			return wrapped_interface->CreateDepthStencilState(pDepthStencilDesc, ppDepthStencilState);
		}

		virtual HRESULT CreateRasterizerState(const D3D11_RASTERIZER_DESC* pRasterizerDesc, ID3D11RasterizerState** ppRasterizerState) override
		{
			return wrapped_interface->CreateRasterizerState(pRasterizerDesc, ppRasterizerState);
		}

		virtual HRESULT CreateSamplerState(const D3D11_SAMPLER_DESC* pSamplerDesc, ID3D11SamplerState** ppSamplerState) override
		{
			return wrapped_interface->CreateSamplerState(pSamplerDesc, ppSamplerState);
		}

		virtual HRESULT CreateQuery(const D3D11_QUERY_DESC* pQueryDesc, ID3D11Query** ppQuery) override
		{
			return wrapped_interface->CreateQuery(pQueryDesc, ppQuery);
		}

		virtual HRESULT CreatePredicate(const D3D11_QUERY_DESC* pPredicateDesc, ID3D11Predicate** ppPredicate) override
		{
			return wrapped_interface->CreatePredicate(pPredicateDesc, ppPredicate);
		}

		virtual HRESULT CreateCounter(const D3D11_COUNTER_DESC* pCounterDesc, ID3D11Counter** ppCounter) override
		{
			return wrapped_interface->CreateCounter(pCounterDesc, ppCounter);
		}

		virtual HRESULT CreateDeferredContext(UINT ContextFlags, ID3D11DeviceContext** ppDeferredContext) override
		{
			return wrapped_interface->CreateDeferredContext(ContextFlags, ppDeferredContext);
		}

		virtual HRESULT OpenSharedResource(HANDLE hResource, REFIID ReturnedInterface, void** ppResource) override
		{
			return wrapped_interface->OpenSharedResource(hResource, ReturnedInterface, ppResource);
		}

		virtual HRESULT CheckFormatSupport(DXGI_FORMAT Format, UINT* pFormatSupport) override
		{
			return wrapped_interface->CheckFormatSupport(Format, pFormatSupport);
		}

		virtual HRESULT CheckMultisampleQualityLevels(DXGI_FORMAT Format, UINT SampleCount, UINT* pNumQualityLevels) override
		{
			return wrapped_interface->CheckMultisampleQualityLevels(Format, SampleCount, pNumQualityLevels);
		}

		virtual void CheckCounterInfo(D3D11_COUNTER_INFO* pCounterInfo) override
		{
			wrapped_interface->CheckCounterInfo(pCounterInfo);
		}

		virtual HRESULT CheckCounter(const D3D11_COUNTER_DESC* pDesc, D3D11_COUNTER_TYPE* pType, UINT* pActiveCounters, LPSTR szName, UINT* pNameLength, LPSTR szUnits, UINT* pUnitsLength, LPSTR szDescription, UINT* pDescriptionLength) override
		{
			return wrapped_interface->CheckCounter(pDesc, pType, pActiveCounters, szName, pNameLength, szUnits, pUnitsLength, szDescription, pDescriptionLength);
		}

		virtual HRESULT CheckFeatureSupport(D3D11_FEATURE Feature, void* pFeatureSupportData, UINT FeatureSupportDataSize) override
		{
			return wrapped_interface->CheckFeatureSupport(Feature, pFeatureSupportData, FeatureSupportDataSize);
		}

		virtual HRESULT GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override
		{
			return wrapped_interface->GetPrivateData(guid, pDataSize, pData);
		}

		virtual HRESULT SetPrivateData(REFGUID guid, UINT DataSize, const void* pData) override
		{
			return wrapped_interface->SetPrivateData(guid, DataSize, pData);
		}

		virtual HRESULT SetPrivateDataInterface(REFGUID guid, const IUnknown* pData) override
		{
			return wrapped_interface->SetPrivateDataInterface(guid, pData);
		}

		virtual HRESULT SetPrivateDataInterfaceGraphics(REFGUID guid, const IGraphicsUnknown* pData) override
		{
			return wrapped_interface->SetPrivateDataInterfaceGraphics(guid, pData);
		}

		virtual D3D_FEATURE_LEVEL GetFeatureLevel( ) override
		{
			return wrapped_interface->GetFeatureLevel( );
		}

		virtual UINT GetCreationFlags( ) override
		{
			return wrapped_interface->GetCreationFlags( );
		}

		virtual HRESULT GetDeviceRemovedReason( ) override
		{
			return wrapped_interface->GetDeviceRemovedReason( );
		}

		virtual void GetImmediateContext(ID3D11DeviceContext** ppImmediateContext) override
		{
			wrapped_interface->GetImmediateContext(ppImmediateContext);
		}

		virtual HRESULT SetExceptionMode(UINT RaiseFlags) override
		{
			return wrapped_interface->SetExceptionMode(RaiseFlags);
		}

		virtual UINT GetExceptionMode( ) override
		{
			return wrapped_interface->GetExceptionMode( );
		}

		// ID3D11Device1 methods
		virtual void GetImmediateContext1(ID3D11DeviceContext1** ppImmediateContext) override
		{
			wrapped_interface->GetImmediateContext1(ppImmediateContext);
		}

		virtual HRESULT CreateDeferredContext1(UINT ContextFlags, ID3D11DeviceContext1** ppDeferredContext) override
		{
			return wrapped_interface->CreateDeferredContext1(ContextFlags, ppDeferredContext);
		}

		virtual HRESULT CreateBlendState1(const D3D11_BLEND_DESC1* pBlendStateDesc, ID3D11BlendState1** ppBlendState) override
		{
			return wrapped_interface->CreateBlendState1(pBlendStateDesc, ppBlendState);
		}

		virtual HRESULT CreateRasterizerState1(const D3D11_RASTERIZER_DESC1* pRasterizerDesc, ID3D11RasterizerState1** ppRasterizerState) override
		{
			return wrapped_interface->CreateRasterizerState1(pRasterizerDesc, ppRasterizerState);
		}

		virtual HRESULT CreateDeviceContextState(UINT Flags, const D3D_FEATURE_LEVEL* pFeatureLevels, UINT FeatureLevels, UINT SDKVersion, REFIID EmulatedInterface, D3D_FEATURE_LEVEL* pChosenFeatureLevel, ID3DDeviceContextState** ppContextState) override
		{
			return wrapped_interface->CreateDeviceContextState(Flags, pFeatureLevels, FeatureLevels, SDKVersion, EmulatedInterface, pChosenFeatureLevel, ppContextState);
		}

		virtual HRESULT OpenSharedResource1(HANDLE hResource, REFIID ReturnedInterface, void** ppResource) override
		{
			return wrapped_interface->OpenSharedResource1(hResource, ReturnedInterface, ppResource);
		}

		virtual HRESULT OpenSharedResourceByName(LPCWSTR lpName, DWORD dwDesiredAccess, REFIID ReturnedInterface, void** ppResource) override
		{
			return wrapped_interface->OpenSharedResourceByName(lpName, dwDesiredAccess, ReturnedInterface, ppResource);
		}

		// ID3D11Device2 methods
		virtual void GetImmediateContext2(ID3D11DeviceContext2** ppImmediateContext) override
		{
			wrapped_interface->GetImmediateContext2(ppImmediateContext);
		}

		virtual HRESULT CreateDeferredContext2(UINT ContextFlags, ID3D11DeviceContext2** ppDeferredContext) override
		{
			return wrapped_interface->CreateDeferredContext2(ContextFlags, ppDeferredContext);
		}

		virtual void GetResourceTiling(ID3D11Resource* pTiledResource, UINT* pNumTilesForEntireResource, D3D11_PACKED_MIP_DESC* pPackedMipDesc, D3D11_TILE_SHAPE* pStandardTileShapeForNonPackedMips, UINT* pNumSubresourceTilings, UINT FirstSubresourceTilingToGet, D3D11_SUBRESOURCE_TILING* pSubresourceTilingsForNonPackedMips) override
		{
			wrapped_interface->GetResourceTiling(pTiledResource, pNumTilesForEntireResource, pPackedMipDesc, pStandardTileShapeForNonPackedMips, pNumSubresourceTilings, FirstSubresourceTilingToGet, pSubresourceTilingsForNonPackedMips);
		}

		virtual HRESULT CheckMultisampleQualityLevels1(DXGI_FORMAT Format, UINT SampleCount, UINT Flags, UINT* pNumQualityLevels) override
		{
			return wrapped_interface->CheckMultisampleQualityLevels1(Format, SampleCount, Flags, pNumQualityLevels);
		}
	private:
		ID3D11Device2* wrapped_interface;
	};
}
