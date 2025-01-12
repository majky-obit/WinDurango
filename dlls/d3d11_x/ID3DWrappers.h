#pragma once
#include "ID3DX.h"
#include "ID3DDeviceContext.h"
#include <array>
#include <assert.h>
#include <vcruntime_typeinfo.h>
#include <map>

static std::map<UINT64, int> D3D11X_HARDWARE_TO_TOPOLOGY_MAP = {
	{0x000001ffc0009e00, 0}, {0x000003ffc0009e00, 1}, {0x000005ffc0009e00, 2}, {0x000007ffc0009e00, 3},
	{0x000009ffc0009e00, 4}, {0x00000dffc0009e00, 5}, {0x00000bffc0009e00, 6}, {0x000001ffc0009e00, 7},
	{0x000001ffc0009e00, 8}, {0x000001ffc0009e00, 9}, {0x0000157fc0009e00, 10}, {0x0000177fc0009e00, 11},
	{0x0000197fc0009e00, 12}, {0x00001b7fc0009e00, 13}, {0x00001dffc0009e00, 14}, {0x00001fffc0009e00, 15},
	{0x000021ffc0009e00, 16}, {0x000023ffc0009e00, 17}, {0x000025ffc0009e00, 18}, {0x000027ffc0009e00, 19},
	{0x000029ffc0009e00, 20}, {0x00002bffc0009e00, 21}, {0x00002dffc0009e00, 22}, {0x00002fffc0009e00, 23},
	{0x000031ffc0009e00, 24}, {0x000033ffc0009e00, 25}, {0x000035ffc0009e00, 26}, {0x000037ffc0009e00, 27},
	{0x000039ffc0009e00, 28}, {0x000001ffc0009e00, 29}, {0x000001ffc0009e00, 30}, {0x000001ffc0009e00, 31},
	{0x000001ffc0009e00, 32}, {0x001013ffc0009e00, 33}, {0x0020137fc0009e00, 34}, {0x00301354c0009e00, 35},
	{0x0040133fc0009e00, 36}, {0x00501332c0009e00, 37}, {0x00601329c0009e00, 38}, {0x00701323c0009e00, 39},
	{0x0080131fc0009e00, 40}, {0x0090131bc0009e00, 41}, {0x00a01318c0009e00, 42}, {0x00b01316c0009e00, 43},
	{0x00c01314c0009e00, 44}, {0x00d01312c0009e00, 45}, {0x00e01311c0009e00, 46}, {0x00f01310c0009e00, 47},
	{0x0100130fc0009e00, 48}, {0x0110130ec0009e00, 49}, {0x0120130dc0009e00, 50}, {0x0130130cc0009e00, 51},
	{0x0140130bc0009e00, 52}, {0x0150130bc0009e00, 53}, {0x0160130ac0009e00, 54}, {0x0170130ac0009e00, 55},
	{0x01801309c0009e00, 56}, {0x01901309c0009e00, 57}, {0x01a01308c0009e00, 58}, {0x01b01308c0009e00, 59},
	{0x01c01308c0009e00, 60}, {0x01d01307c0009e00, 61}, {0x01e01307c0009e00, 62}, {0x01f01307c0009e00, 63},
	{0x02001307c0009e00, 64}
};

namespace d3d11x
{
	struct D3D11X_TESSELLATION_PARAMETERS;
	struct D3D11X_THREAD_TRACE_DESC;
	struct D3D11X_GRAPHICS_SHADER_LIMITS;
	struct D3D11X_COMPUTE_SHADER_LIMITS;
	struct D3D11X_GS_PARAMETERS;
	struct _D3D11X_MSAA_SCAN_CONVERTER_SETTINGS;
	struct _D3D11X_MSAA_EQAA_SETTINGS;
	struct _D3D11X_MSAA_SAMPLE_PRIORITIES;
	struct _D3D11X_MSAA_SAMPLE_POSITIONS;

	typedef POINT D3D11X_POINT;
	typedef D3D11_RECT D3D11X_RECT;

	typedef struct _D3D11X_MSAA_SCAN_CONVERTER_SETTINGS
	{
		UINT        NumSamplesMsaaLog2 : 3;
		UINT        MaxSampleDistanceInSubpixels : 4;
		UINT        NumSamplesMsaaExposedToPSLog2 : 3;
		UINT        DetailToExposedMode : 2;
		UINT        ApplyMaskAfterCentroid : 1;
	} D3D11X_MSAA_SCAN_CONVERTER_SETTINGS;

	typedef struct  _D3D11X_MSAA_EQAA_SETTINGS
	{
		UINT        MaxAnchorSamplesLog2 : 3;
		UINT        NumSamplesForPSIterationLog2 : 3;
		UINT        NumSamplesForMaskExportLog2 : 3;
		UINT        NumSamplesForAlphaToMaskLog2 : 3;
		UINT        HightQualityIntersections : 1;
		UINT        InterpolateCompZ : 1;
		UINT        InterpolateSrcZ : 1;
		UINT        StaticAnchorAssociations : 1;
		UINT        OverrasterizationAmount : 3;
		UINT        EnablePostZOverrasterization : 1;
	} D3D11X_MSAA_EQAA_SETTINGS;

	typedef struct _D3D11X_MSAA_SAMPLE_PRIORITIES
	{
		BYTE        CentroidPriorities[ 16 ];
	} D3D11X_MSAA_SAMPLE_PRIORITIES;

	typedef struct _D3D11X_MSAA_SAMPLE_POSITIONS
	{
		INT8  SampleLocs00[ 16 ][ 2 ];  // Sample positions stored as one byte per component, X then Y
		INT8  SampleLocs10[ 16 ][ 2 ];  // There are up to 16 possible sample positions per pixel
		INT8  SampleLocs01[ 16 ][ 2 ];  // They can be set differently for each pixel in a 2x2 quad
		INT8  SampleLocs11[ 16 ][ 2 ];
	} D3D11X_MSAA_SAMPLE_POSITIONS;

	class ID3D11BufferWrapper : public ID3D11Buffer_X
	{
	public:
		ID3D11Buffer* m_realBuffer;

		ID3D11BufferWrapper(::ID3D11Buffer* buf) : m_realBuffer(buf)
		{
			m_RefCount = 1;
		}


		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid, _In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid, _In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		// ID3D11Resource
		void STDMETHODCALLTYPE GetType(_Out_ D3D11_RESOURCE_DIMENSION* pResourceDimension) override;
		void STDMETHODCALLTYPE SetEvictionPriority(_In_ UINT EvictionPriority) override;
		UINT STDMETHODCALLTYPE GetEvictionPriority(void) override;
		void STDMETHODCALLTYPE GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor) override;

