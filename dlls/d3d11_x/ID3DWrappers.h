#pragma once
#include "ID3DX.h"



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


    class ID3D11Texture2DWrapper : public ID3D11Texture2D_X
    {
    public:
        ID3D11Texture2D* m_realTexture;

        ID3D11Texture2DWrapper(::ID3D11Texture2D* tex) : m_realTexture(tex)
        {

        }


        // IGraphicsUnknown
        HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
        ULONG AddRef( ) override;
        ULONG Release( ) override;

        // ID3D11DeviceChild
        void STDMETHODCALLTYPE GetDevice(_Outptr_  ID3D11Device** ppDevice) override;
        HRESULT STDMETHODCALLTYPE GetPrivateData(_In_  REFGUID guid, _Inout_  UINT* pDataSize,_Out_writes_bytes_opt_(*pDataSize)  void* pData) override;
        HRESULT STDMETHODCALLTYPE SetPrivateData(_In_  REFGUID guid,_In_  UINT DataSize,_In_reads_bytes_opt_(DataSize)  const void* pData) override;
        HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_  REFGUID guid,_In_opt_  const IUnknown* pData) override;
        HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

        // ID3D11Resource
        void STDMETHODCALLTYPE GetType(_Out_  D3D11_RESOURCE_DIMENSION* pResourceDimension) override;
        void STDMETHODCALLTYPE SetEvictionPriority(_In_  UINT EvictionPriority) override;
        UINT STDMETHODCALLTYPE GetEvictionPriority(void) override;
        void STDMETHODCALLTYPE GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor) override;

        // ID3D11Texture2D
        void STDMETHODCALLTYPE GetDesc(_Out_  D3D11_TEXTURE2D_DESC* pDesc) override;
    };

    struct D3D11XTinyDevice
    {
        unsigned int m_Reserved1[ 8 ];
        unsigned int* m_pBatchCurrent;
        unsigned int* m_pBatchLimit;
        unsigned int* m_pCeCurrent;
        unsigned int* m_pCeBiasedLimit;
        unsigned int* m_pCeLimit;
        unsigned int m_Reserved2[ 64 ];
    };

    struct D3D11XShaderUserDataManagerDraw
    {
        unsigned int m_DirtyFlags;
        unsigned int m_Reserved1;
        unsigned __int64 m_Topology;
        ID3D11InputLayout* m_pInputLayout;
        ID3D11VertexShader* m_pVs;
        ID3D11PixelShader* m_pPs;
        unsigned int m_Reserved2[ 128 ];
    };

    struct D3D11X_COUNTER_DATA
    {
        unsigned int Size;
        unsigned int Version;
        unsigned __int64 GRBM[ 2 ][ 1 ];
        unsigned __int64 SRBM[ 2 ][ 1 ];
        unsigned __int64 CPF[ 2 ][ 1 ];
        unsigned __int64 CPG[ 2 ][ 1 ];
        unsigned __int64 CPC[ 2 ][ 1 ];
        unsigned __int64 CB[ 4 ][ 8 ];
        unsigned __int64 DB[ 4 ][ 8 ];
        unsigned __int64 SU[ 4 ][ 4 ];
        unsigned __int64 SC[ 8 ][ 4 ];
        unsigned __int64 SX[ 8 ][ 4 ];
        unsigned __int64 SPI[ 4 ][ 4 ];
        unsigned __int64 SQ[ 16 ][ 4 ];
        unsigned __int64 TA[ 5 ][ 40 ];
        unsigned __int64 TD[ 2 ][ 40 ];
        unsigned __int64 TCP[ 8 ][ 40 ];
        unsigned __int64 TCC[ 4 ][ 8 ];
        unsigned __int64 TCA[ 4 ][ 2 ];
        unsigned __int64 GDS[ 4 ][ 1 ];
        unsigned __int64 VGT[ 4 ][ 4 ];
        unsigned __int64 IA[ 4 ][ 2 ];
        unsigned __int64 WD[ 4 ][ 1 ];
        unsigned __int64 MC_MCB_L1TLB[ 4 ][ 1 ];
        unsigned __int64 MC_HV_MCB_L1TLB[ 4 ][ 1 ];
        unsigned __int64 MC_MCD_L1TLB[ 4 ][ 2 ];
        unsigned __int64 MC_HV_MCD_L1TLB[ 4 ][ 2 ];
        unsigned __int64 MC_L2TLB[ 2 ][ 1 ];
        unsigned __int64 MC_HV_L2TLB[ 2 ][ 1 ];
        unsigned __int64 MC_ARB[ 4 ][ 6 ];
        unsigned __int64 MC_CITF[ 4 ][ 4 ];
        unsigned __int64 MC_HUB[ 4 ][ 1 ];
        unsigned __int64 GRN[ 4 ][ 1 ];
        unsigned __int64 GRN1[ 4 ][ 1 ];
        unsigned __int64 GRN2[ 4 ][ 1 ];
    };

    enum D3D11_STAGE : __int32
    {
        D3D11_STAGE_VS = 0x0,
        D3D11_STAGE_HS = 0x1,
        D3D11_STAGE_DS = 0x2,
        D3D11_STAGE_GS = 0x3,
        D3D11_STAGE_PS = 0x4,
        D3D11_STAGE_CS = 0x5,
    };

    enum D3D11X_GPU_PIPELINED_EVENT : __int32
    {
        D3D11X_GPU_PIPELINED_EVENT_STREAMOUT_FLUSH = 0x1F,
        D3D11X_GPU_PIPELINED_EVENT_FLUSH_AND_INV_CB_PIXEL_DATA = 0x31,
        D3D11X_GPU_PIPELINED_EVENT_DB_CACHE_FLUSH_AND_INV = 0x2A,
        D3D11X_GPU_PIPELINED_EVENT_FLUSH_AND_INV_CB_META = 0x2E,
        D3D11X_GPU_PIPELINED_EVENT_FLUSH_AND_INV_DB_META = 0x2C,
        D3D11X_GPU_PIPELINED_EVENT_CS_PARTIAL_FLUSH = 0x407,
        D3D11X_GPU_PIPELINED_EVENT_VS_PARTIAL_FLUSH = 0x40F,
        D3D11X_GPU_PIPELINED_EVENT_PS_PARTIAL_FLUSH = 0x410,
        D3D11X_GPU_PIPELINED_EVENT_PFP_SYNC_ME = 0x80000001,
        D3D11X_GPU_PIPELINED_EVENT_INDEX_MASK = 0xF00,
        D3D11X_GPU_PIPELINED_EVENT_INDEX_SHIFT = 0x8,
        D3D11X_GPU_PIPELINED_EVENT_TYPE_MASK = 0x3F,
        D3D11X_GPU_PIPELINED_EVENT_TYPE_SHIFT = 0x0,
        D3D11X_GPU_PIPELINED_EVENT_SPECIAL_MASK = 0x80000000,
    };

    enum _D3D11X_GDS_REGION_TYPE : __int32
    {
        D3D11X_GDS_REGION_PS = 0x0,
        D3D11X_GDS_REGION_CS = 0x1,
        D3D11X_GDS_REGION_ALL_MEMORY = 0x2,
    };

    struct D3D11X_FORMAT 
    {
        // @Patoke todo: implement
        unsigned __int64 pad;
    };

    enum D3D11X_HW_STAGE : __int32
    {
        D3D11X_HW_STAGE_PS = 0x0,
        D3D11X_HW_STAGE_VS = 0x1,
        D3D11X_HW_STAGE_GS = 0x2,
        D3D11X_HW_STAGE_ES = 0x3,
        D3D11X_HW_STAGE_HS = 0x4,
        D3D11X_HW_STAGE_LS = 0x5,
        D3D11X_HW_STAGE_CS = 0x6,
    };

    MIDL_INTERFACE("c0bfa96c-e089-44fb-8eaf-26f8796190da")
        ID3D11DeviceContext : public ID3D11DeviceChild_X
    {
    public:
        virtual void STDMETHODCALLTYPE VSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE PSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE PSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11PixelShader* pPixelShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE VSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11VertexShader* pVertexShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexed(
            /* [annotation] */
            _In_  UINT IndexCount,
            /* [annotation] */
            _In_  UINT StartIndexLocation,
            /* [annotation] */
            _In_  INT BaseVertexLocation) = 0;

        virtual void STDMETHODCALLTYPE Draw(
            /* [annotation] */
            _In_  UINT VertexCount,
            /* [annotation] */
            _In_  UINT StartVertexLocation) = 0;

        virtual HRESULT STDMETHODCALLTYPE Map(
            /* [annotation] */
            _In_  ID3D11Resource* pResource,
            /* [annotation] */
            _In_  UINT Subresource,
            /* [annotation] */
            _In_  D3D11_MAP MapType,
            /* [annotation] */
            _In_  UINT MapFlags,
            /* [annotation] */
            _Out_opt_  D3D11_MAPPED_SUBRESOURCE* pMappedResource) = 0;

        virtual void STDMETHODCALLTYPE Unmap(
            /* [annotation] */
            _In_  ID3D11Resource* pResource,
            /* [annotation] */
            _In_  UINT Subresource) = 0;

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE IASetInputLayout(
            /* [annotation] */
            _In_opt_  ID3D11InputLayout* pInputLayout) = 0;

        virtual void STDMETHODCALLTYPE IASetVertexBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppVertexBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pStrides,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE IASetIndexBuffer(
            /* [annotation] */
            _In_opt_  ID3D11Buffer* pIndexBuffer,
            /* [annotation] */
            _In_  DXGI_FORMAT Format,
            /* [annotation] */
            _In_  UINT Offset) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexedInstanced(
            /* [annotation] */
            _In_  UINT IndexCountPerInstance,
            /* [annotation] */
            _In_  UINT InstanceCount,
            /* [annotation] */
            _In_  UINT StartIndexLocation,
            /* [annotation] */
            _In_  INT BaseVertexLocation,
            /* [annotation] */
            _In_  UINT StartInstanceLocation) = 0;

        virtual void STDMETHODCALLTYPE DrawInstanced(
            /* [annotation] */
            _In_  UINT VertexCountPerInstance,
            /* [annotation] */
            _In_  UINT InstanceCount,
            /* [annotation] */
            _In_  UINT StartVertexLocation,
            /* [annotation] */
            _In_  UINT StartInstanceLocation) = 0;

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE GSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11GeometryShader* pShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE IASetPrimitiveTopology(
            /* [annotation] */
            _In_  D3D11_PRIMITIVE_TOPOLOGY Topology) = 0;

        virtual void STDMETHODCALLTYPE VSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE VSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE Begin(
            /* [annotation] */
            _In_  ID3D11Asynchronous* pAsync) = 0;

        virtual void STDMETHODCALLTYPE End(
            /* [annotation] */
            _In_  ID3D11Asynchronous* pAsync) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetData(
            /* [annotation] */
            _In_  ID3D11Asynchronous* pAsync,
            /* [annotation] */
            _Out_writes_bytes_opt_(DataSize)  void* pData,
            /* [annotation] */
            _In_  UINT DataSize,
            /* [annotation] */
            _In_  UINT GetDataFlags) = 0;

        virtual void STDMETHODCALLTYPE SetPredication(
            /* [annotation] */
            _In_opt_  ID3D11Predicate* pPredicate,
            /* [annotation] */
            _In_  BOOL PredicateValue) = 0;

        virtual void STDMETHODCALLTYPE GSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE GSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE OMSetRenderTargets(
            /* [annotation] */
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            /* [annotation] */
            _In_opt_  ID3D11DepthStencilView* pDepthStencilView) = 0;

        virtual void STDMETHODCALLTYPE OMSetRenderTargetsAndUnorderedAccessViews(
            /* [annotation] */
            _In_  UINT NumRTVs,
            /* [annotation] */
            _In_reads_opt_(NumRTVs)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            /* [annotation] */
            _In_opt_  ID3D11DepthStencilView* pDepthStencilView,
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT UAVStartSlot,
            /* [annotation] */
            _In_  UINT NumUAVs,
            /* [annotation] */
            _In_reads_opt_(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            /* [annotation] */
            _In_reads_opt_(NumUAVs)  const UINT* pUAVInitialCounts) = 0;

        virtual void STDMETHODCALLTYPE OMSetBlendState(
            /* [annotation] */
            _In_opt_  ID3D11BlendState* pBlendState,
            /* [annotation] */
            _In_opt_  const FLOAT BlendFactor[ 4 ],
            /* [annotation] */
            _In_  UINT SampleMask) = 0;

        virtual void STDMETHODCALLTYPE OMSetDepthStencilState(
            /* [annotation] */
            _In_opt_  ID3D11DepthStencilState* pDepthStencilState,
            /* [annotation] */
            _In_  UINT StencilRef) = 0;

        virtual void STDMETHODCALLTYPE SOSetTargets(
            /* [annotation] */
            _In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppSOTargets,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE DrawAuto(void) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexedInstancedIndirect(
            /* [annotation] */
            _In_  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            _In_  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE DrawInstancedIndirect(
            /* [annotation] */
            _In_  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            _In_  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE Dispatch(
            /* [annotation] */
            _In_  UINT ThreadGroupCountX,
            /* [annotation] */
            _In_  UINT ThreadGroupCountY,
            /* [annotation] */
            _In_  UINT ThreadGroupCountZ) = 0;

        virtual void STDMETHODCALLTYPE DispatchIndirect(
            /* [annotation] */
            _In_  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            _In_  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE RSSetState(
            /* [annotation] */
            _In_opt_  ID3D11RasterizerState* pRasterizerState) = 0;

        virtual void STDMETHODCALLTYPE RSSetViewports(
            /* [annotation] */
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumViewports,
            /* [annotation] */
            _In_reads_opt_(NumViewports)  const D3D11_VIEWPORT* pViewports) = 0;

        virtual void STDMETHODCALLTYPE RSSetScissorRects(
            /* [annotation] */
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumRects,
            /* [annotation] */
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRects) = 0;

        virtual void STDMETHODCALLTYPE CopySubresourceRegion(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_  UINT DstX,
            /* [annotation] */
            _In_  UINT DstY,
            /* [annotation] */
            _In_  UINT DstZ,
            /* [annotation] */
            _In_  ID3D11Resource* pSrcResource,
            /* [annotation] */
            _In_  UINT SrcSubresource,
            /* [annotation] */
            _In_opt_  const D3D11_BOX* pSrcBox) = 0;

        virtual void STDMETHODCALLTYPE CopyResource(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  ID3D11Resource* pSrcResource) = 0;

        virtual void STDMETHODCALLTYPE UpdateSubresource(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_opt_  const D3D11_BOX* pDstBox,
            /* [annotation] */
            _In_  const void* pSrcData,
            /* [annotation] */
            _In_  UINT SrcRowPitch,
            /* [annotation] */
            _In_  UINT SrcDepthPitch) = 0;

        virtual void STDMETHODCALLTYPE CopyStructureCount(
            /* [annotation] */
            _In_  ID3D11Buffer* pDstBuffer,
            /* [annotation] */
            _In_  UINT DstAlignedByteOffset,
            /* [annotation] */
            _In_  ID3D11UnorderedAccessView* pSrcView) = 0;

        virtual void STDMETHODCALLTYPE ClearRenderTargetView(
            /* [annotation] */
            _In_  ID3D11RenderTargetView* pRenderTargetView,
            /* [annotation] */
            _In_  const FLOAT ColorRGBA[ 4 ]) = 0;

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewUint(
            /* [annotation] */
            _In_  ID3D11UnorderedAccessView* pUnorderedAccessView,
            /* [annotation] */
            _In_  const UINT Values[ 4 ]) = 0;

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewFloat(
            /* [annotation] */
            _In_  ID3D11UnorderedAccessView* pUnorderedAccessView,
            /* [annotation] */
            _In_  const FLOAT Values[ 4 ]) = 0;

        virtual void STDMETHODCALLTYPE ClearDepthStencilView(
            /* [annotation] */
            _In_  ID3D11DepthStencilView* pDepthStencilView,
            /* [annotation] */
            _In_  UINT ClearFlags,
            /* [annotation] */
            _In_  FLOAT Depth,
            /* [annotation] */
            _In_  UINT8 Stencil) = 0;

        virtual void STDMETHODCALLTYPE GenerateMips(
            /* [annotation] */
            _In_  ID3D11ShaderResourceView* pShaderResourceView) = 0;

        virtual void STDMETHODCALLTYPE SetResourceMinLOD(
            /* [annotation] */
            _In_  ID3D11Resource* pResource,
            FLOAT MinLOD) = 0;

        virtual FLOAT STDMETHODCALLTYPE GetResourceMinLOD(
            /* [annotation] */
            _In_  ID3D11Resource* pResource) = 0;

        virtual void STDMETHODCALLTYPE ResolveSubresource(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_  ID3D11Resource* pSrcResource,
            /* [annotation] */
            _In_  UINT SrcSubresource,
            /* [annotation] */
            _In_  DXGI_FORMAT Format) = 0;

        virtual void STDMETHODCALLTYPE ExecuteCommandList(
            /* [annotation] */
            _In_  ID3D11CommandList* pCommandList,
            BOOL RestoreContextState) = 0;

        virtual void STDMETHODCALLTYPE HSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE HSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11HullShader* pHullShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE HSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE DSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE DSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11DomainShader* pDomainShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE CSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE CSSetUnorderedAccessViews(
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot)  UINT NumUAVs,
            /* [annotation] */
            _In_reads_opt_(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            /* [annotation] */
            _In_reads_opt_(NumUAVs)  const UINT* pUAVInitialCounts) = 0;

        virtual void STDMETHODCALLTYPE CSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11ComputeShader* pComputeShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE CSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE PSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE PSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11PixelShader** ppPixelShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE VSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11VertexShader** ppVertexShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE IAGetInputLayout(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11InputLayout** ppInputLayout) = 0;

        virtual void STDMETHODCALLTYPE IAGetVertexBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppVertexBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pStrides,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE IAGetIndexBuffer(
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11Buffer** pIndexBuffer,
            /* [annotation] */
            _Out_opt_  DXGI_FORMAT* Format,
            /* [annotation] */
            _Out_opt_  UINT* Offset) = 0;

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE GSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11GeometryShader** ppGeometryShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE IAGetPrimitiveTopology(
            /* [annotation] */
            _Out_  D3D11_PRIMITIVE_TOPOLOGY* pTopology) = 0;

        virtual void STDMETHODCALLTYPE VSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE VSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE GetPredication(
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11Predicate** ppPredicate,
            /* [annotation] */
            _Out_opt_  BOOL* pPredicateValue) = 0;

        virtual void STDMETHODCALLTYPE GSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE GSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE OMGetRenderTargets(
            /* [annotation] */
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11RenderTargetView** ppRenderTargetViews,
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilView** ppDepthStencilView) = 0;

        virtual void STDMETHODCALLTYPE OMGetRenderTargetsAndUnorderedAccessViews(
            /* [annotation] */
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumRTVs,
            /* [annotation] */
            _Out_writes_opt_(NumRTVs)  ID3D11RenderTargetView** ppRenderTargetViews,
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilView** ppDepthStencilView,
            /* [annotation] */
            _In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT UAVStartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot)  UINT NumUAVs,
            /* [annotation] */
            _Out_writes_opt_(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) = 0;

        virtual void STDMETHODCALLTYPE OMGetBlendState(
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11BlendState** ppBlendState,
            /* [annotation] */
            _Out_opt_  FLOAT BlendFactor[ 4 ],
            /* [annotation] */
            _Out_opt_  UINT* pSampleMask) = 0;

        virtual void STDMETHODCALLTYPE OMGetDepthStencilState(
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilState** ppDepthStencilState,
            /* [annotation] */
            _Out_opt_  UINT* pStencilRef) = 0;

        virtual void STDMETHODCALLTYPE SOGetTargets(
            /* [annotation] */
            _In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppSOTargets) = 0;

        virtual void STDMETHODCALLTYPE RSGetState(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11RasterizerState** ppRasterizerState) = 0;

        virtual void STDMETHODCALLTYPE RSGetViewports(
            /* [annotation] */
            _Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumViewports,
            /* [annotation] */
            _Out_writes_opt_(*pNumViewports)  D3D11_VIEWPORT* pViewports) = 0;

        virtual void STDMETHODCALLTYPE RSGetScissorRects(
            /* [annotation] */
            _Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumRects,
            /* [annotation] */
            _Out_writes_opt_(*pNumRects)  D3D11_RECT* pRects) = 0;

        virtual void STDMETHODCALLTYPE HSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE HSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11HullShader** ppHullShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE HSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE DSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE DSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11DomainShader** ppDomainShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE CSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE CSGetUnorderedAccessViews(
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot)  UINT NumUAVs,
            /* [annotation] */
            _Out_writes_opt_(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) = 0;

        virtual void STDMETHODCALLTYPE CSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11ComputeShader** ppComputeShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE CSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE ClearState(void) = 0;

        virtual void STDMETHODCALLTYPE Flush(void) = 0;

        virtual D3D11_DEVICE_CONTEXT_TYPE STDMETHODCALLTYPE GetType(void) = 0;

        virtual UINT STDMETHODCALLTYPE GetContextFlags(void) = 0;

        virtual HRESULT STDMETHODCALLTYPE FinishCommandList(
            BOOL RestoreDeferredContextState,
            /* [annotation] */
            _COM_Outptr_opt_  ID3D11CommandList** ppCommandList) = 0;

    };

    MIDL_INTERFACE("bb2c6faa-b5fb-4082-8e6b-388b8cfa90e1")
        ID3D11DeviceContext1 : public ID3D11DeviceContext
    {
    public:
        virtual void STDMETHODCALLTYPE CopySubresourceRegion1(
            /* [annotation] */
            _In_  ID3D11Resource * pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_  UINT DstX,
            /* [annotation] */
            _In_  UINT DstY,
            /* [annotation] */
            _In_  UINT DstZ,
            /* [annotation] */
            _In_  ID3D11Resource * pSrcResource,
            /* [annotation] */
            _In_  UINT SrcSubresource,
            /* [annotation] */
            _In_opt_  const D3D11_BOX * pSrcBox,
            /* [annotation] */
            _In_  UINT CopyFlags) = 0;

        virtual void STDMETHODCALLTYPE UpdateSubresource1(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_opt_  const D3D11_BOX* pDstBox,
            /* [annotation] */
            _In_  const void* pSrcData,
            /* [annotation] */
            _In_  UINT SrcRowPitch,
            /* [annotation] */
            _In_  UINT SrcDepthPitch,
            /* [annotation] */
            _In_  UINT CopyFlags) = 0;

        virtual void STDMETHODCALLTYPE DiscardResource(
            /* [annotation] */
            _In_  ID3D11Resource* pResource) = 0;

        virtual void STDMETHODCALLTYPE DiscardView(
            /* [annotation] */
            _In_  ID3D11View* pResourceView) = 0;

        virtual void STDMETHODCALLTYPE VSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE SwapDeviceContextState(
            /* [annotation] */
            _In_  ID3DDeviceContextState* pState,
            /* [annotation] */
            _Outptr_opt_  ID3DDeviceContextState** ppPreviousState) = 0;

        virtual void STDMETHODCALLTYPE ClearView(
            /* [annotation] */
            _In_  ID3D11View* pView,
            /* [annotation] */
            _In_  const FLOAT Color[ 4 ],
            /* [annotation] */
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRect,
            UINT NumRects) = 0;

        virtual void STDMETHODCALLTYPE DiscardView1(
            /* [annotation] */
            _In_  ID3D11View* pResourceView,
            /* [annotation] */
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRects,
            UINT NumRects) = 0;

    };

    MIDL_INTERFACE("420d5b32-b90c-4da4-bef0-359f6a24a83a")
        ID3D11DeviceContext2 : public ID3D11DeviceContext1
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateTileMappings(
            /* [annotation] */
            _In_  ID3D11Resource * pTiledResource,
            /* [annotation] */
            _In_  UINT NumTiledResourceRegions,
            /* [annotation] */
            _In_reads_opt_(NumTiledResourceRegions)  const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates,
            /* [annotation] */
            _In_reads_opt_(NumTiledResourceRegions)  const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes,
            /* [annotation] */
            _In_opt_  ID3D11Buffer * pTilePool,
            /* [annotation] */
            _In_  UINT NumRanges,
            /* [annotation] */
            _In_reads_opt_(NumRanges)  const UINT * pRangeFlags,
            /* [annotation] */
            _In_reads_opt_(NumRanges)  const UINT * pTilePoolStartOffsets,
            /* [annotation] */
            _In_reads_opt_(NumRanges)  const UINT * pRangeTileCounts,
            /* [annotation] */
            _In_  UINT Flags) = 0;

        virtual HRESULT STDMETHODCALLTYPE CopyTileMappings(
            /* [annotation] */
            _In_  ID3D11Resource* pDestTiledResource,
            /* [annotation] */
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pDestRegionStartCoordinate,
            /* [annotation] */
            _In_  ID3D11Resource* pSourceTiledResource,
            /* [annotation] */
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pSourceRegionStartCoordinate,
            /* [annotation] */
            _In_  const D3D11_TILE_REGION_SIZE* pTileRegionSize,
            /* [annotation] */
            _In_  UINT Flags) = 0;

        virtual void STDMETHODCALLTYPE CopyTiles(
            /* [annotation] */
            _In_  ID3D11Resource* pTiledResource,
            /* [annotation] */
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pTileRegionStartCoordinate,
            /* [annotation] */
            _In_  const D3D11_TILE_REGION_SIZE* pTileRegionSize,
            /* [annotation] */
            _In_  ID3D11Buffer* pBuffer,
            /* [annotation] */
            _In_  UINT64 BufferStartOffsetInBytes,
            /* [annotation] */
            _In_  UINT Flags) = 0;

        virtual void STDMETHODCALLTYPE UpdateTiles(
            /* [annotation] */
            _In_  ID3D11Resource* pDestTiledResource,
            /* [annotation] */
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pDestTileRegionStartCoordinate,
            /* [annotation] */
            _In_  const D3D11_TILE_REGION_SIZE* pDestTileRegionSize,
            /* [annotation] */
            _In_  const void* pSourceTileData,
            /* [annotation] */
            _In_  UINT Flags) = 0;

        virtual HRESULT STDMETHODCALLTYPE ResizeTilePool(
            /* [annotation] */
            _In_  ID3D11Buffer* pTilePool,
            /* [annotation] */
            _In_  UINT64 NewSizeInBytes) = 0;

        virtual void STDMETHODCALLTYPE TiledResourceBarrier(
            /* [annotation] */
            _In_opt_  ID3D11DeviceChild* pTiledResourceOrViewAccessBeforeBarrier,
            /* [annotation] */
            _In_opt_  ID3D11DeviceChild* pTiledResourceOrViewAccessAfterBarrier) = 0;

        virtual BOOL STDMETHODCALLTYPE IsAnnotationEnabled(void) = 0;

        virtual void STDMETHODCALLTYPE SetMarkerInt(
            /* [annotation] */
            _In_  LPCWSTR pLabel,
            INT Data) = 0;

        virtual void STDMETHODCALLTYPE BeginEventInt(
            /* [annotation] */
            _In_  LPCWSTR pLabel,
            INT Data) = 0;

        virtual void STDMETHODCALLTYPE EndEvent(void) = 0;

    };

    // just for the guid :3
    D3DINTERFACE(ID3D11DeviceContextX, 48800095, 7134, 4be7, 91, 86, b8, 6b, ec, b2, 64, 77) {
    public:

    };

    class ID3D11DeviceContextX_Vtable : public ID3D11DeviceContext2 {
    public:
#pragma region AUTO_GENERATED
        virtual void STDMETHODCALLTYPE VSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) override {
            m_realDeviceCtx->VSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE PSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) override {
            m_realDeviceCtx->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE PSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11PixelShader* pPixelShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) override {
            m_realDeviceCtx->PSSetShader(pPixelShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE PSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) override {
            m_realDeviceCtx->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE VSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11VertexShader* pVertexShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) override {
            m_realDeviceCtx->VSSetShader(pVertexShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE DrawIndexed(
            /* [annotation] */
            _In_  UINT IndexCount,
            /* [annotation] */
            _In_  UINT StartIndexLocation,
            /* [annotation] */
            _In_  INT BaseVertexLocation) override {
            m_realDeviceCtx->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
        }

        virtual void STDMETHODCALLTYPE Draw(
            /* [annotation] */
            _In_  UINT VertexCount,
            /* [annotation] */
            _In_  UINT StartVertexLocation) override {
            m_realDeviceCtx->Draw(VertexCount, StartVertexLocation);
        }

        virtual HRESULT STDMETHODCALLTYPE Map(
            /* [annotation] */
            _In_  ID3D11Resource* pResource,
            /* [annotation] */
            _In_  UINT Subresource,
            /* [annotation] */
            _In_  D3D11_MAP MapType,
            /* [annotation] */
            _In_  UINT MapFlags,
            /* [annotation] */
            _Out_opt_  D3D11_MAPPED_SUBRESOURCE* pMappedResource) override {
            return m_realDeviceCtx->Map(pResource, Subresource, MapType, MapFlags, pMappedResource);
        }

        virtual void STDMETHODCALLTYPE Unmap(
            /* [annotation] */
            _In_  ID3D11Resource* pResource,
            /* [annotation] */
            _In_  UINT Subresource) override {
            m_realDeviceCtx->Unmap(pResource, Subresource);
        }

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) override {
            m_realDeviceCtx->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE IASetInputLayout(
            /* [annotation] */
            _In_opt_  ID3D11InputLayout* pInputLayout) override {
            m_realDeviceCtx->IASetInputLayout(pInputLayout);
        }

        virtual void STDMETHODCALLTYPE IASetVertexBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppVertexBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pStrides,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pOffsets) override {
            m_realDeviceCtx->IASetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
        }

        virtual void STDMETHODCALLTYPE IASetIndexBuffer(
            /* [annotation] */
            _In_opt_  ID3D11Buffer* pIndexBuffer,
            /* [annotation] */
            _In_  DXGI_FORMAT Format,
            /* [annotation] */
            _In_  UINT Offset) override {
            m_realDeviceCtx->IASetIndexBuffer(pIndexBuffer, Format, Offset);
        }

        virtual void STDMETHODCALLTYPE DrawIndexedInstanced(
            /* [annotation] */
            _In_  UINT IndexCountPerInstance,
            /* [annotation] */
            _In_  UINT InstanceCount,
            /* [annotation] */
            _In_  UINT StartIndexLocation,
            /* [annotation] */
            _In_  INT BaseVertexLocation,
            /* [annotation] */
            _In_  UINT StartInstanceLocation) override {
            m_realDeviceCtx->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
        }

        virtual void STDMETHODCALLTYPE DrawInstanced(
            /* [annotation] */
            _In_  UINT VertexCountPerInstance,
            /* [annotation] */
            _In_  UINT InstanceCount,
            /* [annotation] */
            _In_  UINT StartVertexLocation,
            /* [annotation] */
            _In_  UINT StartInstanceLocation) override {
            m_realDeviceCtx->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
        }

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) override {
            m_realDeviceCtx->GSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE GSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11GeometryShader* pShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) override {
            m_realDeviceCtx->GSSetShader(pShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE IASetPrimitiveTopology(
            /* [annotation] */
            _In_  D3D11_PRIMITIVE_TOPOLOGY Topology) override {
            m_realDeviceCtx->IASetPrimitiveTopology(Topology);
        }

        virtual void STDMETHODCALLTYPE VSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) override {
            m_realDeviceCtx->VSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE VSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) override {
            m_realDeviceCtx->VSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE Begin(
            /* [annotation] */
            _In_  ID3D11Asynchronous* pAsync) override {
            m_realDeviceCtx->Begin(pAsync);
        }

        virtual void STDMETHODCALLTYPE End(
            /* [annotation] */
            _In_  ID3D11Asynchronous* pAsync) override {
            m_realDeviceCtx->End(pAsync);
        }

        virtual HRESULT STDMETHODCALLTYPE GetData(
            /* [annotation] */
            _In_  ID3D11Asynchronous* pAsync,
            /* [annotation] */
            _Out_writes_bytes_opt_(DataSize)  void* pData,
            /* [annotation] */
            _In_  UINT DataSize,
            /* [annotation] */
            _In_  UINT GetDataFlags) override {
            return m_realDeviceCtx->GetData(pAsync, pData, DataSize, GetDataFlags);
        }

        virtual void STDMETHODCALLTYPE SetPredication(
            /* [annotation] */
            _In_opt_  ID3D11Predicate* pPredicate,
            /* [annotation] */
            _In_  BOOL PredicateValue) override {
            m_realDeviceCtx->SetPredication(pPredicate, PredicateValue);
        }

        virtual void STDMETHODCALLTYPE GSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) override {
            m_realDeviceCtx->GSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE GSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) override {
            m_realDeviceCtx->GSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE OMSetRenderTargets(
            /* [annotation] */
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            /* [annotation] */
            _In_opt_  ID3D11DepthStencilView* pDepthStencilView) override {
            m_realDeviceCtx->OMSetRenderTargets(NumViews, ppRenderTargetViews, pDepthStencilView);
        }

        virtual void STDMETHODCALLTYPE OMSetRenderTargetsAndUnorderedAccessViews(
            /* [annotation] */
            _In_  UINT NumRTVs,
            /* [annotation] */
            _In_reads_opt_(NumRTVs)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            /* [annotation] */
            _In_opt_  ID3D11DepthStencilView* pDepthStencilView,
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT UAVStartSlot,
            /* [annotation] */
            _In_  UINT NumUAVs,
            /* [annotation] */
            _In_reads_opt_(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            /* [annotation] */
            _In_reads_opt_(NumUAVs)  const UINT* pUAVInitialCounts) override {
            m_realDeviceCtx->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, pDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
        }

        virtual void STDMETHODCALLTYPE OMSetBlendState(
            /* [annotation] */
            _In_opt_  ID3D11BlendState* pBlendState,
            /* [annotation] */
            _In_opt_  const FLOAT BlendFactor[ 4 ],
            /* [annotation] */
            _In_  UINT SampleMask) override {
            m_realDeviceCtx->OMSetBlendState(pBlendState, BlendFactor, SampleMask);
        }

        virtual void STDMETHODCALLTYPE OMSetDepthStencilState(
            /* [annotation] */
            _In_opt_  ID3D11DepthStencilState* pDepthStencilState,
            /* [annotation] */
            _In_  UINT StencilRef) override {
            m_realDeviceCtx->OMSetDepthStencilState(pDepthStencilState, StencilRef);
        }

        virtual void STDMETHODCALLTYPE SOSetTargets(
            /* [annotation] */
            _In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppSOTargets,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pOffsets) override {
            m_realDeviceCtx->SOSetTargets(NumBuffers, ppSOTargets, pOffsets);
        }

        virtual void STDMETHODCALLTYPE DrawAuto(void) override {
            m_realDeviceCtx->DrawAuto( );
        }

        virtual void STDMETHODCALLTYPE DrawIndexedInstancedIndirect(
            /* [annotation] */
            _In_  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            _In_  UINT AlignedByteOffsetForArgs) override {
            m_realDeviceCtx->DrawIndexedInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
        }

        virtual void STDMETHODCALLTYPE DrawInstancedIndirect(
            /* [annotation] */
            _In_  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            _In_  UINT AlignedByteOffsetForArgs) override {
            m_realDeviceCtx->DrawInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
        }

        virtual void STDMETHODCALLTYPE Dispatch(
            /* [annotation] */
            _In_  UINT ThreadGroupCountX,
            /* [annotation] */
            _In_  UINT ThreadGroupCountY,
            /* [annotation] */
            _In_  UINT ThreadGroupCountZ) override {
            m_realDeviceCtx->Dispatch(ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
        }

        virtual void STDMETHODCALLTYPE DispatchIndirect(
            /* [annotation] */
            _In_  ID3D11Buffer* pBufferForArgs,
            /* [annotation] */
            _In_  UINT AlignedByteOffsetForArgs) override {
            m_realDeviceCtx->DispatchIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
        }

        virtual void STDMETHODCALLTYPE RSSetState(
            /* [annotation] */
            _In_opt_  ID3D11RasterizerState* pRasterizerState) override {
            m_realDeviceCtx->RSSetState(pRasterizerState);
        }

        virtual void STDMETHODCALLTYPE RSSetViewports(
            /* [annotation] */
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumViewports,
            /* [annotation] */
            _In_reads_opt_(NumViewports)  const D3D11_VIEWPORT* pViewports) override {
            m_realDeviceCtx->RSSetViewports(NumViewports, pViewports);
        }

        virtual void STDMETHODCALLTYPE RSSetScissorRects(
            /* [annotation] */
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumRects,
            /* [annotation] */
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRects) override {
            m_realDeviceCtx->RSSetScissorRects(NumRects, pRects);
        }

        virtual void STDMETHODCALLTYPE CopySubresourceRegion(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_  UINT DstX,
            /* [annotation] */
            _In_  UINT DstY,
            /* [annotation] */
            _In_  UINT DstZ,
            /* [annotation] */
            _In_  ID3D11Resource* pSrcResource,
            /* [annotation] */
            _In_  UINT SrcSubresource,
            /* [annotation] */
            _In_opt_  const D3D11_BOX* pSrcBox) override {
            m_realDeviceCtx->CopySubresourceRegion(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox);
        }

        virtual void STDMETHODCALLTYPE CopyResource(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  ID3D11Resource* pSrcResource) override {
            m_realDeviceCtx->CopyResource(pDstResource, pSrcResource);
        }

        virtual void STDMETHODCALLTYPE UpdateSubresource(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_opt_  const D3D11_BOX* pDstBox,
            /* [annotation] */
            _In_  const void* pSrcData,
            /* [annotation] */
            _In_  UINT SrcRowPitch,
            /* [annotation] */
            _In_  UINT SrcDepthPitch) override {
            m_realDeviceCtx->UpdateSubresource(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
        }

        virtual void STDMETHODCALLTYPE CopyStructureCount(
            /* [annotation] */
            _In_  ID3D11Buffer* pDstBuffer,
            /* [annotation] */
            _In_  UINT DstAlignedByteOffset,
            /* [annotation] */
            _In_  ID3D11UnorderedAccessView* pSrcView) override {
            m_realDeviceCtx->CopyStructureCount(pDstBuffer, DstAlignedByteOffset, pSrcView);
        }

        virtual void STDMETHODCALLTYPE ClearRenderTargetView(
            /* [annotation] */
            _In_  ID3D11RenderTargetView* pRenderTargetView,
            /* [annotation] */
            _In_  const FLOAT ColorRGBA[ 4 ]) override {
            m_realDeviceCtx->ClearRenderTargetView(pRenderTargetView, ColorRGBA);
        }

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewUint(
            /* [annotation] */
            _In_  ID3D11UnorderedAccessView* pUnorderedAccessView,
            /* [annotation] */
            _In_  const UINT Values[ 4 ]) override {
            m_realDeviceCtx->ClearUnorderedAccessViewUint(pUnorderedAccessView, Values);
        }

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewFloat(
            /* [annotation] */
            _In_  ID3D11UnorderedAccessView* pUnorderedAccessView,
            /* [annotation] */
            _In_  const FLOAT Values[ 4 ]) override {
            m_realDeviceCtx->ClearUnorderedAccessViewFloat(pUnorderedAccessView, Values);
        }

        virtual void STDMETHODCALLTYPE ClearDepthStencilView(
            /* [annotation] */
            _In_  ID3D11DepthStencilView* pDepthStencilView,
            /* [annotation] */
            _In_  UINT ClearFlags,
            /* [annotation] */
            _In_  FLOAT Depth,
            /* [annotation] */
            _In_  UINT8 Stencil) override {
            m_realDeviceCtx->ClearDepthStencilView(pDepthStencilView, ClearFlags, Depth, Stencil);
        }

        virtual void STDMETHODCALLTYPE GenerateMips(
            /* [annotation] */
            _In_  ID3D11ShaderResourceView* pShaderResourceView) override {
            m_realDeviceCtx->GenerateMips(pShaderResourceView);
        }

        virtual void STDMETHODCALLTYPE SetResourceMinLOD(
            /* [annotation] */
            _In_  ID3D11Resource* pResource,
            FLOAT MinLOD) override {
            m_realDeviceCtx->SetResourceMinLOD(pResource, MinLOD);
        }

        virtual FLOAT STDMETHODCALLTYPE GetResourceMinLOD(
            /* [annotation] */
            _In_  ID3D11Resource* pResource) override {
            return m_realDeviceCtx->GetResourceMinLOD(pResource);
        }

        virtual void STDMETHODCALLTYPE ResolveSubresource(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_  ID3D11Resource* pSrcResource,
            /* [annotation] */
            _In_  UINT SrcSubresource,
            /* [annotation] */
            _In_  DXGI_FORMAT Format) override {
            m_realDeviceCtx->ResolveSubresource(pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
        }

        virtual void STDMETHODCALLTYPE ExecuteCommandList(
            /* [annotation] */
            _In_  ID3D11CommandList* pCommandList,
            BOOL RestoreContextState) override {
            m_realDeviceCtx->ExecuteCommandList(pCommandList, RestoreContextState);
        }

        virtual void STDMETHODCALLTYPE HSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) override {
            m_realDeviceCtx->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE HSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11HullShader* pHullShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) override {
            m_realDeviceCtx->HSSetShader(pHullShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE HSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) override {
            m_realDeviceCtx->HSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) override {
            m_realDeviceCtx->HSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE DSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) override {
            m_realDeviceCtx->DSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE DSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11DomainShader* pDomainShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) override {
            m_realDeviceCtx->DSSetShader(pDomainShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE DSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) override {
            m_realDeviceCtx->DSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) override {
            m_realDeviceCtx->DSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE CSSetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) override {
            m_realDeviceCtx->CSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE CSSetUnorderedAccessViews(
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot)  UINT NumUAVs,
            /* [annotation] */
            _In_reads_opt_(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            /* [annotation] */
            _In_reads_opt_(NumUAVs)  const UINT* pUAVInitialCounts) override {
            m_realDeviceCtx->CSSetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
        }

        virtual void STDMETHODCALLTYPE CSSetShader(
            /* [annotation] */
            _In_opt_  ID3D11ComputeShader* pComputeShader,
            /* [annotation] */
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) override {
            m_realDeviceCtx->CSSetShader(pComputeShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE CSSetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) override {
            m_realDeviceCtx->CSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) override {
            m_realDeviceCtx->CSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) override {
            m_realDeviceCtx->VSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE PSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) override {
            m_realDeviceCtx->PSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE PSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11PixelShader** ppPixelShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) override {
            m_realDeviceCtx->PSGetShader(ppPixelShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE PSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) override {
            m_realDeviceCtx->PSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE VSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11VertexShader** ppVertexShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) override {
            m_realDeviceCtx->VSGetShader(ppVertexShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) override {
            m_realDeviceCtx->PSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE IAGetInputLayout(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11InputLayout** ppInputLayout) override {
            m_realDeviceCtx->IAGetInputLayout(ppInputLayout);
        }

        virtual void STDMETHODCALLTYPE IAGetVertexBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppVertexBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pStrides,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pOffsets) override {
            m_realDeviceCtx->IAGetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
        }

        virtual void STDMETHODCALLTYPE IAGetIndexBuffer(
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11Buffer** pIndexBuffer,
            /* [annotation] */
            _Out_opt_  DXGI_FORMAT* Format,
            /* [annotation] */
            _Out_opt_  UINT* Offset) override {
            m_realDeviceCtx->IAGetIndexBuffer(pIndexBuffer, Format, Offset);
        }

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) override {
            m_realDeviceCtx->GSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE GSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11GeometryShader** ppGeometryShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) override {
            m_realDeviceCtx->GSGetShader(ppGeometryShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE IAGetPrimitiveTopology(
            /* [annotation] */
            _Out_  D3D11_PRIMITIVE_TOPOLOGY* pTopology) override {
            m_realDeviceCtx->IAGetPrimitiveTopology(pTopology);
        }

        virtual void STDMETHODCALLTYPE VSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) override {
            m_realDeviceCtx->VSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE VSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) override {
            m_realDeviceCtx->VSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE GetPredication(
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11Predicate** ppPredicate,
            /* [annotation] */
            _Out_opt_  BOOL* pPredicateValue) override {
            m_realDeviceCtx->GetPredication(ppPredicate, pPredicateValue);
        }

        virtual void STDMETHODCALLTYPE GSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) override {
            m_realDeviceCtx->GSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE GSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) override {
            m_realDeviceCtx->GSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE OMGetRenderTargets(
            /* [annotation] */
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11RenderTargetView** ppRenderTargetViews,
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilView** ppDepthStencilView) override {
            m_realDeviceCtx->OMGetRenderTargets(NumViews, ppRenderTargetViews, ppDepthStencilView);
        }

        virtual void STDMETHODCALLTYPE OMGetRenderTargetsAndUnorderedAccessViews(
            /* [annotation] */
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumRTVs,
            /* [annotation] */
            _Out_writes_opt_(NumRTVs)  ID3D11RenderTargetView** ppRenderTargetViews,
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilView** ppDepthStencilView,
            /* [annotation] */
            _In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT UAVStartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot)  UINT NumUAVs,
            /* [annotation] */
            _Out_writes_opt_(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) override {
            m_realDeviceCtx->OMGetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, ppDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews);
        }

        virtual void STDMETHODCALLTYPE OMGetBlendState(
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11BlendState** ppBlendState,
            /* [annotation] */
            _Out_opt_  FLOAT BlendFactor[ 4 ],
            /* [annotation] */
            _Out_opt_  UINT* pSampleMask) override {
            m_realDeviceCtx->OMGetBlendState(ppBlendState, BlendFactor, pSampleMask);
        }

        virtual void STDMETHODCALLTYPE OMGetDepthStencilState(
            /* [annotation] */
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilState** ppDepthStencilState,
            /* [annotation] */
            _Out_opt_  UINT* pStencilRef) override {
            m_realDeviceCtx->OMGetDepthStencilState(ppDepthStencilState, pStencilRef);
        }

        virtual void STDMETHODCALLTYPE SOGetTargets(
            /* [annotation] */
            _In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppSOTargets) override {
            m_realDeviceCtx->SOGetTargets(NumBuffers, ppSOTargets);
        }

        virtual void STDMETHODCALLTYPE RSGetState(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11RasterizerState** ppRasterizerState) override {
            m_realDeviceCtx->RSGetState(ppRasterizerState);
        }

        virtual void STDMETHODCALLTYPE RSGetViewports(
            /* [annotation] */
            _Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumViewports,
            /* [annotation] */
            _Out_writes_opt_(*pNumViewports)  D3D11_VIEWPORT* pViewports) override {
            m_realDeviceCtx->RSGetViewports(pNumViewports, pViewports);
        }

        virtual void STDMETHODCALLTYPE RSGetScissorRects(
            /* [annotation] */
            _Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumRects,
            /* [annotation] */
            _Out_writes_opt_(*pNumRects)  D3D11_RECT* pRects) override {
            m_realDeviceCtx->RSGetScissorRects(pNumRects, pRects);
        }

        virtual void STDMETHODCALLTYPE HSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) override {
            m_realDeviceCtx->HSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE HSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11HullShader** ppHullShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) override {
            m_realDeviceCtx->HSGetShader(ppHullShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE HSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) override {
            m_realDeviceCtx->HSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) override {
            m_realDeviceCtx->HSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE DSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) override {
            m_realDeviceCtx->DSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE DSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11DomainShader** ppDomainShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) override {
            m_realDeviceCtx->DSGetShader(ppDomainShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE DSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) override {
            m_realDeviceCtx->DSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) override {
            m_realDeviceCtx->DSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE CSGetShaderResources(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            /* [annotation] */
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) override {
            m_realDeviceCtx->CSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE CSGetUnorderedAccessViews(
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot)  UINT NumUAVs,
            /* [annotation] */
            _Out_writes_opt_(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) override {
            m_realDeviceCtx->CSGetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews);
        }

        virtual void STDMETHODCALLTYPE CSGetShader(
            /* [annotation] */
            _Outptr_result_maybenull_  ID3D11ComputeShader** ppComputeShader,
            /* [annotation] */
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            /* [annotation] */
            _Inout_opt_  UINT* pNumClassInstances) override {
            m_realDeviceCtx->CSGetShader(ppComputeShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE CSGetSamplers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            /* [annotation] */
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) override {
            m_realDeviceCtx->CSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) override {
            m_realDeviceCtx->CSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE ClearState(void) override {
            m_realDeviceCtx->ClearState( );
        }

        virtual void STDMETHODCALLTYPE Flush(void) override {
            m_realDeviceCtx->Flush( );
        }

        virtual D3D11_DEVICE_CONTEXT_TYPE STDMETHODCALLTYPE GetType(void) override {
            return m_realDeviceCtx->GetType( );
        }

        virtual UINT STDMETHODCALLTYPE GetContextFlags(void) override {
            return m_realDeviceCtx->GetContextFlags( );
        }

        virtual HRESULT STDMETHODCALLTYPE FinishCommandList(
            BOOL RestoreDeferredContextState,
            /* [annotation] */
            _COM_Outptr_opt_  ID3D11CommandList** ppCommandList) override {
            return m_realDeviceCtx->FinishCommandList(RestoreDeferredContextState, ppCommandList);
        }

        virtual void STDMETHODCALLTYPE CopySubresourceRegion1(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_  UINT DstX,
            /* [annotation] */
            _In_  UINT DstY,
            /* [annotation] */
            _In_  UINT DstZ,
            /* [annotation] */
            _In_  ID3D11Resource* pSrcResource,
            /* [annotation] */
            _In_  UINT SrcSubresource,
            /* [annotation] */
            _In_opt_  const D3D11_BOX* pSrcBox,
            /* [annotation] */
            _In_  UINT CopyFlags) override {
            m_realDeviceCtx->CopySubresourceRegion1(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox, CopyFlags);
        }

        virtual void STDMETHODCALLTYPE UpdateSubresource1(
            /* [annotation] */
            _In_  ID3D11Resource* pDstResource,
            /* [annotation] */
            _In_  UINT DstSubresource,
            /* [annotation] */
            _In_opt_  const D3D11_BOX* pDstBox,
            /* [annotation] */
            _In_  const void* pSrcData,
            /* [annotation] */
            _In_  UINT SrcRowPitch,
            /* [annotation] */
            _In_  UINT SrcDepthPitch,
            /* [annotation] */
            _In_  UINT CopyFlags) override {
            m_realDeviceCtx->UpdateSubresource1(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch, CopyFlags);
        }

        virtual void STDMETHODCALLTYPE DiscardResource(
            /* [annotation] */
            _In_  ID3D11Resource* pResource) override {
            m_realDeviceCtx->DiscardResource(pResource);
        }

        virtual void STDMETHODCALLTYPE DiscardView(
            /* [annotation] */
            _In_  ID3D11View* pResourceView) override {
            m_realDeviceCtx->DiscardView(pResourceView);
        }

        virtual void STDMETHODCALLTYPE VSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) override {
            m_realDeviceCtx->VSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) override {
            m_realDeviceCtx->HSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) override {
            m_realDeviceCtx->DSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) override {
            m_realDeviceCtx->GSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) override {
            m_realDeviceCtx->PSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            /* [annotation] */
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) override {
            m_realDeviceCtx->CSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) override {
            m_realDeviceCtx->VSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) override {
            m_realDeviceCtx->HSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) override {
            m_realDeviceCtx->DSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) override {
            m_realDeviceCtx->GSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) override {
            m_realDeviceCtx->PSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers1(
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            /* [annotation] */
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            /* [annotation] */
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) override {
            m_realDeviceCtx->CSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE SwapDeviceContextState(
            /* [annotation] */
            _In_  ID3DDeviceContextState* pState,
            /* [annotation] */
            _Outptr_opt_  ID3DDeviceContextState** ppPreviousState) override {
            m_realDeviceCtx->SwapDeviceContextState(pState, ppPreviousState);
        }

        virtual void STDMETHODCALLTYPE ClearView(
            /* [annotation] */
            _In_  ID3D11View* pView,
            /* [annotation] */
            _In_  const FLOAT Color[ 4 ],
            /* [annotation] */
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRect,
            UINT NumRects) override {
            m_realDeviceCtx->ClearView(pView, Color, pRect, NumRects);
        }

        virtual void STDMETHODCALLTYPE DiscardView1(
            /* [annotation] */
            _In_  ID3D11View* pResourceView,
            /* [annotation] */
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRects,
            UINT NumRects) override {
            m_realDeviceCtx->DiscardView1(pResourceView, pRects, NumRects);
        }

        virtual HRESULT STDMETHODCALLTYPE UpdateTileMappings(
            /* [annotation] */
            _In_  ID3D11Resource* pTiledResource,
            /* [annotation] */
            _In_  UINT NumTiledResourceRegions,
            /* [annotation] */
            _In_reads_opt_(NumTiledResourceRegions)  const D3D11_TILED_RESOURCE_COORDINATE* pTiledResourceRegionStartCoordinates,
            /* [annotation] */
            _In_reads_opt_(NumTiledResourceRegions)  const D3D11_TILE_REGION_SIZE* pTiledResourceRegionSizes,
            /* [annotation] */
            _In_opt_  ID3D11Buffer* pTilePool,
            /* [annotation] */
            _In_  UINT NumRanges,
            /* [annotation] */
            _In_reads_opt_(NumRanges)  const UINT* pRangeFlags,
            /* [annotation] */
            _In_reads_opt_(NumRanges)  const UINT* pTilePoolStartOffsets,
            /* [annotation] */
            _In_reads_opt_(NumRanges)  const UINT* pRangeTileCounts,
            /* [annotation] */
            _In_  UINT Flags) override {
            return m_realDeviceCtx->UpdateTileMappings(pTiledResource, NumTiledResourceRegions, pTiledResourceRegionStartCoordinates, pTiledResourceRegionSizes, pTilePool, NumRanges, pRangeFlags, pTilePoolStartOffsets, pRangeTileCounts, Flags);
        }

        virtual HRESULT STDMETHODCALLTYPE CopyTileMappings(
            /* [annotation] */
            _In_  ID3D11Resource* pDestTiledResource,
            /* [annotation] */
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pDestRegionStartCoordinate,
            /* [annotation] */
            _In_  ID3D11Resource* pSourceTiledResource,
            /* [annotation] */
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pSourceRegionStartCoordinate,
            /* [annotation] */
            _In_  const D3D11_TILE_REGION_SIZE* pTileRegionSize,
            /* [annotation] */
            _In_  UINT Flags) override {
            return m_realDeviceCtx->CopyTileMappings(pDestTiledResource, pDestRegionStartCoordinate, pSourceTiledResource, pSourceRegionStartCoordinate, pTileRegionSize, Flags);
        }

        virtual void STDMETHODCALLTYPE CopyTiles(
            /* [annotation] */
            _In_  ID3D11Resource* pTiledResource,
            /* [annotation] */
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pTileRegionStartCoordinate,
            /* [annotation] */
            _In_  const D3D11_TILE_REGION_SIZE* pTileRegionSize,
            /* [annotation] */
            _In_  ID3D11Buffer* pBuffer,
            /* [annotation] */
            _In_  UINT64 BufferStartOffsetInBytes,
            /* [annotation] */
            _In_  UINT Flags) override {
            m_realDeviceCtx->CopyTiles(pTiledResource, pTileRegionStartCoordinate, pTileRegionSize, pBuffer, BufferStartOffsetInBytes, Flags);
        }

        virtual void STDMETHODCALLTYPE UpdateTiles(
            /* [annotation] */
            _In_  ID3D11Resource* pDestTiledResource,
            /* [annotation] */
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pDestTileRegionStartCoordinate,
            /* [annotation] */
            _In_  const D3D11_TILE_REGION_SIZE* pDestTileRegionSize,
            /* [annotation] */
            _In_  const void* pSourceTileData,
            /* [annotation] */
            _In_  UINT Flags) override {
            m_realDeviceCtx->UpdateTiles(pDestTiledResource, pDestTileRegionStartCoordinate, pDestTileRegionSize, pSourceTileData, Flags);
        }

        virtual HRESULT STDMETHODCALLTYPE ResizeTilePool(
            /* [annotation] */
            _In_  ID3D11Buffer* pTilePool,
            /* [annotation] */
            _In_  UINT64 NewSizeInBytes) override {
            return m_realDeviceCtx->ResizeTilePool(pTilePool, NewSizeInBytes);
        }

        virtual void STDMETHODCALLTYPE TiledResourceBarrier(
            /* [annotation] */
            _In_opt_  ID3D11DeviceChild* pTiledResourceOrViewAccessBeforeBarrier,
            /* [annotation] */
            _In_opt_  ID3D11DeviceChild* pTiledResourceOrViewAccessAfterBarrier) override {
            m_realDeviceCtx->TiledResourceBarrier(pTiledResourceOrViewAccessBeforeBarrier, pTiledResourceOrViewAccessAfterBarrier);
        }

        virtual BOOL STDMETHODCALLTYPE IsAnnotationEnabled(void) override {
            return m_realDeviceCtx->IsAnnotationEnabled( );
        }

        virtual void STDMETHODCALLTYPE SetMarkerInt(
            /* [annotation] */
            _In_  LPCWSTR pLabel,
            INT Data) override {
            m_realDeviceCtx->SetMarkerInt(pLabel, Data);
        }

        virtual void STDMETHODCALLTYPE BeginEventInt(
            /* [annotation] */
            _In_  LPCWSTR pLabel,
            INT Data) override {
            m_realDeviceCtx->BeginEventInt(pLabel, Data);
        }

        virtual void STDMETHODCALLTYPE EndEvent(void) override {
            m_realDeviceCtx->EndEvent( );
        }
#pragma endregion

        HRESULT QueryInterface(REFIID riid, void** ppvObject) override {
            return m_parentWrapper->QueryInterface(riid, ppvObject);
        }

        ULONG AddRef( ) override {
            return m_parentWrapper->AddRef( );
        }

        ULONG Release( ) override {
            return m_parentWrapper->Release( );
        }

        virtual void STDMETHODCALLTYPE GetDevice(
            /* [annotation] */
            _Outptr_  ID3D11Device** ppDevice) override {
            return m_parentWrapper->GetDevice(ppDevice);
        }

        virtual HRESULT STDMETHODCALLTYPE GetPrivateData(
            /* [annotation] */
            _In_  REFGUID guid,
            /* [annotation] */
            _Inout_  UINT* pDataSize,
            /* [annotation] */
            _Out_writes_bytes_opt_(*pDataSize)  void* pData) override {
            return m_parentWrapper->GetPrivateData(guid, pDataSize, pData);
        }

        virtual HRESULT STDMETHODCALLTYPE SetPrivateData(
            /* [annotation] */
            _In_  REFGUID guid,
            /* [annotation] */
            _In_  UINT DataSize,
            /* [annotation] */
            _In_reads_bytes_opt_(DataSize)  const void* pData) override {
            return m_parentWrapper->SetPrivateData(guid, DataSize, pData);
        }

        virtual HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(
            /* [annotation] */
            _In_  REFGUID guid,
            /* [annotation] */
            _In_opt_  const IUnknown* pData) override {
            return m_parentWrapper->SetPrivateDataInterface(guid, pData);
        }


        virtual HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override {
            return m_parentWrapper->SetName(name);
        }

        virtual int PIXBeginEvent(const wchar_t*);
        virtual int PIXBeginEventEx(const void*, unsigned int);
        virtual int PIXEndEvent(ID3D11DeviceContextX*);
        virtual void PIXSetMarker(const wchar_t*);
        virtual void PIXSetMarkerEx(const void*, unsigned int);
        virtual int PIXGetStatus(ID3D11DeviceContextX*);
        virtual HRESULT PIXGpuCaptureNextFrame(unsigned int, const wchar_t*);
        virtual HRESULT PIXGpuBeginCapture(unsigned int, const wchar_t*);
        virtual HRESULT PIXGpuEndCapture(ID3D11DeviceContextX*);
        virtual void StartCounters(ID3D11CounterSetX*);
        virtual void SampleCounters(ID3D11CounterSampleX*);
        virtual void StopCounters(ID3D11DeviceContextX*);
        virtual HRESULT GetCounterData(ID3D11CounterSampleX*, D3D11X_COUNTER_DATA*, unsigned int);
        virtual void FlushGpuCaches(ID3D11Resource*);
        virtual void FlushGpuCacheRange(unsigned int, void*, unsigned __int64);
        virtual void InsertWaitUntilIdle(unsigned int);
        virtual unsigned __int64 InsertFence(unsigned int);
        virtual void InsertWaitOnFence(unsigned int, unsigned __int64);
        virtual void RemapConstantBufferInheritance(D3D11_STAGE, unsigned int, D3D11_STAGE, unsigned int);
        virtual void RemapShaderResourceInheritance(D3D11_STAGE, unsigned int, D3D11_STAGE, unsigned int);
        virtual void RemapSamplerInheritance(D3D11_STAGE, unsigned int, D3D11_STAGE, unsigned int);
        virtual void RemapVertexBufferInheritance(unsigned int, unsigned int);
        virtual void PSSetFastConstantBuffer(unsigned int, ID3D11Buffer*);
        virtual void PSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*);
        virtual void PSSetFastSampler(unsigned int, ID3D11SamplerState*);
        virtual void VSSetFastConstantBuffer(unsigned int, ID3D11Buffer*);
        virtual void VSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*);
        virtual void VSSetFastSampler(unsigned int, ID3D11SamplerState*);
        virtual void GSSetFastConstantBuffer(unsigned int, ID3D11Buffer*);
        virtual void GSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*);
        virtual void GSSetFastSampler(unsigned int, ID3D11SamplerState*);
        virtual void CSSetFastConstantBuffer(unsigned int, ID3D11Buffer*);
        virtual void CSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*);
        virtual void CSSetFastSampler(unsigned int, ID3D11SamplerState*);
        virtual void HSSetFastConstantBuffer(unsigned int, ID3D11Buffer*);
        virtual void HSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*);
        virtual void HSSetFastSampler(unsigned int, ID3D11SamplerState*);
        virtual void DSSetFastConstantBuffer(unsigned int, ID3D11Buffer*);
        virtual void DSSetFastShaderResource(unsigned int, ID3D11ShaderResourceView*);
        virtual void DSSetFastSampler(unsigned int, ID3D11SamplerState*);
        virtual void IASetFastVertexBuffer(unsigned int, ID3D11Buffer*, unsigned int);
        virtual void IASetFastIndexBuffer(unsigned int, ID3D11Buffer*);
        virtual void PSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*);
        virtual void PSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*);
        virtual void VSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*);
        virtual void VSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*);
        virtual void GSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*);
        virtual void GSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*);
        virtual void CSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*);
        virtual void CSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*);
        virtual void HSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*);
        virtual void HSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*);
        virtual void DSSetPlacementConstantBuffer(unsigned int, ID3D11Buffer*, void*);
        virtual void DSSetPlacementShaderResource(unsigned int, ID3D11ShaderResourceView*, void*);
        virtual void IASetPlacementVertexBuffer(unsigned int, ID3D11Buffer*, void*, unsigned int);
        virtual void IASetPlacementIndexBuffer(unsigned int, ID3D11Buffer*, void*);
        virtual void HSSetTessellationParameters(const D3D11X_TESSELLATION_PARAMETERS*);
        virtual void HSGetLastUsedTessellationParameters(D3D11X_TESSELLATION_PARAMETERS*);
        virtual void CSEnableAutomaticGpuFlush(int);
        virtual void GpuSendPipelinedEvent(D3D11X_GPU_PIPELINED_EVENT);
        virtual HRESULT Suspend(unsigned int);
        virtual HRESULT Resume(ID3D11DeviceContextX*);
        virtual void BeginCommandListExecution(ID3D11DeviceContext*, unsigned int);
        virtual void EndCommandListExecution(ID3D11DeviceContext*);
        virtual void SetGraphicsShaderLimits(const D3D11X_GRAPHICS_SHADER_LIMITS*);
        virtual void SetComputeShaderLimits(const D3D11X_COMPUTE_SHADER_LIMITS*);
        virtual void SetPredicationBuffer(ID3D11Buffer*, unsigned int, unsigned int);
        virtual void OMSetDepthBounds(float, float);
        virtual void OMSetDepthStencilStateX(ID3D11DepthStencilState*);
        virtual void OMSetSampleMask(unsigned __int64);
        virtual unsigned int* MakeCeSpace();
        virtual void SetFastResources_Debug(unsigned int*, unsigned int*);
        virtual void BeginResourceBatch(void*, unsigned int);
        virtual unsigned int EndResourceBatch(unsigned int*);
        virtual void SetFastResourcesFromBatch_Debug(void*, unsigned int);
        virtual void CSPlaceUnorderedAccessView(unsigned int, D3D11X_DESCRIPTOR_UNORDERED_ACCESS_VIEW* const, unsigned __int64);
        virtual void WriteValueEndOfPipe(void*, unsigned int, unsigned int);
        virtual void CopyMemoryToMemory(void*, void*, unsigned __int64);
        virtual void FillMemoryWithValue(void*, unsigned __int64, unsigned int);
        virtual void BeginProcessVideoResource(ID3D11Resource*, unsigned int);
        virtual void EndProcessVideoResource(ID3D11Resource*, unsigned int);
        virtual HRESULT StartThreadTrace(const D3D11X_THREAD_TRACE_DESC*, void*, void*, unsigned __int64);
        virtual void StopThreadTrace(void*);
        virtual void InsertThreadTraceMarker(unsigned int);
        virtual void IASetPrimitiveResetIndex(unsigned int);
        virtual void SetShaderResourceViewMinLOD(ID3D11ShaderResourceView*, float);
        virtual void InsertWaitOnPresent(unsigned int, ID3D11Resource*);
        virtual void ClearRenderTargetViewX(ID3D11RenderTargetView*, unsigned int, const float*);
        virtual unsigned int GetResourceCompression(ID3D11Resource*);
        virtual unsigned int GetResourceCompressionX(const D3D11X_DESCRIPTOR_RESOURCE*);
        virtual void DecompressResource(ID3D11Resource*, unsigned int, const tagPOINT*, ID3D11Resource*, unsigned int, const tagRECT*, DXGI_FORMAT, unsigned int);
        virtual void DecompressResourceX(D3D11X_DESCRIPTOR_RESOURCE*, unsigned int, const tagPOINT*, D3D11X_DESCRIPTOR_RESOURCE*, unsigned int, const tagRECT*, D3D11X_FORMAT, unsigned int);
        virtual void GSSetParameters(const D3D11X_GS_PARAMETERS*);
        virtual void GSGetLastUsedParameters(D3D11X_GS_PARAMETERS*);
        virtual void MultiDrawIndexedInstancedIndirect(unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int);
        virtual void MultiDrawInstancedIndirect(unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int);
        virtual void MultiDrawIndexedInstancedIndirectAuto(ID3D11Buffer*, unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int);
        virtual void MultiDrawInstancedIndirectAuto(ID3D11Buffer*, unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int);
        virtual HRESULT RSGetMSAASettingsForQuality(_D3D11X_MSAA_SCAN_CONVERTER_SETTINGS*, _D3D11X_MSAA_EQAA_SETTINGS*, _D3D11X_MSAA_SAMPLE_PRIORITIES*, _D3D11X_MSAA_SAMPLE_POSITIONS*, unsigned int, unsigned int);
        virtual void RSSetScanConverterMSAASettings(const _D3D11X_MSAA_SCAN_CONVERTER_SETTINGS*);
        virtual void RSSetEQAASettings(const _D3D11X_MSAA_EQAA_SETTINGS*);
        virtual void RSSetSamplePositions(const _D3D11X_MSAA_SAMPLE_PRIORITIES*, const _D3D11X_MSAA_SAMPLE_POSITIONS*);
        virtual void SetResourceCompression(ID3D11Resource*, unsigned int);
        virtual void SetResourceCompressionX(const D3D11X_DESCRIPTOR_RESOURCE*, unsigned int);
        virtual void SetGDSRange(_D3D11X_GDS_REGION_TYPE, unsigned int, unsigned int);
        virtual void WriteGDS(_D3D11X_GDS_REGION_TYPE, unsigned int, unsigned int, const unsigned int*, unsigned int);
        virtual void ReadGDS(_D3D11X_GDS_REGION_TYPE, unsigned int, unsigned int, unsigned int*, unsigned int);
        virtual void VSSetShaderUserData(unsigned int, unsigned int, const unsigned int*);
        virtual void HSSetShaderUserData(unsigned int, unsigned int, const unsigned int*);
        virtual void DSSetShaderUserData(unsigned int, unsigned int, const unsigned int*);
        virtual void GSSetShaderUserData(unsigned int, unsigned int, const unsigned int*);
        virtual void PSSetShaderUserData(unsigned int, unsigned int, const unsigned int*);
        virtual void CSSetShaderUserData(unsigned int, unsigned int, const unsigned int*);
        virtual void InsertWaitOnMemory(const void*, unsigned int, D3D11_COMPARISON_FUNC, unsigned int, unsigned int);
        virtual void WriteTimestampToMemory(void*);
        virtual void WriteTimestampToBuffer(ID3D11Buffer*, unsigned int);
        virtual void StoreConstantRam(unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int);
        virtual void LoadConstantRam(unsigned int, ID3D11Buffer*, unsigned int, unsigned int, unsigned int);
        virtual void WriteQuery(D3D11_QUERY, unsigned int, unsigned int, ID3D11Buffer*, unsigned int, unsigned int);
        virtual void ResetQuery(D3D11_QUERY, unsigned int, unsigned int);
        virtual void ConfigureQuery(D3D11_QUERY, const void*, unsigned int);
        virtual void SetShaderUserData(D3D11X_HW_STAGE, unsigned int, unsigned int, const unsigned int*);
        virtual void SetPixelShaderDepthForceZOrder(int);
        virtual void SetPredicationFromQuery(D3D11_QUERY, ID3D11Buffer*, unsigned int, unsigned int);
        virtual void SetBorderColorPalette(ID3D11Buffer*, unsigned int, unsigned int);
        virtual void WriteValueEndOfPipe64(void*, unsigned __int64, unsigned int);
        virtual void InsertWaitOnMemory64(const void*, unsigned int, D3D11_COMPARISON_FUNC, unsigned __int64);
        virtual void LoadConstantRamImmediate(unsigned int, const void*, unsigned int, unsigned int);
        virtual void SetScreenExtentsQuery(unsigned int);
        virtual void CollectScreenExtents(unsigned int, unsigned int, const unsigned __int64*, unsigned __int16, unsigned __int16);
        virtual void FillResourceWithValue(ID3D11Resource*, unsigned int);
        virtual void SetDrawBalancing(unsigned int, unsigned int);

        ::ID3D11DeviceContext2* m_realDeviceCtx;
        ID3D11DeviceChild_X* m_parentWrapper; // for ref counting
    };

    class ID3D11DeviceContextXWrapperX : public ID3D11DeviceChild_X
    {
    public:

        explicit ID3D11DeviceContextXWrapperX(::ID3D11DeviceContext2* pDeviceCtx)
        {
            m_Function.m_realDeviceCtx = pDeviceCtx;
            m_Function.m_parentWrapper = this;
            m_RefCount = 1;
        }

        // IGraphicsUnknown
        HRESULT QueryInterface(REFIID riid, void** ppvObject) override;
        ULONG AddRef( ) override;
        ULONG Release( ) override;

        // ID3D11DeviceChild
        void STDMETHODCALLTYPE GetDevice(_Outptr_  ID3D11Device** ppDevice) override;
        HRESULT STDMETHODCALLTYPE GetPrivateData(_In_  REFGUID guid, _Inout_  UINT* pDataSize, _Out_writes_bytes_opt_(*pDataSize)  void* pData) override;
        HRESULT STDMETHODCALLTYPE SetPrivateData(_In_  REFGUID guid, _In_  UINT DataSize, _In_reads_bytes_opt_(DataSize)  const void* pData) override;
        HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(_In_  REFGUID guid, _In_opt_  const IUnknown* pData) override;
        HRESULT STDMETHODCALLTYPE SetName(const wchar_t* name) override;

        D3D11XTinyDevice m_TinyDevice;
        D3D11XShaderUserDataManagerDraw m_ShaderUserDataManagerDraw;
        union 
        {
            unsigned __int8 m_OutOfLineFlags;
            unsigned int m_Reserved[ 16 ];
        };
        //D3D11DeviceContext_Function_Table m_Function;
        ID3D11DeviceContextX_Vtable m_Function;
    };
}