		// ID3D11Buffer
		void STDMETHODCALLTYPE GetDesc(_Out_ D3D11_BUFFER_DESC* pDesc) override;
	};

	class ID3D11ResourceWrapperX : public ID3D11DeviceChild_X
	{
	public:
		ID3D11Resource* m_realResource;

		ID3D11ResourceWrapperX(::ID3D11Resource* resource) : m_realResource(resource)
		{
			m_RefCount = 1;
		}

		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid, _In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid, _In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		virtual void STDMETHODCALLTYPE GetType(
			/* [annotation] */
			_Out_ D3D11_RESOURCE_DIMENSION* pResourceDimension);

		virtual void STDMETHODCALLTYPE SetEvictionPriority(
			/* [annotation] */
			_In_ UINT EvictionPriority);

		virtual UINT STDMETHODCALLTYPE GetEvictionPriority(void);

		// xbox extra function
		virtual void STDMETHODCALLTYPE GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor);
	};

	class ID3D11Texture1DWrapper : public ID3D11Texture1D_X
	{
	public:
		ID3D11Texture1D* m_realTexture;

		ID3D11Texture1DWrapper(::ID3D11Texture1D* tex) : m_realTexture(tex)
		{
			m_RefCount = 1;
		}


		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid, _In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid, _In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		// ID3D11Resource
		void STDMETHODCALLTYPE GetType(_Out_ D3D11_RESOURCE_DIMENSION* pResourceDimension) override;
		void STDMETHODCALLTYPE SetEvictionPriority(_In_ UINT EvictionPriority) override;
		UINT STDMETHODCALLTYPE GetEvictionPriority(void) override;
		void STDMETHODCALLTYPE GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor) override;

		// ID3D11Texture1D
		void STDMETHODCALLTYPE GetDesc(_Out_ D3D11_TEXTURE1D_DESC* pDesc) override;
	};

	class ID3D11Texture2DWrapper : public ID3D11Texture2D_X
	{
	public:
		ID3D11Texture2D* m_realTexture;

		ID3D11Texture2DWrapper(::ID3D11Texture2D* tex) : m_realTexture(tex)
		{
			m_RefCount = 1;
		}


		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid,_In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid,_In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		// ID3D11Resource
		void STDMETHODCALLTYPE GetType(_Out_ D3D11_RESOURCE_DIMENSION* pResourceDimension) override;
		void STDMETHODCALLTYPE SetEvictionPriority(_In_ UINT EvictionPriority) override;
		UINT STDMETHODCALLTYPE GetEvictionPriority(void) override;
		void STDMETHODCALLTYPE GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor) override;

		// ID3D11Texture2D
		void STDMETHODCALLTYPE GetDesc(_Out_ D3D11_TEXTURE2D_DESC* pDesc) override;
	};

	class ID3D11Texture3DWrapper : public ID3D11Texture3D_X
	{
	public:
		ID3D11Texture3D* m_realTexture;

		ID3D11Texture3DWrapper(::ID3D11Texture3D* tex) : m_realTexture(tex)
		{
			m_RefCount = 1;
		}


		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid, _In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid, _In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		// ID3D11Resource
		void STDMETHODCALLTYPE GetType(_Out_ D3D11_RESOURCE_DIMENSION* pResourceDimension) override;
		void STDMETHODCALLTYPE SetEvictionPriority(_In_ UINT EvictionPriority) override;
		UINT STDMETHODCALLTYPE GetEvictionPriority(void) override;
		void STDMETHODCALLTYPE GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor) override;

		// ID3D11Texture3D
		void STDMETHODCALLTYPE GetDesc(_Out_ D3D11_TEXTURE3D_DESC* pDesc) override;
	};

	class ID3D11RenderTargetViewWrapper : ID3D11RenderTargetView_X
	{
	public:
		ID3D11RenderTargetView* m_realTarget;

		ID3D11RenderTargetViewWrapper(::ID3D11RenderTargetView* tex) : m_realTarget(tex)
		{
			this->m_pResource = reinterpret_cast<::ID3D11Resource*>(m_realTarget);
			m_RefCount = 1;
		}


		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid, _In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid, _In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		// ID3D11View
		void STDMETHODCALLTYPE GetResource(
			_Outptr_ ID3D11Resource** ppResource) override;


		// ID3D11RenderTargetView
		void STDMETHODCALLTYPE GetDesc(
			_Out_ D3D11_RENDER_TARGET_VIEW_DESC* pDesc) override;
	};

	class ID3D11DepthStencilViewWrapper : ID3D11DepthStencilView_X
	{
	public:
		ID3D11DepthStencilView* m_realTarget;

		ID3D11DepthStencilViewWrapper(::ID3D11DepthStencilView* tex) : m_realTarget(tex)
		{
			this->m_pResource = reinterpret_cast<::ID3D11Resource*>(m_realTarget);
			m_RefCount = 1;
		}


		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid, _In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid, _In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		// ID3D11View
		void STDMETHODCALLTYPE GetResource(
			_Outptr_ ID3D11Resource** ppResource) override;


		// ID3D11DepthStencilView
		void STDMETHODCALLTYPE GetDesc(
			_Out_ D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc) override;
	};

	class ID3D11ShaderResourceViewWrapper : ID3D11ShaderResourceView_X
	{
	public:
		ID3D11ShaderResourceView* m_realTarget;

		ID3D11ShaderResourceViewWrapper(::ID3D11ShaderResourceView* tex) : m_realTarget(tex)
		{
			this->m_pResource = reinterpret_cast<::ID3D11Resource*>(m_realTarget);
			m_RefCount = 1;
		}


		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid, _In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid, _In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		// ID3D11View
		void STDMETHODCALLTYPE GetResource(
			_Outptr_ ID3D11Resource** ppResource) override;


		// ID3D11ShaderResourceView
		void STDMETHODCALLTYPE GetDesc(
			_Out_ D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc) override;
	};

	class ID3D11UnorderedAccessViewWrapper : ID3D11UnorderedAccessView_X
	{
	public:
		ID3D11UnorderedAccessView* m_realTarget;

		ID3D11UnorderedAccessViewWrapper(::ID3D11UnorderedAccessView* tex) : m_realTarget(tex)
		{
			this->m_pResource = reinterpret_cast<::ID3D11Resource*>(m_realTarget);
			m_RefCount = 1;
		}


		// IGraphicsUnknown
		HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
		ULONG AddRef() override;
		ULONG Release() override;

		// ID3D11DeviceChild
		void STDMETHODCALLTYPE GetDevice(_Outptr_ ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(_In_ REFGUID guid, _Inout_ UINT* pDataSize,
		                                         _Out_writes_bytes_opt_(*pDataSize) void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(_In_ REFGUID guid, _In_ UINT DataSize,
		                                         _In_reads_bytes_opt_(DataSize) const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_ REFGUID guid, _In_opt_ const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

		// ID3D11View
		void STDMETHODCALLTYPE GetResource(
			_Outptr_ ID3D11Resource** ppResource) override;


		// ID3D11UnorderedAccessView
		void STDMETHODCALLTYPE GetDesc(
			_Out_ D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc) override;
	};


	//MIDL_INTERFACE("c0bfa96c-e089-44fb-8eaf-26f8796190da")
	class ID3D11DeviceContextXWrapper : public ID3D11DeviceChild_X
	{
	public:
		ID3D11DeviceContextXWrapper(::ID3D11DeviceContext2* pDeviceCtx) : m_realDeviceCtx(pDeviceCtx)
		{
			m_RefCount = 1;
			InitFunctionsTables();
		}


		virtual void STDMETHODCALLTYPE VSSetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** modifiedBuffers = new ID3D11Buffer*[NumBuffers];
				for (UINT i = 0; i < NumBuffers; ++i)
				{
					modifiedBuffers[i] = reinterpret_cast<ID3D11BufferWrapper*>(ppConstantBuffers[i])->m_realBuffer;
				}
				m_realDeviceCtx->VSSetConstantBuffers(StartSlot, NumBuffers, modifiedBuffers);
			}
			else
			{
				m_realDeviceCtx->VSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE PSSetShaderResources(
			ID3D11ShaderResourceView* const* ppShaderResourceViews,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_ UINT PacketHeader)
		{
			UINT NumViews = (PacketHeader >> 19) + 1;

			if (ppShaderResourceViews != NULL)
			{
				ID3D11ShaderResourceView** modifiedViews = new ID3D11ShaderResourceView*[NumViews]{0};

				for (UINT i = 0; i < NumViews; i++)
				{
					if (ppShaderResourceViews[i] == nullptr)
						modifiedViews[i] = nullptr;
					else
						modifiedViews[i] = reinterpret_cast<ID3D11ShaderResourceViewWrapper*>(ppShaderResourceViews[i])
							->m_realTarget;
				}
				m_realDeviceCtx->PSSetShaderResources(StartSlot, NumViews, modifiedViews);
			}
			else
			{
				m_realDeviceCtx->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
			}
		}

		virtual void STDMETHODCALLTYPE PSSetShader(
			_In_opt_ ID3D11PixelShader* pPixelShader,
			_In_reads_opt_(NumClassInstances) ID3D11ClassInstance* const* ppClassInstances,
			UINT NumClassInstances)
		{
			m_realDeviceCtx->PSSetShader(pPixelShader, nullptr, 0);
		}

		virtual void STDMETHODCALLTYPE PSSetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_In_reads_opt_(NumSamplers) ID3D11SamplerState* const* ppSamplers)
		{
			m_realDeviceCtx->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE VSSetShader(
			_In_opt_ ID3D11VertexShader* pVertexShader,
			_In_reads_opt_(NumClassInstances) ID3D11ClassInstance* const* ppClassInstances,
			UINT NumClassInstances)
		{
			m_realDeviceCtx->VSSetShader(pVertexShader, nullptr, 0);
		}

		virtual void STDMETHODCALLTYPE DrawIndexed(
			_In_ UINT64 StartIndexLocationAndIndexCount,
			_In_ INT BaseVertexLocation)
		{
			UINT StartIndexLocation = static_cast<UINT>(StartIndexLocationAndIndexCount & 0xFFFFFFFF);
			UINT IndexCount = static_cast<UINT>((StartIndexLocationAndIndexCount >> 32) & 0xFFFFFFFF);

			ProcessDirtyFlags();
			m_realDeviceCtx->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
		}

		void ProcessDirtyFlags()
		{
			// 0x46 = topology dirty flag
			if (m_ShaderUserDataManagerDraw.m_DirtyFlags & 0x46)
			{
				m_ShaderUserDataManagerDraw.m_DirtyFlags &= ~0x46;
				int topology = D3D11X_HARDWARE_TO_TOPOLOGY_MAP.at(m_ShaderUserDataManagerDraw.m_Topology);
				// assert for xbox-one specific topology
				assert(!(topology == 6 || topology == 17 || topology == 18 || topology == 19 || topology == 20));

				m_realDeviceCtx->IASetPrimitiveTopology(static_cast<D3D11_PRIMITIVE_TOPOLOGY>(topology));
			}

			// 0x89 = input layout dirty flag
			if (m_ShaderUserDataManagerDraw.m_DirtyFlags & 0x89)
			{
				m_ShaderUserDataManagerDraw.m_DirtyFlags &= ~0x89;
				m_realDeviceCtx->IASetInputLayout(m_ShaderUserDataManagerDraw.m_pInputLayout);
			}

			// 0x91 = vertex shader dirty flag
			if (m_ShaderUserDataManagerDraw.m_DirtyFlags & 0x91)
			{
				m_ShaderUserDataManagerDraw.m_DirtyFlags &= ~0x91;
				m_realDeviceCtx->VSSetShader(m_ShaderUserDataManagerDraw.m_pVs, nullptr, 0);
			}

			// 0x121 = pixel shader dirty flag
			if (m_ShaderUserDataManagerDraw.m_DirtyFlags & 0x121)
			{
				m_ShaderUserDataManagerDraw.m_DirtyFlags &= ~0x121;
				m_realDeviceCtx->PSSetShader(m_ShaderUserDataManagerDraw.m_pPs, nullptr, 0);
			}
		}

		virtual void STDMETHODCALLTYPE Draw(
			_In_ UINT VertexCount,
			_In_ UINT StartVertexLocation)
		{
			ProcessDirtyFlags();
			m_realDeviceCtx->Draw(VertexCount, StartVertexLocation);
		}

		virtual HRESULT STDMETHODCALLTYPE Map(
			_In_ ID3D11Resource* pResource,
			_In_ UINT Subresource,
			_In_ D3D11_MAP MapType,
			_In_ UINT MapFlags,
			_Out_opt_ D3D11_MAPPED_SUBRESOURCE* pMappedResource)
		{
			return m_realDeviceCtx->Map(reinterpret_cast<ID3D11ResourceWrapperX*>(pResource)->m_realResource,
			                            Subresource, MapType, MapFlags, pMappedResource);
		}

		virtual void STDMETHODCALLTYPE Unmap(
			_In_ ID3D11Resource* pResource,
			_In_ UINT Subresource)
		{
			m_realDeviceCtx->Unmap(reinterpret_cast<ID3D11ResourceWrapperX*>(pResource)->m_realResource, Subresource);
		}

		virtual void STDMETHODCALLTYPE PSSetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** modifiedBuffers = new ID3D11Buffer*[NumBuffers];
				for (UINT i = 0; i < NumBuffers; ++i)
				{
					modifiedBuffers[i] = reinterpret_cast<ID3D11BufferWrapper*>(ppConstantBuffers[i])->m_realBuffer;
				}
				m_realDeviceCtx->PSSetConstantBuffers(StartSlot, NumBuffers, modifiedBuffers);
			}
			else
			{
				m_realDeviceCtx->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE IASetInputLayout(

			_In_opt_ ID3D11InputLayout* pInputLayout)
		{
			m_realDeviceCtx->IASetInputLayout(pInputLayout);
		}

		virtual void STDMETHODCALLTYPE IASetVertexBuffers(
			_In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppVertexBuffers,
			_In_reads_opt_(NumBuffers) const UINT* pStrides,
			_In_reads_opt_(NumBuffers) const UINT* pOffsets)
		{
			if (ppVertexBuffers != NULL)
			{
				ID3D11Buffer** modifiedBuffers = new ID3D11Buffer*[NumBuffers]{0};
				for (UINT i = 0; i < NumBuffers; i++)
				{
					if (ppVertexBuffers[i] == nullptr)
						modifiedBuffers[i] = nullptr;
					else
						modifiedBuffers[i] = reinterpret_cast<ID3D11BufferWrapper*>(ppVertexBuffers[i])->m_realBuffer;
				}

				m_realDeviceCtx->IASetVertexBuffers(StartSlot, NumBuffers, modifiedBuffers, pStrides, pOffsets);
			}
			else
			{
				m_realDeviceCtx->IASetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
			}
		}

		virtual void STDMETHODCALLTYPE IASetIndexBuffer(
			// @Patoke note: this one changes prototype
			_In_ UINT HardwareIndexFormat,
			_In_opt_ ID3D11Buffer* pIndexBuffer,
			_In_ UINT Offset)
		{
			DXGI_FORMAT Format = HardwareIndexFormat == 1 ? DXGI_FORMAT_R32_UINT : DXGI_FORMAT_R16_UINT;

			if (pIndexBuffer == nullptr)
			{
				return m_realDeviceCtx->IASetIndexBuffer(pIndexBuffer, Format, Offset);
			}

			m_realDeviceCtx->IASetIndexBuffer(reinterpret_cast<ID3D11BufferWrapper*>(pIndexBuffer)->m_realBuffer,
			                                  Format, Offset);
		}

		virtual void STDMETHODCALLTYPE DrawIndexedInstanced(
			_In_ UINT64 StartIndexLocationAndIndexCountPerInstance,
			_In_ UINT64 BaseVertexLocationAndStartInstanceLocation,
			_In_ UINT InstanceCount)
		{
			UINT StartIndexLocation = static_cast<UINT>(StartIndexLocationAndIndexCountPerInstance & 0xFFFFFFFF);
			UINT IndexCountPerInstance = static_cast<UINT>((StartIndexLocationAndIndexCountPerInstance >> 32) &
				0xFFFFFFFF);

			UINT BaseVertexLocation = static_cast<UINT>(BaseVertexLocationAndStartInstanceLocation & 0xFFFFFFFF);
			UINT StartInstanceLocation = static_cast<UINT>((BaseVertexLocationAndStartInstanceLocation >> 32) &
				0xFFFFFFFF);

			ProcessDirtyFlags();
			m_realDeviceCtx->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation,
			                                      BaseVertexLocation, StartInstanceLocation);
		}

		virtual void STDMETHODCALLTYPE DrawInstanced(
			_In_ UINT VertexCountPerInstance,
			_In_ UINT64 StartVertexLocationAndStartInstanceLocation,
			_In_ UINT InstanceCount)
		{
			UINT StartVertexLocation = static_cast<UINT>(StartVertexLocationAndStartInstanceLocation & 0xFFFFFFFF);
			UINT StartInstanceLocation = static_cast<UINT>((StartVertexLocationAndStartInstanceLocation >> 32) &
				0xFFFFFFFF);

			ProcessDirtyFlags();
			m_realDeviceCtx->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation,
			                               StartInstanceLocation);
		}

		virtual void STDMETHODCALLTYPE GSSetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** modifiedBuffers = new ID3D11Buffer*[NumBuffers];
				for (UINT i = 0; i < NumBuffers; ++i)
				{
					modifiedBuffers[i] = reinterpret_cast<ID3D11BufferWrapper*>(ppConstantBuffers[i])->m_realBuffer;
				}
				m_realDeviceCtx->GSSetConstantBuffers(StartSlot, NumBuffers, modifiedBuffers);
			}
			else
			{
				m_realDeviceCtx->GSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE GSSetShader(
			_In_opt_ ID3D11GeometryShader* pShader,
			_In_reads_opt_(NumClassInstances) ID3D11ClassInstance* const* ppClassInstances,
			UINT NumClassInstances)
		{
			m_realDeviceCtx->GSSetShader(pShader, nullptr, 0);
		}


		virtual void STDMETHODCALLTYPE VSSetShaderResources(
			_In_reads_opt_(NumViews) ID3D11ShaderResourceView* const* ppShaderResourceViews,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT PacketHeader)
		{
			if (PacketHeader < 0)
			{
				return;
			}

			UINT NumViews = (PacketHeader >> 19) + 1;

			if (ppShaderResourceViews != NULL)
			{
				ID3D11ShaderResourceView** modifiedViews = new ID3D11ShaderResourceView*[NumViews]{0};

				for (UINT i = 0; i < NumViews; i++)
				{
					if (ppShaderResourceViews[i] == nullptr)
						modifiedViews[i] = nullptr;
					else
						modifiedViews[i] = reinterpret_cast<ID3D11ShaderResourceViewWrapper*>(ppShaderResourceViews[i])
							->m_realTarget;
				}
				m_realDeviceCtx->VSSetShaderResources(StartSlot, NumViews, modifiedViews);
			}
			else
			{
				m_realDeviceCtx->VSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
			}
		}

		virtual void STDMETHODCALLTYPE VSSetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_In_reads_opt_(NumSamplers) ID3D11SamplerState* const* ppSamplers)
		{
			m_realDeviceCtx->VSSetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE Begin(
			_In_ ID3D11Asynchronous* pAsync)
		{
			m_realDeviceCtx->Begin(pAsync);
		}

		virtual void STDMETHODCALLTYPE End(
			_In_ ID3D11Asynchronous* pAsync)
		{
			m_realDeviceCtx->End(pAsync);
		}

		virtual HRESULT STDMETHODCALLTYPE GetData(
			_In_ ID3D11Asynchronous* pAsync,
			_Out_writes_bytes_opt_(DataSize) void* pData,
			_In_ UINT DataSize,
			_In_ UINT GetDataFlags)
		{
			return m_realDeviceCtx->GetData(pAsync, pData, DataSize, GetDataFlags);
		}

		virtual void STDMETHODCALLTYPE SetPredication(
			_In_opt_ ID3D11Predicate* pPredicate,
			_In_ BOOL PredicateValue)
		{
			m_realDeviceCtx->SetPredication(pPredicate, PredicateValue);
		}

		virtual void STDMETHODCALLTYPE GSSetShaderResources(
			_In_reads_opt_(NumViews) ID3D11ShaderResourceView* const* ppShaderResourceViews,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT PacketHeader)
		{
			if (PacketHeader < 0)
			{
				return;
			}

			UINT NumViews = (PacketHeader >> 19) + 1;

			if (ppShaderResourceViews != NULL)
			{
				ID3D11ShaderResourceView** modifiedViews = new ID3D11ShaderResourceView*[NumViews]{0};

				for (UINT i = 0; i < NumViews; i++)
				{
					if (ppShaderResourceViews[i] == nullptr)
						modifiedViews[i] = nullptr;
					else
						modifiedViews[i] = reinterpret_cast<ID3D11ShaderResourceViewWrapper*>(ppShaderResourceViews[i])
							->m_realTarget;
				}
				m_realDeviceCtx->GSSetShaderResources(StartSlot, NumViews, modifiedViews);
			}
			else
			{
				m_realDeviceCtx->GSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
			}
		}

		virtual void STDMETHODCALLTYPE GSSetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_In_reads_opt_(NumSamplers) ID3D11SamplerState* const* ppSamplers)
		{
			m_realDeviceCtx->GSSetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE OMSetRenderTargets(
			_In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT) UINT NumViews,
			_In_reads_opt_(NumViews) ID3D11RenderTargetView* const* ppRenderTargetViews,
			_In_opt_ ID3D11DepthStencilView_X* pDepthStencilView)
		{
			auto* depthStencilView = reinterpret_cast<ID3D11DepthStencilView*>(pDepthStencilView);
			if (depthStencilView != nullptr)
				depthStencilView = reinterpret_cast<ID3D11DepthStencilViewWrapper*>(pDepthStencilView)->m_realTarget;

			if (ppRenderTargetViews != NULL)
			{
				ID3D11RenderTargetView** modifiedViews = new ID3D11RenderTargetView*[NumViews]{0};
				for (UINT i = 0; i < NumViews; i++)
				{
					if (ppRenderTargetViews[i] == nullptr)
						modifiedViews[i] = nullptr;
					else
						modifiedViews[i] = reinterpret_cast<ID3D11RenderTargetViewWrapper*>(ppRenderTargetViews[i])->
							m_realTarget;
				}
				m_realDeviceCtx->OMSetRenderTargets(NumViews, modifiedViews, depthStencilView);
			}
			else
			{
				m_realDeviceCtx->OMSetRenderTargets(NumViews, ppRenderTargetViews, depthStencilView);
			}
		}

		virtual void STDMETHODCALLTYPE OMSetRenderTargetsAndUnorderedAccessViews(
			_In_ UINT NumRTVs,
			_In_reads_opt_(NumRTVs) ID3D11RenderTargetView* const* ppRenderTargetViews,
			_In_opt_ ID3D11DepthStencilView* pDepthStencilView,
			_In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1) UINT UAVStartSlot,
			_In_ UINT NumUAVs,
			_In_reads_opt_(NumUAVs) ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
			_In_reads_opt_(NumUAVs) const UINT* pUAVInitialCounts)
		{
			m_realDeviceCtx->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, pDepthStencilView,
			                                                           UAVStartSlot, NumUAVs, ppUnorderedAccessViews,
			                                                           pUAVInitialCounts);
		}

		virtual void STDMETHODCALLTYPE OMSetBlendState(
			_In_opt_ ID3D11BlendState* pBlendState,
			_In_opt_ const FLOAT BlendFactor[4],
			_In_ UINT SampleMask)
		{
			m_realDeviceCtx->OMSetBlendState(pBlendState, BlendFactor, SampleMask);
		}

		virtual void STDMETHODCALLTYPE OMSetDepthStencilState(
			_In_opt_ ID3D11DepthStencilState* pDepthStencilState,
			_In_ UINT StencilRef)
		{
			m_realDeviceCtx->OMSetDepthStencilState(pDepthStencilState, StencilRef);
		}

		virtual void STDMETHODCALLTYPE SOSetTargets(
			_In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppSOTargets,
			_In_reads_opt_(NumBuffers) const UINT* pOffsets)
		{
			m_realDeviceCtx->SOSetTargets(NumBuffers, ppSOTargets, pOffsets);
		}

		virtual void STDMETHODCALLTYPE DrawAuto(void)
		{
			m_realDeviceCtx->DrawAuto();
		}

		virtual void STDMETHODCALLTYPE DrawIndexedInstancedIndirect(
			_In_ ID3D11Buffer* pBufferForArgs,
			_In_ UINT AlignedByteOffsetForArgs)
		{
			m_realDeviceCtx->DrawIndexedInstancedIndirect(
				reinterpret_cast<ID3D11BufferWrapper*>(pBufferForArgs)->m_realBuffer, AlignedByteOffsetForArgs);
		}

		virtual void STDMETHODCALLTYPE DrawInstancedIndirect(
			_In_ ID3D11Buffer* pBufferForArgs,
			_In_ UINT AlignedByteOffsetForArgs)
		{
			m_realDeviceCtx->DrawInstancedIndirect(reinterpret_cast<ID3D11BufferWrapper*>(pBufferForArgs)->m_realBuffer,
			                                       AlignedByteOffsetForArgs);
		}

		virtual void STDMETHODCALLTYPE Dispatch(
			_In_ UINT ThreadGroupCountX,
			_In_ UINT ThreadGroupCountY,
			_In_ UINT ThreadGroupCountZ)
		{
			m_realDeviceCtx->Dispatch(ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
		}

		virtual void STDMETHODCALLTYPE DispatchIndirect(
			_In_ ID3D11Buffer* pBufferForArgs,
			_In_ UINT AlignedByteOffsetForArgs)
		{
			m_realDeviceCtx->DispatchIndirect(reinterpret_cast<ID3D11BufferWrapper*>(pBufferForArgs)->m_realBuffer,
			                                  AlignedByteOffsetForArgs);
		}

		virtual void STDMETHODCALLTYPE RSSetState(
			_In_opt_ ID3D11RasterizerState* pRasterizerState)
		{
			m_realDeviceCtx->RSSetState(pRasterizerState);
		}

		virtual void STDMETHODCALLTYPE RSSetViewports(
			_In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumViewports,
			_In_reads_opt_(NumViewports) const D3D11_VIEWPORT* pViewports)
		{
			m_realDeviceCtx->RSSetViewports(NumViewports, pViewports);
		}

		virtual void STDMETHODCALLTYPE RSSetScissorRects(
			_In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE) UINT NumRects,
			_In_reads_opt_(NumRects) const D3D11_RECT* pRects)
		{
			m_realDeviceCtx->RSSetScissorRects(NumRects, pRects);
		}

		virtual void STDMETHODCALLTYPE CopySubresourceRegion(
			_In_ ID3D11Resource* pDstResource,
			_In_ UINT DstSubresource,
			_In_ UINT DstX,
			_In_ UINT DstY,
			_In_ UINT DstZ,
			_In_ ID3D11Resource* pSrcResource,
			_In_ UINT SrcSubresource,
			_In_opt_ const D3D11_BOX* pSrcBox)
		{
			m_realDeviceCtx->CopySubresourceRegion(
				reinterpret_cast<ID3D11ResourceWrapperX*>(pDstResource)->m_realResource, DstSubresource, DstX, DstY,
				DstZ, reinterpret_cast<ID3D11ResourceWrapperX*>(pSrcResource)->m_realResource, SrcSubresource, pSrcBox);
		}

		virtual void STDMETHODCALLTYPE CopyResource(
			_In_ ID3D11Resource* pDstResource,
			_In_ ID3D11Resource* pSrcResource)
		{
			m_realDeviceCtx->CopyResource(reinterpret_cast<ID3D11ResourceWrapperX*>(pDstResource)->m_realResource,
			                              reinterpret_cast<ID3D11ResourceWrapperX*>(pSrcResource)->m_realResource);
		}

		virtual void STDMETHODCALLTYPE UpdateSubresource(
			_In_ ID3D11Resource* pDstResource,
			_In_ UINT DstSubresource,
			_In_opt_ const D3D11_BOX* pDstBox,
			_In_ const void* pSrcData,
			_In_ UINT SrcRowPitch,
			_In_ UINT SrcDepthPitch)
		{
			m_realDeviceCtx->UpdateSubresource(reinterpret_cast<ID3D11ResourceWrapperX*>(pDstResource)->m_realResource,
			                                   DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
		}

		virtual void STDMETHODCALLTYPE CopyStructureCount(
			_In_ ID3D11Buffer* pDstBuffer,
			_In_ UINT DstAlignedByteOffset,
			_In_ ID3D11UnorderedAccessView* pSrcView)
		{
			m_realDeviceCtx->CopyStructureCount(reinterpret_cast<ID3D11BufferWrapper*>(pDstBuffer)->m_realBuffer,
			                                    DstAlignedByteOffset,
			                                    reinterpret_cast<ID3D11UnorderedAccessViewWrapper*>(pSrcView)->
			                                    m_realTarget);
		}

		virtual void STDMETHODCALLTYPE ClearRenderTargetView(
			_In_ ID3D11RenderTargetView* pRenderTargetView,
			_In_ const FLOAT ColorRGBA[4])
		{
			m_realDeviceCtx->ClearRenderTargetView(
				reinterpret_cast<ID3D11RenderTargetViewWrapper*>(pRenderTargetView)->m_realTarget, ColorRGBA);
		}

		virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewUint(
			_In_ ID3D11UnorderedAccessView* pUnorderedAccessView,
			_In_ const UINT Values[4])
		{
			m_realDeviceCtx->ClearUnorderedAccessViewUint(
				reinterpret_cast<ID3D11UnorderedAccessViewWrapper*>(pUnorderedAccessView)->m_realTarget, Values);
		}

		virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewFloat(
			_In_ ID3D11UnorderedAccessView* pUnorderedAccessView,
			_In_ const FLOAT Values[4])
		{
			m_realDeviceCtx->ClearUnorderedAccessViewFloat(
				reinterpret_cast<ID3D11UnorderedAccessViewWrapper*>(pUnorderedAccessView)->m_realTarget, Values);
		}

		virtual void STDMETHODCALLTYPE ClearDepthStencilView(
			_In_ ID3D11DepthStencilView* pDepthStencilView,
			_In_ UINT ClearFlags,
			_In_ FLOAT Depth,
			_In_ UINT8 Stencil)
		{
			m_realDeviceCtx->ClearDepthStencilView(
				reinterpret_cast<ID3D11DepthStencilViewWrapper*>(pDepthStencilView)->m_realTarget, ClearFlags, Depth,
				Stencil);
		}

		virtual void STDMETHODCALLTYPE GenerateMips(
			_In_ ID3D11ShaderResourceView* pShaderResourceView)
		{
			m_realDeviceCtx->GenerateMips(
				reinterpret_cast<ID3D11ShaderResourceViewWrapper*>(pShaderResourceView)->m_realTarget);
		}

		virtual void STDMETHODCALLTYPE SetResourceMinLOD(
			_In_ ID3D11Resource* pResource,
			FLOAT MinLOD)
		{
			m_realDeviceCtx->SetResourceMinLOD(reinterpret_cast<ID3D11ResourceWrapperX*>(pResource)->m_realResource,
			                                   MinLOD);
		}

		virtual FLOAT STDMETHODCALLTYPE GetResourceMinLOD(
			_In_ ID3D11Resource* pResource)
		{
			return m_realDeviceCtx->GetResourceMinLOD(
				reinterpret_cast<ID3D11ResourceWrapperX*>(pResource)->m_realResource);
		}

		virtual void STDMETHODCALLTYPE ResolveSubresource(
			_In_ ID3D11Resource* pDstResource,
			_In_ UINT DstSubresource,
			_In_ ID3D11Resource* pSrcResource,
			_In_ UINT SrcSubresource,
			_In_ DXGI_FORMAT Format)
		{
			m_realDeviceCtx->ResolveSubresource(reinterpret_cast<ID3D11ResourceWrapperX*>(pDstResource)->m_realResource,
			                                    DstSubresource,
			                                    reinterpret_cast<ID3D11ResourceWrapperX*>(pSrcResource)->m_realResource,
			                                    SrcSubresource, Format);
		}

		virtual void STDMETHODCALLTYPE ExecuteCommandList(
			_In_ ID3D11CommandList* pCommandList,
			BOOL RestoreContextState)
		{
			m_realDeviceCtx->ExecuteCommandList(pCommandList, RestoreContextState);
		}

		virtual void STDMETHODCALLTYPE HSSetShaderResources(
			_In_reads_opt_(NumViews) ID3D11ShaderResourceView* const* ppShaderResourceViews,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT PacketHeader)
		{
			if (PacketHeader < 0)
			{
				return;
			}

			UINT NumViews = (PacketHeader >> 19) + 1;

			if (ppShaderResourceViews != NULL)
			{
				ID3D11ShaderResourceView** modifiedViews = new ID3D11ShaderResourceView*[NumViews]{0};

				for (UINT i = 0; i < NumViews; i++)
				{
					if (ppShaderResourceViews[i] == nullptr)
						modifiedViews[i] = nullptr;
					else
						modifiedViews[i] = reinterpret_cast<ID3D11ShaderResourceViewWrapper*>(ppShaderResourceViews[i])
							->m_realTarget;
				}
				m_realDeviceCtx->HSSetShaderResources(StartSlot, NumViews, modifiedViews);
			}
			else
			{
				m_realDeviceCtx->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
			}
		}

		virtual void STDMETHODCALLTYPE HSSetShader(
			_In_opt_ ID3D11HullShader* pHullShader,
			_In_reads_opt_(NumClassInstances) ID3D11ClassInstance* const* ppClassInstances,
			UINT NumClassInstances)
		{
			m_realDeviceCtx->HSSetShader(pHullShader, nullptr, 0);
		}

		virtual void STDMETHODCALLTYPE HSSetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_In_reads_opt_(NumSamplers) ID3D11SamplerState* const* ppSamplers)
		{
			m_realDeviceCtx->HSSetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE HSSetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** modifiedBuffers = new ID3D11Buffer*[NumBuffers];
				for (UINT i = 0; i < NumBuffers; ++i)
				{
					modifiedBuffers[i] = reinterpret_cast<ID3D11BufferWrapper*>(ppConstantBuffers[i])->m_realBuffer;
				}
				m_realDeviceCtx->HSSetConstantBuffers(StartSlot, NumBuffers, modifiedBuffers);
			}
			else
			{
				m_realDeviceCtx->HSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE DSSetShaderResources(
			_In_reads_opt_(NumViews) ID3D11ShaderResourceView* const* ppShaderResourceViews,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT PacketHeader)
		{
			if (PacketHeader < 0)
			{
				return;
			}

			UINT NumViews = (PacketHeader >> 19) + 1;

			if (ppShaderResourceViews != NULL)
			{
				ID3D11ShaderResourceView** modifiedViews = new ID3D11ShaderResourceView*[NumViews]{0};

				for (UINT i = 0; i < NumViews; i++)
				{
					if (ppShaderResourceViews[i] == nullptr)
						modifiedViews[i] = nullptr;
					else
						modifiedViews[i] = reinterpret_cast<ID3D11ShaderResourceViewWrapper*>(ppShaderResourceViews[i])
							->m_realTarget;
				}
				m_realDeviceCtx->HSSetShaderResources(StartSlot, NumViews, modifiedViews);
			}
			else
			{
				m_realDeviceCtx->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
			}
		}

		virtual void STDMETHODCALLTYPE DSSetShader(
			_In_opt_ ID3D11DomainShader* pDomainShader,
			_In_reads_opt_(NumClassInstances) ID3D11ClassInstance* const* ppClassInstances,
			UINT NumClassInstances)
		{
			m_realDeviceCtx->DSSetShader(pDomainShader, nullptr, 0);
		}

		virtual void STDMETHODCALLTYPE DSSetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_In_reads_opt_(NumSamplers) ID3D11SamplerState* const* ppSamplers)
		{
			m_realDeviceCtx->DSSetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE DSSetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** modifiedBuffers = new ID3D11Buffer*[NumBuffers];
				for (UINT i = 0; i < NumBuffers; ++i)
				{
					modifiedBuffers[i] = reinterpret_cast<ID3D11BufferWrapper*>(ppConstantBuffers[i])->m_realBuffer;
				}
				m_realDeviceCtx->DSSetConstantBuffers(StartSlot, NumBuffers, modifiedBuffers);
			}
			else
			{
				m_realDeviceCtx->DSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE CSSetShaderResources(
			_In_reads_opt_(NumViews) ID3D11ShaderResourceView* const* ppShaderResourceViews,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT PacketHeader)
		{
			if (PacketHeader < 0)
			{
				return;
			}

			UINT NumViews = (PacketHeader >> 19) + 1;

			if (ppShaderResourceViews != NULL)
			{
				ID3D11ShaderResourceView** modifiedViews = new ID3D11ShaderResourceView*[NumViews]{0};

				for (UINT i = 0; i < NumViews; i++)
				{
					if (ppShaderResourceViews[i] == nullptr)
						modifiedViews[i] = nullptr;
					else
						modifiedViews[i] = reinterpret_cast<ID3D11ShaderResourceViewWrapper*>(ppShaderResourceViews[i])
							->m_realTarget;
				}
				m_realDeviceCtx->HSSetShaderResources(StartSlot, NumViews, modifiedViews);
			}
			else
			{
				m_realDeviceCtx->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
			}
		}

		// @Patoke todo: unwrap
		virtual void STDMETHODCALLTYPE CSSetUnorderedAccessViews(
			_In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot) UINT NumUAVs,
			_In_reads_opt_(NumUAVs) ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
			_In_reads_opt_(NumUAVs) const UINT* pUAVInitialCounts)
		{
			m_realDeviceCtx->CSSetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
		}

		virtual void STDMETHODCALLTYPE CSSetShader(
			_In_opt_ ID3D11ComputeShader* pComputeShader,
			_In_reads_opt_(NumClassInstances) ID3D11ClassInstance* const* ppClassInstances,
			UINT NumClassInstances)
		{
			m_realDeviceCtx->CSSetShader(pComputeShader, nullptr, 0);
		}

		virtual void STDMETHODCALLTYPE CSSetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_In_reads_opt_(NumSamplers) ID3D11SamplerState* const* ppSamplers)
		{
			m_realDeviceCtx->CSSetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE CSSetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** modifiedBuffers = new ID3D11Buffer*[NumBuffers];
				for (UINT i = 0; i < NumBuffers; ++i)
				{
					modifiedBuffers[i] = reinterpret_cast<ID3D11BufferWrapper*>(ppConstantBuffers[i])->m_realBuffer;
				}
				m_realDeviceCtx->CSSetConstantBuffers(StartSlot, NumBuffers, modifiedBuffers);
			}
			else
			{
				m_realDeviceCtx->CSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE VSGetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** unwrappedBuffers = new ID3D11Buffer*[NumBuffers]{0};

				m_realDeviceCtx->VSGetConstantBuffers(StartSlot, NumBuffers, unwrappedBuffers);

				for (UINT i = 0; i < NumBuffers; ++i)
				{
					ppConstantBuffers[i] = reinterpret_cast<ID3D11Buffer*>(new
						ID3D11BufferWrapper(unwrappedBuffers[i]));
				}
			}
			else
			{
				m_realDeviceCtx->VSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE PSGetShaderResources(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT NumViews,
			_Out_writes_opt_(NumViews) ID3D11ShaderResourceView** ppShaderResourceViews)
		{
			m_realDeviceCtx->PSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
		}

		virtual void STDMETHODCALLTYPE PSGetShader(
			_Outptr_result_maybenull_ ID3D11PixelShader** ppPixelShader,
			_Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance** ppClassInstances,
			_Inout_opt_ UINT* pNumClassInstances)
		{
			m_realDeviceCtx->PSGetShader(ppPixelShader, ppClassInstances, pNumClassInstances);
		}

		virtual void STDMETHODCALLTYPE PSGetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_Out_writes_opt_(NumSamplers) ID3D11SamplerState** ppSamplers)
		{
			m_realDeviceCtx->PSGetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE VSGetShader(
			_Outptr_result_maybenull_ ID3D11VertexShader** ppVertexShader,
			_Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance** ppClassInstances,
			_Inout_opt_ UINT* pNumClassInstances)
		{
			m_realDeviceCtx->VSGetShader(ppVertexShader, ppClassInstances, pNumClassInstances);
		}

		virtual void STDMETHODCALLTYPE PSGetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** unwrappedBuffers = new ID3D11Buffer*[NumBuffers]{0};

				m_realDeviceCtx->PSGetConstantBuffers(StartSlot, NumBuffers, unwrappedBuffers);

				for (UINT i = 0; i < NumBuffers; ++i)
				{
					ppConstantBuffers[i] = reinterpret_cast<ID3D11Buffer*>(new
						ID3D11BufferWrapper(unwrappedBuffers[i]));
				}
			}
			else
			{
				m_realDeviceCtx->PSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE IAGetInputLayout(
			_Outptr_result_maybenull_ ID3D11InputLayout** ppInputLayout)
		{
			m_realDeviceCtx->IAGetInputLayout(ppInputLayout);
		}

		virtual void STDMETHODCALLTYPE IAGetVertexBuffers(
			_In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppVertexBuffers,
			_Out_writes_opt_(NumBuffers) UINT* pStrides,
			_Out_writes_opt_(NumBuffers) UINT* pOffsets)
		{
			if (ppVertexBuffers != NULL)
			{
				ID3D11Buffer** unwrappedBuffers = new ID3D11Buffer*[NumBuffers]{0};

				m_realDeviceCtx->IAGetVertexBuffers(StartSlot, NumBuffers, unwrappedBuffers, pStrides, pOffsets);

				for (UINT i = 0; i < NumBuffers; ++i)
				{
					ppVertexBuffers[i] = reinterpret_cast<ID3D11Buffer*>(new ID3D11BufferWrapper(unwrappedBuffers[i]));
				}
			}
			else
			{
				m_realDeviceCtx->IAGetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
			}
		}

		virtual void STDMETHODCALLTYPE IAGetIndexBuffer(
			_Outptr_opt_result_maybenull_ ID3D11Buffer** pIndexBuffer,
			_Out_opt_ DXGI_FORMAT* Format,
			_Out_opt_ UINT* Offset)
		{
			m_realDeviceCtx->IAGetIndexBuffer(pIndexBuffer, Format, Offset);

			if (pIndexBuffer != nullptr)
			{
				*pIndexBuffer = pIndexBuffer
					                ? reinterpret_cast<ID3D11Buffer*>(new ID3D11BufferWrapper(*pIndexBuffer))
					                : nullptr;
			}
		}

		virtual void STDMETHODCALLTYPE GSGetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** unwrappedBuffers = new ID3D11Buffer*[NumBuffers]{0};

				m_realDeviceCtx->GSGetConstantBuffers(StartSlot, NumBuffers, unwrappedBuffers);

				for (UINT i = 0; i < NumBuffers; ++i)
				{
					ppConstantBuffers[i] = reinterpret_cast<ID3D11Buffer*>(new
						ID3D11BufferWrapper(unwrappedBuffers[i]));
				}
			}
			else
			{
				m_realDeviceCtx->GSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE GSGetShader(
			_Outptr_result_maybenull_ ID3D11GeometryShader** ppGeometryShader,
			_Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance** ppClassInstances,
			_Inout_opt_ UINT* pNumClassInstances)
		{
			m_realDeviceCtx->GSGetShader(ppGeometryShader, ppClassInstances, pNumClassInstances);
		}

		virtual void STDMETHODCALLTYPE IAGetPrimitiveTopology(
			_Out_ D3D11_PRIMITIVE_TOPOLOGY* pTopology)
		{
			m_realDeviceCtx->IAGetPrimitiveTopology(pTopology);
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE VSGetShaderResources(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT NumViews,
			_Out_writes_opt_(NumViews) ID3D11ShaderResourceView** ppShaderResourceViews)
		{
			m_realDeviceCtx->VSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
		}

		virtual void STDMETHODCALLTYPE VSGetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_Out_writes_opt_(NumSamplers) ID3D11SamplerState** ppSamplers)
		{
			m_realDeviceCtx->VSGetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE GetPredication(
			_Outptr_opt_result_maybenull_ ID3D11Predicate** ppPredicate,
			_Out_opt_ BOOL* pPredicateValue)
		{
			m_realDeviceCtx->GetPredication(ppPredicate, pPredicateValue);
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE GSGetShaderResources(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT NumViews,
			_Out_writes_opt_(NumViews) ID3D11ShaderResourceView** ppShaderResourceViews)
		{
			m_realDeviceCtx->GSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
		}

		virtual void STDMETHODCALLTYPE GSGetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_Out_writes_opt_(NumSamplers) ID3D11SamplerState** ppSamplers)
		{
			m_realDeviceCtx->GSGetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE OMGetRenderTargets(
			_In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT) UINT NumViews,
			_Out_writes_opt_(NumViews) ID3D11RenderTargetView_X** ppRenderTargetViews,
			_Outptr_opt_result_maybenull_ ID3D11DepthStencilView_X** ppDepthStencilView)
		{
			::ID3D11RenderTargetView* target = nullptr;
			::ID3D11DepthStencilView* depth = nullptr;
			m_realDeviceCtx->OMGetRenderTargets(NumViews, &target, &depth);

			if (ppRenderTargetViews != nullptr)
			{
				*ppRenderTargetViews = ppRenderTargetViews
					                       ? reinterpret_cast<ID3D11RenderTargetView_X*>(new
						                       ID3D11RenderTargetViewWrapper(target))
					                       : nullptr;
			}

			if (ppDepthStencilView != nullptr)
			{
				*ppDepthStencilView = ppDepthStencilView
					                      ? reinterpret_cast<ID3D11DepthStencilView_X*>(new
						                      ID3D11DepthStencilViewWrapper(depth))
					                      : nullptr;
			}
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE OMGetRenderTargetsAndUnorderedAccessViews(
			_In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT) UINT NumRTVs,
			_Out_writes_opt_(NumRTVs) ID3D11RenderTargetView** ppRenderTargetViews,
			_Outptr_opt_result_maybenull_ ID3D11DepthStencilView** ppDepthStencilView,
			_In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1) UINT UAVStartSlot,
			_In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot) UINT NumUAVs,
			_Out_writes_opt_(NumUAVs) ID3D11UnorderedAccessView** ppUnorderedAccessViews)
		{
			m_realDeviceCtx->OMGetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, ppDepthStencilView,
			                                                           UAVStartSlot, NumUAVs, ppUnorderedAccessViews);
		}

		virtual void STDMETHODCALLTYPE OMGetBlendState(
			_Outptr_opt_result_maybenull_ ID3D11BlendState** ppBlendState,
			_Out_opt_ FLOAT BlendFactor[4],
			_Out_opt_ UINT* pSampleMask)
		{
			m_realDeviceCtx->OMGetBlendState(ppBlendState, BlendFactor, pSampleMask);
		}

		virtual void STDMETHODCALLTYPE OMGetDepthStencilState(
			_Outptr_opt_result_maybenull_ ID3D11DepthStencilState** ppDepthStencilState,
			_Out_opt_ UINT* pStencilRef)
		{
			m_realDeviceCtx->OMGetDepthStencilState(ppDepthStencilState, pStencilRef);
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE SOGetTargets(
			_In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppSOTargets)
		{
			m_realDeviceCtx->SOGetTargets(NumBuffers, ppSOTargets);
		}

		virtual void STDMETHODCALLTYPE RSGetState(
			_Outptr_result_maybenull_ ID3D11RasterizerState** ppRasterizerState)
		{
			m_realDeviceCtx->RSGetState(ppRasterizerState);
		}

		virtual void STDMETHODCALLTYPE RSGetViewports(
			_Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/ UINT* pNumViewports,
				_Out_writes_opt_(*pNumViewports) D3D11_VIEWPORT* pViewports)
		{
			m_realDeviceCtx->RSGetViewports(pNumViewports, pViewports);
		}

		virtual void STDMETHODCALLTYPE RSGetScissorRects(
			_Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/ UINT* pNumRects,
				_Out_writes_opt_(*pNumRects) D3D11_RECT* pRects)
		{
			m_realDeviceCtx->RSGetScissorRects(pNumRects, pRects);
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE HSGetShaderResources(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT NumViews,
			_Out_writes_opt_(NumViews) ID3D11ShaderResourceView** ppShaderResourceViews)
		{
			m_realDeviceCtx->HSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
		}

		virtual void STDMETHODCALLTYPE HSGetShader(
			_Outptr_result_maybenull_ ID3D11HullShader** ppHullShader,
			_Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance** ppClassInstances,
			_Inout_opt_ UINT* pNumClassInstances)
		{
			m_realDeviceCtx->HSGetShader(ppHullShader, ppClassInstances, pNumClassInstances);
		}

		virtual void STDMETHODCALLTYPE HSGetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_Out_writes_opt_(NumSamplers) ID3D11SamplerState** ppSamplers)
		{
			m_realDeviceCtx->HSGetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE HSGetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** unwrappedBuffers = new ID3D11Buffer*[NumBuffers]{0};

				m_realDeviceCtx->HSGetConstantBuffers(StartSlot, NumBuffers, unwrappedBuffers);

				for (UINT i = 0; i < NumBuffers; ++i)
				{
					ppConstantBuffers[i] = reinterpret_cast<ID3D11Buffer*>(new
						ID3D11BufferWrapper(unwrappedBuffers[i]));
				}
			}
			else
			{
				m_realDeviceCtx->HSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE DSGetShaderResources(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT NumViews,
			_Out_writes_opt_(NumViews) ID3D11ShaderResourceView** ppShaderResourceViews)
		{
			m_realDeviceCtx->DSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
		}

		virtual void STDMETHODCALLTYPE DSGetShader(
			_Outptr_result_maybenull_ ID3D11DomainShader** ppDomainShader,
			_Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance** ppClassInstances,
			_Inout_opt_ UINT* pNumClassInstances)
		{
			m_realDeviceCtx->DSGetShader(ppDomainShader, ppClassInstances, pNumClassInstances);
		}

		virtual void STDMETHODCALLTYPE DSGetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_Out_writes_opt_(NumSamplers) ID3D11SamplerState** ppSamplers)
		{
			m_realDeviceCtx->DSGetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE DSGetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** unwrappedBuffers = new ID3D11Buffer*[NumBuffers]{0};

				m_realDeviceCtx->DSGetConstantBuffers(StartSlot, NumBuffers, unwrappedBuffers);

				for (UINT i = 0; i < NumBuffers; ++i)
				{
					ppConstantBuffers[i] = reinterpret_cast<ID3D11Buffer*>(new
						ID3D11BufferWrapper(unwrappedBuffers[i]));
				}
			}
			else
			{
				m_realDeviceCtx->DSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE CSGetShaderResources(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot) UINT NumViews,
			_Out_writes_opt_(NumViews) ID3D11ShaderResourceView** ppShaderResourceViews)
		{
			m_realDeviceCtx->CSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
		}

		// @Patoke todo: wrap
		virtual void STDMETHODCALLTYPE CSGetUnorderedAccessViews(
			_In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot) UINT NumUAVs,
			_Out_writes_opt_(NumUAVs) ID3D11UnorderedAccessView** ppUnorderedAccessViews)
		{
			m_realDeviceCtx->CSGetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews);
		}

		virtual void STDMETHODCALLTYPE CSGetShader(
			_Outptr_result_maybenull_ ID3D11ComputeShader** ppComputeShader,
			_Out_writes_opt_(*pNumClassInstances) ID3D11ClassInstance** ppClassInstances,
			_Inout_opt_ UINT* pNumClassInstances)
		{
			m_realDeviceCtx->CSGetShader(ppComputeShader, ppClassInstances, pNumClassInstances);
		}

		virtual void STDMETHODCALLTYPE CSGetSamplers(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot) UINT NumSamplers,
			_Out_writes_opt_(NumSamplers) ID3D11SamplerState** ppSamplers)
		{
			m_realDeviceCtx->CSGetSamplers(StartSlot, NumSamplers, ppSamplers);
		}

		virtual void STDMETHODCALLTYPE CSGetConstantBuffers(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers)
		{
			if (ppConstantBuffers != NULL)
			{
				ID3D11Buffer** unwrappedBuffers = new ID3D11Buffer*[NumBuffers]{0};

				m_realDeviceCtx->CSGetConstantBuffers(StartSlot, NumBuffers, unwrappedBuffers);

				for (UINT i = 0; i < NumBuffers; ++i)
				{
					ppConstantBuffers[i] = reinterpret_cast<ID3D11Buffer*>(new
						ID3D11BufferWrapper(unwrappedBuffers[i]));
				}
			}
			else
			{
				m_realDeviceCtx->CSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
			}
		}

		virtual void STDMETHODCALLTYPE ClearState(void)
		{
			m_realDeviceCtx->ClearState();
		}

		virtual void STDMETHODCALLTYPE Flush(void)
		{
			m_realDeviceCtx->Flush();
		}

		virtual D3D11_DEVICE_CONTEXT_TYPE STDMETHODCALLTYPE GetType(void)
		{
			return m_realDeviceCtx->GetType();
		}

		virtual UINT STDMETHODCALLTYPE GetContextFlags(void)
		{
			return m_realDeviceCtx->GetContextFlags();
		}

		virtual HRESULT STDMETHODCALLTYPE FinishCommandList(
			BOOL RestoreDeferredContextState,

			_COM_Outptr_opt_ ID3D11CommandList** ppCommandList)
		{
			return m_realDeviceCtx->FinishCommandList(RestoreDeferredContextState, ppCommandList);
		}

		virtual void STDMETHODCALLTYPE CopySubresourceRegion1(
			_In_ ID3D11Resource* pDstResource,
			_In_ UINT DstSubresource,
			_In_ UINT DstX,
			_In_ UINT DstY,
			_In_ UINT DstZ,
			_In_ ID3D11Resource* pSrcResource,
			_In_ UINT SrcSubresource,
			_In_opt_ const D3D11_BOX* pSrcBox,
			_In_ UINT CopyFlags)
		{
			m_realDeviceCtx->CopySubresourceRegion1(
				reinterpret_cast<ID3D11ResourceWrapperX*>(pDstResource)->m_realResource, DstSubresource, DstX, DstY,
				DstZ, reinterpret_cast<ID3D11ResourceWrapperX*>(pSrcResource)->m_realResource, SrcSubresource, pSrcBox,
				CopyFlags);
		}

		virtual void STDMETHODCALLTYPE UpdateSubresource1(
			_In_ ID3D11Resource* pDstResource,
			_In_ UINT DstSubresource,
			_In_opt_ const D3D11_BOX* pDstBox,
			_In_ const void* pSrcData,
			_In_ UINT SrcRowPitch,
			_In_ UINT SrcDepthPitch,
			_In_ UINT CopyFlags)
		{
			m_realDeviceCtx->UpdateSubresource1(reinterpret_cast<ID3D11ResourceWrapperX*>(pDstResource)->m_realResource,
			                                    DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch,
			                                    CopyFlags);
		}

		virtual void STDMETHODCALLTYPE DiscardResource(
			_In_ ID3D11Resource* pResource)
		{
			m_realDeviceCtx->DiscardResource(reinterpret_cast<ID3D11ResourceWrapperX*>(pResource)->m_realResource);
		}

		// @Patoke todo: unwrap?
		virtual void STDMETHODCALLTYPE DiscardView(
			_In_ ID3D11View* pResourceView)
		{
			m_realDeviceCtx->DiscardView(pResourceView);
		}

		virtual void STDMETHODCALLTYPE VSSetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers,
			_In_reads_opt_(NumBuffers) const UINT* pFirstConstant,
			_In_reads_opt_(NumBuffers) const UINT* pNumConstants)
		{
			m_realDeviceCtx->VSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE HSSetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers,
			_In_reads_opt_(NumBuffers) const UINT* pFirstConstant,
			_In_reads_opt_(NumBuffers) const UINT* pNumConstants)
		{
			m_realDeviceCtx->HSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE DSSetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers,
			_In_reads_opt_(NumBuffers) const UINT* pFirstConstant,
			_In_reads_opt_(NumBuffers) const UINT* pNumConstants)
		{
			m_realDeviceCtx->DSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE GSSetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers,
			_In_reads_opt_(NumBuffers) const UINT* pFirstConstant,
			_In_reads_opt_(NumBuffers) const UINT* pNumConstants)
		{
			m_realDeviceCtx->GSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE PSSetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers,
			_In_reads_opt_(NumBuffers) const UINT* pFirstConstant,
			_In_reads_opt_(NumBuffers) const UINT* pNumConstants)
		{
			m_realDeviceCtx->PSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE CSSetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_In_reads_opt_(NumBuffers) ID3D11Buffer* const* ppConstantBuffers,
			_In_reads_opt_(NumBuffers) const UINT* pFirstConstant,
			_In_reads_opt_(NumBuffers) const UINT* pNumConstants)
		{
			m_realDeviceCtx->CSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE VSGetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers,
			_Out_writes_opt_(NumBuffers) UINT* pFirstConstant,
			_Out_writes_opt_(NumBuffers) UINT* pNumConstants)
		{
			m_realDeviceCtx->VSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE HSGetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers,
			_Out_writes_opt_(NumBuffers) UINT* pFirstConstant,
			_Out_writes_opt_(NumBuffers) UINT* pNumConstants)
		{
			m_realDeviceCtx->HSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE DSGetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers,
			_Out_writes_opt_(NumBuffers) UINT* pFirstConstant,
			_Out_writes_opt_(NumBuffers) UINT* pNumConstants)
		{
			m_realDeviceCtx->DSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE GSGetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers,
			_Out_writes_opt_(NumBuffers) UINT* pFirstConstant,
			_Out_writes_opt_(NumBuffers) UINT* pNumConstants)
		{
			m_realDeviceCtx->GSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE PSGetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers,
			_Out_writes_opt_(NumBuffers) UINT* pFirstConstant,
			_Out_writes_opt_(NumBuffers) UINT* pNumConstants)
		{
			m_realDeviceCtx->PSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE CSGetConstantBuffers1(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT StartSlot,
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot) UINT NumBuffers,
			_Out_writes_opt_(NumBuffers) ID3D11Buffer** ppConstantBuffers,
			_Out_writes_opt_(NumBuffers) UINT* pFirstConstant,
			_Out_writes_opt_(NumBuffers) UINT* pNumConstants)
		{
			m_realDeviceCtx->CSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant,
			                                       pNumConstants);
		}

		virtual void STDMETHODCALLTYPE SwapDeviceContextState(
			_In_ ID3DDeviceContextState* pState,
			_Outptr_opt_ ID3DDeviceContextState** ppPreviousState)
		{
			m_realDeviceCtx->SwapDeviceContextState(pState, ppPreviousState);
		}

		// @Patoke todo: unwrap?
		virtual void STDMETHODCALLTYPE ClearView(
			_In_ ID3D11View* pView,
			_In_ const FLOAT Color[4],
			_In_reads_opt_(NumRects) const D3D11_RECT* pRect,
			UINT NumRects)
		{
			m_realDeviceCtx->ClearView(pView, Color, pRect, NumRects);
		}

		// @Patoke todo: unwrap?
		virtual void STDMETHODCALLTYPE DiscardView1(
			_In_ ID3D11View* pResourceView,
			_In_reads_opt_(NumRects) const D3D11_RECT* pRects,
			UINT NumRects)
		{
			m_realDeviceCtx->DiscardView1(pResourceView, pRects, NumRects);
		}

		virtual HRESULT STDMETHODCALLTYPE UpdateTileMappings(
			_In_ ID3D11Resource* pTiledResource,
			_In_ UINT NumTiledResourceRegions,
			_In_reads_opt_(NumTiledResourceRegions) const D3D11_TILED_RESOURCE_COORDINATE*
			pTiledResourceRegionStartCoordinates,
			_In_reads_opt_(NumTiledResourceRegions) const D3D11_TILE_REGION_SIZE* pTiledResourceRegionSizes,
			_In_opt_ ID3D11Buffer* pTilePool,
			_In_ UINT NumRanges,
			_In_reads_opt_(NumRanges) const UINT* pRangeFlags,
			_In_reads_opt_(NumRanges) const UINT* pTilePoolStartOffsets,
			_In_reads_opt_(NumRanges) const UINT* pRangeTileCounts,
			_In_ UINT Flags)
		{
			return m_realDeviceCtx->UpdateTileMappings(
				reinterpret_cast<ID3D11ResourceWrapperX*>(pTiledResource)->m_realResource, NumTiledResourceRegions,
				pTiledResourceRegionStartCoordinates, pTiledResourceRegionSizes, pTilePool, NumRanges, pRangeFlags,
				pTilePoolStartOffsets, pRangeTileCounts, Flags);
		}

		virtual HRESULT STDMETHODCALLTYPE CopyTileMappings(
			_In_ ID3D11Resource* pDestTiledResource,
			_In_ const D3D11_TILED_RESOURCE_COORDINATE* pDestRegionStartCoordinate,
			_In_ ID3D11Resource* pSourceTiledResource,
			_In_ const D3D11_TILED_RESOURCE_COORDINATE* pSourceRegionStartCoordinate,
			_In_ const D3D11_TILE_REGION_SIZE* pTileRegionSize,
			_In_ UINT Flags)
		{
			return m_realDeviceCtx->CopyTileMappings(
				reinterpret_cast<ID3D11ResourceWrapperX*>(pDestTiledResource)->m_realResource,
				pDestRegionStartCoordinate,
				reinterpret_cast<ID3D11ResourceWrapperX*>(pSourceTiledResource)->m_realResource,
				pSourceRegionStartCoordinate, pTileRegionSize, Flags);
		}

		virtual void STDMETHODCALLTYPE CopyTiles(
			_In_ ID3D11Resource* pTiledResource,
			_In_ const D3D11_TILED_RESOURCE_COORDINATE* pTileRegionStartCoordinate,
			_In_ const D3D11_TILE_REGION_SIZE* pTileRegionSize,
			_In_ ID3D11Buffer* pBuffer,
			_In_ UINT64 BufferStartOffsetInBytes,
			_In_ UINT Flags)
		{
			m_realDeviceCtx->CopyTiles(reinterpret_cast<ID3D11ResourceWrapperX*>(pTiledResource)->m_realResource,
			                           pTileRegionStartCoordinate, pTileRegionSize, pBuffer, BufferStartOffsetInBytes,
			                           Flags);
		}

		virtual void STDMETHODCALLTYPE UpdateTiles(
			_In_ ID3D11Resource* pDestTiledResource,
			_In_ const D3D11_TILED_RESOURCE_COORDINATE* pDestTileRegionStartCoordinate,
			_In_ const D3D11_TILE_REGION_SIZE* pDestTileRegionSize,
			_In_ const void* pSourceTileData,
			_In_ UINT Flags)
		{
			m_realDeviceCtx->UpdateTiles(reinterpret_cast<ID3D11ResourceWrapperX*>(pDestTiledResource)->m_realResource,
			                             pDestTileRegionStartCoordinate, pDestTileRegionSize, pSourceTileData, Flags);
		}

		virtual HRESULT STDMETHODCALLTYPE ResizeTilePool(
			_In_ ID3D11Buffer* pTilePool,
			_In_ UINT64 NewSizeInBytes)
		{
			return m_realDeviceCtx->ResizeTilePool(pTilePool, NewSizeInBytes);
		}

		virtual void STDMETHODCALLTYPE TiledResourceBarrier(
			_In_opt_ ID3D11DeviceChild* pTiledResourceOrViewAccessBeforeBarrier,
			_In_opt_ ID3D11DeviceChild* pTiledResourceOrViewAccessAfterBarrier)
		{
			m_realDeviceCtx->TiledResourceBarrier(
				reinterpret_cast<ID3D11RenderTargetViewWrapper*>(pTiledResourceOrViewAccessBeforeBarrier)->m_realTarget,
				reinterpret_cast<ID3D11RenderTargetViewWrapper*>(pTiledResourceOrViewAccessAfterBarrier)->m_realTarget);
		}

		virtual INT (PIXBeginEvent)(
			_In_ LPCWSTR Name)
		{
			printf("[ID3D11DeviceContextX] PIXBeginEvent NOT IMPLEMENTED\n");
			return 0;
		}

		virtual INT (PIXBeginEventEx)(
			_In_reads_bytes_(DataSize) const void* pData,
			_In_ UINT DataSize)
		{
			printf("[ID3D11DeviceContextX] PIXBeginEventEx NOT IMPLEMENTED\n");
			return 0;
		}

		virtual INT (PIXEndEvent)(
			_Inout_ ID3D11DeviceContextX* pDeviceContext)
		{
			printf("[ID3D11DeviceContextX] PIXEndEvent NOT IMPLEMENTED\n");
			return 0;
		}

		virtual void (PIXSetMarker)(
			_In_ LPCWSTR Name)
		{
			printf("[ID3D11DeviceContextX] PIXSetMarker NOT IMPLEMENTED\n");
		}

		virtual void (PIXSetMarkerEx)(
			_In_reads_bytes_(DataSize) const void* pData,
			_In_ UINT DataSize)
		{
			printf("[ID3D11DeviceContextX] PIXSetMarkerEx NOT IMPLEMENTED\n");
		}

		virtual BOOL (PIXGetStatus)(
			_Inout_ ID3D11DeviceContextX* pDeviceContext)
		{
			printf("[ID3D11DeviceContextX] PIXGetStatus NOT IMPLEMENTED\n");
			return 0;
		}

		virtual HRESULT (PIXGpuCaptureNextFrame)(
			_In_ UINT Flags,
			_In_z_ LPCWSTR lpOutputFileName)
		{
			printf("[ID3D11DeviceContextX] PIXGpuCaptureNextFrame NOT IMPLEMENTED\n");
			return E_NOTIMPL;
		}

		virtual HRESULT (PIXGpuBeginCapture)(
			_In_ UINT Flags,
			_In_z_ LPCWSTR lpOutputFileName)
		{
			printf("[ID3D11DeviceContextX] PIXGpuBeginCapture NOT IMPLEMENTED\n");
			return E_NOTIMPL;
		}

		virtual HRESULT (PIXGpuEndCapture)(
			_Inout_ ID3D11DeviceContextX* pDeviceContext)
		{
			printf("[ID3D11DeviceContextX] PIXGpuEndCapture NOT IMPLEMENTED\n");
			return E_NOTIMPL;
		}

		virtual void (StartCounters)(
			_In_ ID3D11CounterSetX* pCounterSet)
		{
			printf("[ID3D11DeviceContextX] StartCounters NOT IMPLEMENTED\n");
		}

		virtual void (SampleCounters)(
			_In_ ID3D11CounterSampleX* pCounterSample)
		{
			printf("[ID3D11DeviceContextX] SampleCounters NOT IMPLEMENTED\n");
		}

		virtual void (StopCounters)(
			_Inout_ ID3D11DeviceContextX* pDeviceContext)
		{
			printf("[ID3D11DeviceContextX] StopCounters NOT IMPLEMENTED\n");
		}

		virtual HRESULT (GetCounterData)(
			_In_ ID3D11CounterSampleX* pCounterSample,
			_Out_ D3D11X_COUNTER_DATA* pData,
			_In_ UINT GetCounterDataFlags)
		{
			printf("[ID3D11DeviceContextX] GetCounterData NOT IMPLEMENTED\n");
			return E_NOTIMPL;
		}

		virtual void (FlushGpuCaches)(
			_In_ ID3D11Resource* pResource)
		{
			printf("[ID3D11DeviceContextX] FlushGpuCaches NOT IMPLEMENTED\n");
		}

		virtual void (FlushGpuCacheRange)(
			_In_ UINT Flags,
			_In_ void* pBaseAddress,
			_In_ SIZE_T SizeInBytes)
		{
			printf("[ID3D11DeviceContextX] FlushGpuCacheRange NOT IMPLEMENTED\n");
		}

		virtual void (InsertWaitUntilIdle)(
			_In_ UINT Flags)
		{
			//printf("[ID3D11DeviceContextX] InsertWaitUntilIdle NOT IMPLEMENTED\n");
		}

		virtual UINT64 (InsertFence)(
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] InsertFence NOT IMPLEMENTED\n");
			return 0;
		}

		virtual void (InsertWaitOnFence)(
			_In_ UINT Flags,
			_In_ UINT64 Fence)
		{
			printf("[ID3D11DeviceContextX] InsertWaitOnFence NOT IMPLEMENTED\n");
		}

		virtual void (RemapConstantBufferInheritance)(
			_In_ D3D11_STAGE Stage,
			_In_ UINT Slot,
			_In_ D3D11_STAGE InheritStage,
			_In_ UINT InheritSlot)
		{
			printf("[ID3D11DeviceContextX] RemapConstantBufferInheritance NOT IMPLEMENTED\n");
		}

		virtual void (RemapShaderResourceInheritance)(
			_In_ D3D11_STAGE Stage,
			_In_ UINT Slot,
			_In_ D3D11_STAGE InheritStage,
			_In_ UINT InheritSlot)
		{
			printf("[ID3D11DeviceContextX] RemapShaderResourceInheritance NOT IMPLEMENTED\n");
		}

		virtual void (RemapSamplerInheritance)(
			_In_ D3D11_STAGE Stage,
			_In_ UINT Slot,
			_In_ D3D11_STAGE InheritStage,
			_In_ UINT InheritSlot)
		{
			printf("[ID3D11DeviceContextX] RemapSamplerInheritance NOT IMPLEMENTED\n");
		}

		virtual void (RemapVertexBufferInheritance)(
			_In_ UINT Slot,
			_In_ UINT InheritSlot)
		{
			printf("[ID3D11DeviceContextX] RemapVertexBufferInheritance NOT IMPLEMENTED\n");
		}

		virtual void (PSSetFastConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer)
		{
			printf("[ID3D11DeviceContextX] PSSetFastConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (PSSetFastShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView)
		{
			printf("[ID3D11DeviceContextX] PSSetFastShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (PSSetFastSampler)(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11SamplerState* pSampler)
		{
			printf("[ID3D11DeviceContextX] PSSetFastSampler NOT IMPLEMENTED\n");
		}

		virtual void (VSSetFastConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer)
		{
			printf("[ID3D11DeviceContextX] VSSetFastConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (VSSetFastShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView)
		{
			printf("[ID3D11DeviceContextX] VSSetFastShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (VSSetFastSampler)(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11SamplerState* pSampler)
		{
			printf("[ID3D11DeviceContextX] VSSetFastSampler NOT IMPLEMENTED\n");
		}

		virtual void (GSSetFastConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer)
		{
			printf("[ID3D11DeviceContextX] GSSetFastConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (GSSetFastShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView)
		{
			printf("[ID3D11DeviceContextX] GSSetFastShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (GSSetFastSampler)(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11SamplerState* pSampler)
		{
			printf("[ID3D11DeviceContextX] GSSetFastSampler NOT IMPLEMENTED\n");
		}

		virtual void (CSSetFastConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer)
		{
			printf("[ID3D11DeviceContextX] CSSetFastConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (CSSetFastShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView)
		{
			printf("[ID3D11DeviceContextX] CSSetFastShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (CSSetFastSampler)(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11SamplerState* pSampler)
		{
			printf("[ID3D11DeviceContextX] CSSetFastSampler NOT IMPLEMENTED\n");
		}

		virtual void (HSSetFastConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer)
		{
			printf("[ID3D11DeviceContextX] HSSetFastConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (HSSetFastShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView)
		{
			printf("[ID3D11DeviceContextX] HSSetFastShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (HSSetFastSampler)(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11SamplerState* pSampler)
		{
			printf("[ID3D11DeviceContextX] HSSetFastSampler NOT IMPLEMENTED\n");
		}

		virtual void (DSSetFastConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer)
		{
			printf("[ID3D11DeviceContextX] DSSetFastConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (DSSetFastShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView)
		{
			printf("[ID3D11DeviceContextX] DSSetFastShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (DSSetFastSampler)(
			_In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11SamplerState* pSampler)
		{
			printf("[ID3D11DeviceContextX] DSSetFastSampler NOT IMPLEMENTED\n");
		}

		virtual void (IASetFastVertexBuffer)(
			_In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pVertexBuffer,
			_In_ UINT Stride)
		{
			printf("[ID3D11DeviceContextX] IASetFastVertexBuffer NOT IMPLEMENTED\n");
		}

		virtual void (IASetFastIndexBuffer)(
			_In_ UINT HardwareIndexFormat,
			_In_ ID3D11Buffer* pIndexBuffer)
		{
			printf("[ID3D11DeviceContextX] IASetFastIndexBuffer NOT IMPLEMENTED\n");
		}

		virtual void (PSSetPlacementConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] PSSetPlacementConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (PSSetPlacementShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] PSSetPlacementShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (VSSetPlacementConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] VSSetPlacementConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (VSSetPlacementShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] VSSetPlacementShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (GSSetPlacementConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] GSSetPlacementConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (GSSetPlacementShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] GSSetPlacementShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (CSSetPlacementConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] CSSetPlacementConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (CSSetPlacementShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] CSSetPlacementShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (HSSetPlacementConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] HSSetPlacementConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (HSSetPlacementShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] HSSetPlacementShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (DSSetPlacementConstantBuffer)(
			_In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pConstantBuffer,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] DSSetPlacementConstantBuffer NOT IMPLEMENTED\n");
		}

		virtual void (DSSetPlacementShaderResource)(
			_In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11ShaderResourceView* pShaderResourceView,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] DSSetPlacementShaderResource NOT IMPLEMENTED\n");
		}

		virtual void (IASetPlacementVertexBuffer)(
			_In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1) UINT Slot,
			_In_ ID3D11Buffer* pVertexBuffer,
			_In_ void* pBaseAddress,
			_In_ UINT Stride)
		{
			printf("[ID3D11DeviceContextX] IASetPlacementVertexBuffer NOT IMPLEMENTED\n");
		}

		virtual void (IASetPlacementIndexBuffer)(
			_In_ UINT HardwareIndexFormat,
			_In_ ID3D11Buffer* pIndexBuffer,
			_In_ void* pBaseAddress)
		{
			printf("[ID3D11DeviceContextX] IASetPlacementIndexBuffer NOT IMPLEMENTED\n");
		}

		virtual void (HSSetTessellationParameters)(
			_In_opt_ const D3D11X_TESSELLATION_PARAMETERS* pTessellationParameters)
		{
			printf("[ID3D11DeviceContextX] HSSetTessellationParameters NOT IMPLEMENTED\n");
		}

		virtual void (HSGetLastUsedTessellationParameters)(
			_Inout_ D3D11X_TESSELLATION_PARAMETERS* pTessellationParameters)
		{
			printf("[ID3D11DeviceContextX] HSGetLastUsedTessellationParameters NOT IMPLEMENTED\n");
		}

		virtual void (CSEnableAutomaticGpuFlush)(
			_In_ BOOL Enable)
		{
			printf("[ID3D11DeviceContextX] CSEnableAutomaticGpuFlush NOT IMPLEMENTED\n");
		}

		virtual void (GpuSendPipelinedEvent)(
			_In_ D3D11X_GPU_PIPELINED_EVENT Event)
		{
			printf("[ID3D11DeviceContextX] GpuSendPipelinedEvent NOT IMPLEMENTED\n");
		}

		virtual HRESULT (Suspend)(
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] Suspend NOT IMPLEMENTED\n");
			return E_NOTIMPL;
		}

		virtual HRESULT (Resume)(
			_Inout_ ID3D11DeviceContextX* pDeviceContext)
		{
			printf("[ID3D11DeviceContextX] Resume NOT IMPLEMENTED\n");
			return E_NOTIMPL;
		}

		virtual void (BeginCommandListExecution)(
			_Inout_ ID3D11DeviceContext* pDeviceContext,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] BeginCommandListExecution NOT IMPLEMENTED\n");
		}

		virtual void (EndCommandListExecution)(
			_Inout_ ID3D11DeviceContext* pDeviceContext)
		{
			printf("[ID3D11DeviceContextX] EndCommandListExecution NOT IMPLEMENTED\n");
		}

		virtual void (SetGraphicsShaderLimits)(
			_In_opt_ const D3D11X_GRAPHICS_SHADER_LIMITS* pShaderLimits)
		{
			printf("[ID3D11DeviceContextX] SetGraphicsShaderLimits NOT IMPLEMENTED\n");
		}

		virtual void (SetComputeShaderLimits)(
			_In_opt_ const D3D11X_COMPUTE_SHADER_LIMITS* pShaderLimits)
		{
			printf("[ID3D11DeviceContextX] SetComputeShaderLimits NOT IMPLEMENTED\n");
		}

		virtual void (SetPredicationBuffer)(
			_In_opt_ ID3D11Buffer* pBuffer,
			_In_ UINT Offset,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] SetPredicationBuffer NOT IMPLEMENTED\n");
		}

		virtual void (OMSetDepthBounds)(
			_Inout_ ID3D11DeviceContextX* pDevice,
			_In_ FLOAT min,
			_In_ FLOAT max)
		{
			printf("[ID3D11DeviceContextX] OMSetDepthBounds NOT IMPLEMENTED\n");
		}

		virtual void (OMSetDepthStencilStateX)(
			_In_opt_ ID3D11DepthStencilState* pDepthStencilState)
		{
			printf("[ID3D11DeviceContextX] OMSetDepthStencilStateX NOT IMPLEMENTED\n");
		}

		virtual void (OMSetSampleMask)(
			_Inout_ ID3D11DeviceContextX* pDevice,
			_In_ UINT64 QuadSampleMask)
		{
			printf("[ID3D11DeviceContextX] OMSetSampleMask NOT IMPLEMENTED\n");
		}

		virtual UINT32* (MakeCeSpace)(
			_Inout_ ID3D11DeviceContextX* pDeviceContext)
		{
			printf("[ID3D11DeviceContextX] MakeCeSpace NOT IMPLEMENTED\n");
			return nullptr;
		}

		virtual void (SetFastResources_Debug)(
			_In_ UINT* pTableStart,
			_In_ UINT* pTableEnd)
		{
			printf("[ID3D11DeviceContextX] SetFastResources_Debug NOT IMPLEMENTED\n");
		}

		virtual void (BeginResourceBatch)(
			_Out_ void* pBuffer,
			_In_ UINT BufferSize)
		{
			printf("[ID3D11DeviceContextX] BeginResourceBatch NOT IMPLEMENTED\n");
		}

		virtual UINT (EndResourceBatch)(
			_Out_opt_ UINT* pSizeNeeded)
		{
			printf("[ID3D11DeviceContextX] EndResourceBatch NOT IMPLEMENTED\n");
			return 0;
		}

		virtual void (SetFastResourcesFromBatch_Debug)(
			_In_ void* pBatch,
			_In_ UINT Size)
		{
			printf("[ID3D11DeviceContextX] SetFastResourcesFromBatch_Debug NOT IMPLEMENTED\n");
		}

		virtual void (CSPlaceUnorderedAccessView)(
			_In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1) UINT Slot,
			_In_ D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW* const pDescriptor,
			_In_ UINT64 Offset)
		{
			printf("[ID3D11DeviceContextX] CSPlaceUnorderedAccessView NOT IMPLEMENTED\n");
		}

		virtual void (WriteValueEndOfPipe)(
			_In_ void* pDestination,
			_In_ UINT Value,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] WriteValueEndOfPipe NOT IMPLEMENTED\n");
		}

		virtual void (CopyMemoryToMemory)(
			_In_ void* pDstAddress,
			_In_ void* pSrcAddress,
			_In_ SIZE_T SizeBytes)
		{
			printf("[ID3D11DeviceContextX] CopyMemoryToMemory NOT IMPLEMENTED\n");
		}

		virtual void (FillMemoryWithValue)(
			_In_ void* pDstAddress,
			_In_ SIZE_T SizeBytes,
			_In_ UINT FillValue)
		{
			printf("[ID3D11DeviceContextX] FillMemoryWithValue NOT IMPLEMENTED\n");
		}

		virtual void (BeginProcessVideoResource)(
			_In_ ID3D11Resource* pResource,
			_In_ UINT SubResource)
		{
			printf("[ID3D11DeviceContextX] BeginProcessVideoResource NOT IMPLEMENTED\n");
		}

		virtual void (EndProcessVideoResource)(
			_In_ ID3D11Resource* pResource,
			_In_ UINT SubResource)
		{
			printf("[ID3D11DeviceContextX] EndProcessVideoResource NOT IMPLEMENTED\n");
		}

		virtual HRESULT (StartThreadTrace)(
			_In_ const D3D11X_THREAD_TRACE_DESC* pDesc,
			_In_ void* pDstAddressShaderEngine0,
			_In_ void* pDstAddressShaderEngine1,
			_In_ SIZE_T BufferSizeBytes)
		{
			printf("[ID3D11DeviceContextX] StartThreadTrace NOT IMPLEMENTED\n");
			return E_NOTIMPL;
		}

		virtual void (StopThreadTrace)(
			_In_ void* pDstAddressTraceSize)
		{
			printf("[ID3D11DeviceContextX] StopThreadTrace NOT IMPLEMENTED\n");
		}

		virtual void (InsertThreadTraceMarker)(
			_In_ UINT Marker)
		{
			printf("[ID3D11DeviceContextX] InsertThreadTraceMarker NOT IMPLEMENTED\n");
		}

		virtual void (IASetPrimitiveResetIndex)(
			_In_ UINT ResetIndex)
		{
			printf("[ID3D11DeviceContextX] IASetPrimitiveResetIndex NOT IMPLEMENTED\n");
		}

		virtual void (SetShaderResourceViewMinLOD)(
			_In_ ID3D11ShaderResourceView* pShaderResourceView,
			FLOAT MinLOD)
		{
			printf("[ID3D11DeviceContextX] SetShaderResourceViewMinLOD NOT IMPLEMENTED\n");
		}

		virtual void (InsertWaitOnPresent)(
			_In_ UINT Flags,
			_In_ ID3D11Resource* pBackBuffer)
		{
			printf("[ID3D11DeviceContextX] InsertWaitOnPresent NOT IMPLEMENTED\n");
		}

		virtual void (ClearRenderTargetViewX)(
			_In_ ID3D11RenderTargetView* pRenderTargetView,
			_In_ UINT Flags,
			_In_ const FLOAT ColorRGBA[4])
		{
			printf("[ID3D11DeviceContextX] ClearRenderTargetViewX NOT IMPLEMENTED\n");
		}

		virtual UINT (GetResourceCompression)(
			_In_ ID3D11Resource* pResource)
		{
			printf("[ID3D11DeviceContextX] GetResourceCompression NOT IMPLEMENTED\n");
			return 0;
		}

		virtual UINT (GetResourceCompressionX)(
			_In_ const D3D11X_DESCRIPTOR_RESOURCE* pResource)
		{
			printf("[ID3D11DeviceContextX] GetResourceCompressionX NOT IMPLEMENTED\n");
			return 0;
		}

		virtual void (DecompressResource)(
			_In_ ID3D11Resource* pDstResource,
			_In_ UINT DstSubresource,
			_In_opt_ const D3D11X_POINT* pDstPoint,
			_In_ ID3D11Resource* pSrcResource,
			_In_ UINT SrcSubresource,
			_In_opt_ const D3D11X_RECT* pSrcRect,
			_In_ DXGI_FORMAT DecompressFormat,
			_In_ UINT DecompressFlags)
		{
			printf("[ID3D11DeviceContextX] DecompressResource NOT IMPLEMENTED\n");
		}

		virtual void (DecompressResourceX)(
			_In_ D3D11X_DESCRIPTOR_RESOURCE* pDstResource,
			_In_ UINT DstSubresource,
			_In_opt_ const D3D11X_POINT* pDstPoint,
			_In_ D3D11X_DESCRIPTOR_RESOURCE* pSrcResource,
			_In_ UINT SrcSubresource,
			_In_opt_ const D3D11X_RECT* pSrcRect,
			_In_ D3D11X_FORMAT DecompressFormat,
			_In_ UINT DecompressFlags)
		{
			printf("[ID3D11DeviceContextX] DecompressResourceX NOT IMPLEMENTED\n");
		}

		virtual void (GSSetParameters)(
			_In_opt_ const D3D11X_GS_PARAMETERS* pGsParameters)
		{
			printf("[ID3D11DeviceContextX] GSSetParameters NOT IMPLEMENTED\n");
		}

		virtual void (GSGetLastUsedParameters)(
			_Inout_ D3D11X_GS_PARAMETERS* pGsParameters)
		{
			printf("[ID3D11DeviceContextX] GSGetLastUsedParameters NOT IMPLEMENTED\n");
		}

		virtual void (MultiDrawIndexedInstancedIndirect)(
			_In_ UINT PrimitiveCount,
			_Inout_ ID3D11Buffer* pBufferForArgs,
			_In_ UINT AlignedByteOffsetForArgs,
			_In_ UINT StrideByteOffsetForArgs,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] MultiDrawIndexedInstancedIndirect NOT IMPLEMENTED\n");
		}

		virtual void (MultiDrawInstancedIndirect)(
			_In_ UINT PrimitiveCount,
			_Inout_ ID3D11Buffer* pBufferForArgs,
			_In_ UINT AlignedByteOffsetForArgs,
			_In_ UINT StrideByteOffsetForArgs,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] MultiDrawInstancedIndirect NOT IMPLEMENTED\n");
		}

		virtual void (MultiDrawIndexedInstancedIndirectAuto)(
			_Inout_ ID3D11Buffer* pBufferForPrimitiveCount,
			_In_ UINT AlignedByteOffsetForPrimitiveCount,
			_Inout_ ID3D11Buffer* pBufferForArgs,
			_In_ UINT AlignedByteOffsetForArgs,
			_In_ UINT StrideByteOffsetForArgs,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] MultiDrawIndexedInstancedIndirectAuto NOT IMPLEMENTED\n");
		}

		virtual void (MultiDrawInstancedIndirectAuto)(
			_Inout_ ID3D11Buffer* pBufferForPrimitiveCount,
			_In_ UINT AlignedByteOffsetForPrimitiveCount,
			_Inout_ ID3D11Buffer* pBufferForArgs,
			_In_ UINT AlignedByteOffsetForArgs,
			_In_ UINT StrideByteOffsetForArgs,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] MultiDrawInstancedIndirectAuto NOT IMPLEMENTED\n");
		}

		virtual HRESULT (RSGetMSAASettingsForQuality)(
			_Inout_opt_ D3D11X_MSAA_SCAN_CONVERTER_SETTINGS* pMSAASCSettings,
			_Inout_opt_ D3D11X_MSAA_EQAA_SETTINGS* pEQAASettings,
			_Inout_opt_ D3D11X_MSAA_SAMPLE_PRIORITIES* pCentroidPriorities,
			_Inout_opt_ D3D11X_MSAA_SAMPLE_POSITIONS* pSamplePositions,
			_In_ UINT LogSampleCount,
			_In_ UINT SampleQuality)
		{
			printf("[ID3D11DeviceContextX] RSGetMSAASettingsForQuality NOT IMPLEMENTED\n");
			return E_NOTIMPL;
		}

		virtual void (RSSetScanConverterMSAASettings)(
			_In_ const D3D11X_MSAA_SCAN_CONVERTER_SETTINGS* pMSAASCSettings)
		{
			printf("[ID3D11DeviceContextX] RSSetScanConverterMSAASettings NOT IMPLEMENTED\n");
		}

		virtual void (RSSetEQAASettings)(
			_In_ const D3D11X_MSAA_EQAA_SETTINGS* pEQAASettings)
		{
			printf("[ID3D11DeviceContextX] RSSetEQAASettings NOT IMPLEMENTED\n");
		}

		virtual void (RSSetSamplePositions)(
			_In_opt_ const D3D11X_MSAA_SAMPLE_PRIORITIES* pSamplesPriorities,
			_In_opt_ const D3D11X_MSAA_SAMPLE_POSITIONS* pSamplePositions)
		{
			printf("[ID3D11DeviceContextX] RSSetSamplePositions NOT IMPLEMENTED\n");
		}

		virtual void (SetResourceCompression)(
			_In_ ID3D11Resource* pResource,
			_In_ UINT Compression)
		{
			printf("[ID3D11DeviceContextX] SetResourceCompression NOT IMPLEMENTED\n");
		}

		virtual void (SetResourceCompressionX)(
			_In_ const D3D11X_DESCRIPTOR_RESOURCE* pResource,
			_In_ UINT Compression)
		{
			printf("[ID3D11DeviceContextX] SetResourceCompressionX NOT IMPLEMENTED\n");
		}

		virtual void (SetGDSRange)(
			_In_ _D3D11X_GDS_REGION_TYPE RegionType,
			_In_ UINT OffsetDwords,
			_In_ UINT NumDwords)
		{
			printf("[ID3D11DeviceContextX] SetGDSRange NOT IMPLEMENTED\n");
		}

		virtual void (WriteGDS)(
			_In_ _D3D11X_GDS_REGION_TYPE RegionType,
			_In_ UINT OffsetDwords,
			_In_ UINT NumDwords,
			_In_ const UINT* pCounterValues,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] WriteGDS NOT IMPLEMENTED\n");
		}

		virtual void (ReadGDS)(
			_In_ _D3D11X_GDS_REGION_TYPE RegionType,
			_In_ UINT OffsetDwords,
			_In_ UINT NumDwords,
			_Inout_ UINT* pCounterValues,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] ReadGDS NOT IMPLEMENTED\n");
		}

		virtual void (VSSetShaderUserData)(
			_In_ UINT StartSlot,
			_In_ UINT NumRegisters,
			_In_reads_(NumRegisters) const UINT* pData)
		{
			printf("[ID3D11DeviceContextX] VSSetShaderUserData NOT IMPLEMENTED\n");
		}

		virtual void (HSSetShaderUserData)(
			_In_ UINT StartSlot,
			_In_ UINT NumRegisters,
			_In_reads_(NumRegisters) const UINT* pData)
		{
			printf("[ID3D11DeviceContextX] HSSetShaderUserData NOT IMPLEMENTED\n");
		}

		virtual void (DSSetShaderUserData)(
			_In_ UINT StartSlot,
			_In_ UINT NumRegisters,
			_In_reads_(NumRegisters) const UINT* pData)
		{
			printf("[ID3D11DeviceContextX] DSSetShaderUserData NOT IMPLEMENTED\n");
		}

		virtual void (GSSetShaderUserData)(
			_In_ UINT StartSlot,
			_In_ UINT NumRegisters,
			_In_reads_(NumRegisters) const UINT* pData)
		{
			printf("[ID3D11DeviceContextX] GSSetShaderUserData NOT IMPLEMENTED\n");
		}

		virtual void (PSSetShaderUserData)(
			_In_ UINT StartSlot,
			_In_ UINT NumRegisters,
			_In_reads_(NumRegisters) const UINT* pData)
		{
			printf("[ID3D11DeviceContextX] PSSetShaderUserData NOT IMPLEMENTED\n");
		}

		virtual void (CSSetShaderUserData)(
			_In_ UINT StartSlot,
			_In_ UINT NumRegisters,
			_In_reads_(NumRegisters) const UINT* pData)
		{
			printf("[ID3D11DeviceContextX] CSSetShaderUserData NOT IMPLEMENTED\n");
		}

		virtual void (InsertWaitOnMemory)(
			_In_ const void* pAddress,
			_In_ UINT Flags,
			_In_ D3D11_COMPARISON_FUNC ComparisonFunction,
			_In_ UINT ReferenceValue,
			_In_ UINT Mask)
		{
			printf("[ID3D11DeviceContextX] InsertWaitOnMemory NOT IMPLEMENTED\n");
		}

		virtual void (WriteTimestampToMemory)(
			_In_ void* pDstAddress)
		{
			printf("[ID3D11DeviceContextX] WriteTimestampToMemory NOT IMPLEMENTED\n");
		}

		virtual void (WriteTimestampToBuffer)(
			_In_ ID3D11Buffer* pBuffer,
			_In_ UINT OffsetBytes)
		{
			printf("[ID3D11DeviceContextX] WriteTimestampToBuffer NOT IMPLEMENTED\n");
		}

		virtual void (StoreConstantRam)(
			_In_ UINT Flags,
			_In_ ID3D11Buffer* pBuffer,
			_In_ UINT BufferOffsetInBytes,
			_In_ UINT CeRamOffsetInBytes,
			_In_ UINT SizeInBytes)
		{
			printf("[ID3D11DeviceContextX] StoreConstantRam NOT IMPLEMENTED\n");
		}

		virtual void (LoadConstantRam)(
			_In_ UINT Flags,
			_In_ ID3D11Buffer* pBuffer,
			_In_ UINT BufferOffsetInBytes,
			_In_ UINT CeRamOffsetInBytes,
			_In_ UINT SizeInBytes)
		{
			printf("[ID3D11DeviceContextX] LoadConstantRam NOT IMPLEMENTED\n");
		}

		virtual void (WriteQuery)(
			_In_ D3D11_QUERY QueryType,
			_In_ UINT QueryIndex,
			_In_ UINT Flags,
			_In_ ID3D11Buffer* pBuffer,
			_In_ UINT OffsetInBytes,
			_In_ UINT StrideInBytes)
		{
			printf("[ID3D11DeviceContextX] WriteQuery NOT IMPLEMENTED\n");
		}

		virtual void (ResetQuery)(
			_In_ D3D11_QUERY QueryType,
			_In_ UINT QueryIndex,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] ResetQuery NOT IMPLEMENTED\n");
		}

		virtual void (ConfigureQuery)(
			_In_ D3D11_QUERY QueryType,
			_In_ const void* pConfiguration,
			_In_ UINT ConfigurationSize)
		{
			printf("[ID3D11DeviceContextX] ConfigureQuery NOT IMPLEMENTED\n");
		}

		virtual void (SetShaderUserData)(
			_In_ D3D11X_HW_STAGE ShaderStage,
			_In_ UINT StartSlot,
			_In_ UINT NumRegisters,
			_In_reads_(NumRegisters) const UINT* pData)
		{
			printf("[ID3D11DeviceContextX] SetShaderUserData NOT IMPLEMENTED\n");
		}

		virtual void (SetPixelShaderDepthForceZOrder)(
			_In_ BOOL ForceOrder)
		{
			printf("[ID3D11DeviceContextX] SetPixelShaderDepthForceZOrder NOT IMPLEMENTED\n");
		}

		virtual void (SetPredicationFromQuery)(
			_In_ D3D11_QUERY QueryType,
			_In_ ID3D11Buffer* pBuffer,
			_In_ UINT OffsetInBytes,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] SetPredicationFromQuery NOT IMPLEMENTED\n");
		}

		virtual void (SetBorderColorPalette)(
			_In_ ID3D11Buffer* pBuffer,
			_In_ UINT OffsetInBytes,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] SetBorderColorPalette NOT IMPLEMENTED\n");
		}

		virtual void (WriteValueEndOfPipe64)(
			_In_ void* pDestination,
			_In_ UINT64 Value,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] WriteValueEndOfPipe64 NOT IMPLEMENTED\n");
		}

		virtual void (InsertWaitOnMemory64)(
			_In_ const void* pAddress,
			_In_ UINT Flags,
			_In_ D3D11_COMPARISON_FUNC ComparisonFunction,
			_In_ UINT64 ReferenceValue)
		{
			printf("[ID3D11DeviceContextX] InsertWaitOnMemory64 NOT IMPLEMENTED\n");
		}

		virtual void (LoadConstantRamImmediate)(
			_In_ UINT Flags,
			_In_ const void* pBuffer,
			_In_ UINT CeRamOffsetInBytes,
			_In_ UINT SizeInBytes)
		{
			printf("[ID3D11DeviceContextX] LoadConstantRamImmediate NOT IMPLEMENTED\n");
		}

		virtual void (SetScreenExtentsQuery)(
			_In_ UINT Value)
		{
			printf("[ID3D11DeviceContextX] SetScreenExtentsQuery NOT IMPLEMENTED\n");
		}

		virtual void (CollectScreenExtents)(
			_In_ UINT Flags,
			_In_ UINT AddressCount,
			_In_reads_(AddressCount) const UINT64* pDestinationAddresses,
			_In_ USHORT ZMin,
			_In_ USHORT ZMax)
		{
			printf("[ID3D11DeviceContextX] CollectScreenExtents NOT IMPLEMENTED\n");
		}

		virtual void (FillResourceWithValue)(
			_In_ ID3D11Resource* pDstResource,
			_In_ UINT FillValue)
		{
			printf("[ID3D11DeviceContextX] FillResourceWithValue NOT IMPLEMENTED\n");
		}

		virtual void (SetDrawBalancing)(
			_In_ UINT BalancingMode,
			_In_ UINT Flags)
		{
			printf("[ID3D11DeviceContextX] SetDrawBalancing NOT IMPLEMENTED\n");
		}


		HRESULT QueryInterface(REFIID riid, void** ppvObject) override
		{
			// DEBUG
			char iidstr[sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}")];
			OLECHAR iidwstr[sizeof(iidstr)];
			StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
			WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
			printf("[ID3D11DeviceContextXWrapperX] QueryInterface: %s\n", iidstr);

			if (riid == __uuidof(::ID3D11DeviceContext) || riid == __uuidof(::ID3D11DeviceContext1) ||
				riid == __uuidof(::ID3D11DeviceContext2) || riid == __uuidof(ID3D11DeviceContextX))
			{
				*ppvObject = this;
				AddRef();
				return S_OK;
			}

			return m_realDeviceCtx->QueryInterface(riid, ppvObject);
		}

		ULONG AddRef() override
		{
			printf("[ID3D11DeviceContextXWrapperX] --> AddRef\n");
			return InterlockedIncrement(&m_RefCount);
		}

		ULONG Release() override
		{
			printf("[ID3D11DeviceContextXWrapperX] --> Release\n");
			ULONG refCount = InterlockedDecrement(&m_RefCount);
			if (refCount == 0)
			{
				m_realDeviceCtx->Release();
				delete this;
			}
			return refCount;
		}

		// @Patoke todo: unwrap?
		void GetDevice(ID3D11Device** ppDevice) override
		{
			// Probably not necessary but just to be sure -AleBlbl
			::ID3D11Device** device = nullptr;
			this->m_realDeviceCtx->GetDevice(device);
			ppDevice = reinterpret_cast<ID3D11Device**>(ppDevice);
		}

		HRESULT GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override
		{
			return m_realDeviceCtx->GetPrivateData(guid, pDataSize, pData);
		}

		HRESULT SetPrivateData(REFGUID guid, UINT DataSize, const void* pData) override
		{
			return m_realDeviceCtx->SetPrivateData(guid, DataSize, pData);
		}

		HRESULT SetPrivateDataInterface(REFGUID guid, const IUnknown* pData) override
		{
			return m_realDeviceCtx->SetPrivateDataInterface(guid, pData);
		}

		HRESULT SetName(const wchar_t* name) override
		{
			printf("[ID3D11Texture2DWrapper]: SetName STUB\n");
			return S_OK;
		}


		D3D11XTinyDevice m_TinyDevice;
		D3D11XShaderUserDataManagerDraw m_ShaderUserDataManagerDraw;

		union
		{
			uint8_t m_OutOfLineFlags;
			uint32_t m_Reserved[16];
		} DUMMYUNIONNAME;

		std::array<FARPROC, 270> m_FUNCTION;

		void InitFunctionsTables()
		{
			auto virtualPTR = *reinterpret_cast<FARPROC**>(this);

			for (size_t I = 0; I < m_FUNCTION.size(); I++)
			{
				m_FUNCTION[I] = virtualPTR[I];
			}
		}


		::ID3D11DeviceContext2* m_realDeviceCtx;
	};
}
