#pragma once
#include "ID3DX.h"
#include <cstdint>
#include <array>

namespace d3d11x
{
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
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;



        virtual void STDMETHODCALLTYPE PSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE PSSetShader(
            _In_opt_  ID3D11PixelShader* pPixelShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE VSSetShader(
            _In_opt_  ID3D11VertexShader* pVertexShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexed(
            _In_  UINT IndexCount,
            _In_  UINT StartIndexLocation,
            _In_  INT BaseVertexLocation) = 0;

        virtual void STDMETHODCALLTYPE Draw(
            _In_  UINT VertexCount,
            _In_  UINT StartVertexLocation) = 0;

        virtual HRESULT STDMETHODCALLTYPE Map(
            _In_  ID3D11Resource* pResource,
            _In_  UINT Subresource,
            _In_  D3D11_MAP MapType,
            _In_  UINT MapFlags,
            _Out_opt_  D3D11_MAPPED_SUBRESOURCE* pMappedResource) = 0;

        virtual void STDMETHODCALLTYPE Unmap(
            _In_  ID3D11Resource* pResource,
            _In_  UINT Subresource) = 0;

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE IASetInputLayout(
            _In_opt_  ID3D11InputLayout* pInputLayout) = 0;

        virtual void STDMETHODCALLTYPE IASetVertexBuffers(
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppVertexBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pStrides,
            _In_reads_opt_(NumBuffers)  const UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE IASetIndexBuffer(
            _In_opt_  ID3D11Buffer* pIndexBuffer,
            _In_  DXGI_FORMAT Format,
            _In_  UINT Offset) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexedInstanced(
            _In_  UINT IndexCountPerInstance,
            _In_  UINT InstanceCount,
            _In_  UINT StartIndexLocation,
            _In_  INT BaseVertexLocation,
            _In_  UINT StartInstanceLocation) = 0;

        virtual void STDMETHODCALLTYPE DrawInstanced(
            _In_  UINT VertexCountPerInstance,
            _In_  UINT InstanceCount,
            _In_  UINT StartVertexLocation,
            _In_  UINT StartInstanceLocation) = 0;

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE GSSetShader(
            _In_opt_  ID3D11GeometryShader* pShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE IASetPrimitiveTopology(
            _In_  D3D11_PRIMITIVE_TOPOLOGY Topology) = 0;

        virtual void STDMETHODCALLTYPE VSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE VSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE Begin(
            _In_  ID3D11Asynchronous* pAsync) = 0;

        virtual void STDMETHODCALLTYPE End(
            _In_  ID3D11Asynchronous* pAsync) = 0;

        virtual HRESULT STDMETHODCALLTYPE GetData(
            _In_  ID3D11Asynchronous* pAsync,
            _Out_writes_bytes_opt_(DataSize)  void* pData,
            _In_  UINT DataSize,
            _In_  UINT GetDataFlags) = 0;

        virtual void STDMETHODCALLTYPE SetPredication(
            _In_opt_  ID3D11Predicate* pPredicate,
            _In_  BOOL PredicateValue) = 0;

        virtual void STDMETHODCALLTYPE GSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE GSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE OMSetRenderTargets(
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            _In_opt_  ID3D11DepthStencilView* pDepthStencilView) = 0;

        virtual void STDMETHODCALLTYPE OMSetRenderTargetsAndUnorderedAccessViews(
            _In_  UINT NumRTVs,
            _In_reads_opt_(NumRTVs)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            _In_opt_  ID3D11DepthStencilView* pDepthStencilView,
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT UAVStartSlot,
            _In_  UINT NumUAVs,
            _In_reads_opt_(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs)  const UINT* pUAVInitialCounts) = 0;

        virtual void STDMETHODCALLTYPE OMSetBlendState(
            _In_opt_  ID3D11BlendState* pBlendState,
            _In_opt_  const FLOAT BlendFactor[ 4 ],
            _In_  UINT SampleMask) = 0;

        virtual void STDMETHODCALLTYPE OMSetDepthStencilState(
            _In_opt_  ID3D11DepthStencilState* pDepthStencilState,
            _In_  UINT StencilRef) = 0;

        virtual void STDMETHODCALLTYPE SOSetTargets(
            _In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppSOTargets,
            _In_reads_opt_(NumBuffers)  const UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE DrawAuto(void) = 0;

        virtual void STDMETHODCALLTYPE DrawIndexedInstancedIndirect(
            _In_  ID3D11Buffer* pBufferForArgs,
            _In_  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE DrawInstancedIndirect(
            _In_  ID3D11Buffer* pBufferForArgs,
            _In_  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE Dispatch(
            _In_  UINT ThreadGroupCountX,
            _In_  UINT ThreadGroupCountY,
            _In_  UINT ThreadGroupCountZ) = 0;

        virtual void STDMETHODCALLTYPE DispatchIndirect(
            _In_  ID3D11Buffer* pBufferForArgs,
            _In_  UINT AlignedByteOffsetForArgs) = 0;

        virtual void STDMETHODCALLTYPE RSSetState(
            _In_opt_  ID3D11RasterizerState* pRasterizerState) = 0;

        virtual void STDMETHODCALLTYPE RSSetViewports(
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumViewports,
            _In_reads_opt_(NumViewports)  const D3D11_VIEWPORT* pViewports) = 0;

        virtual void STDMETHODCALLTYPE RSSetScissorRects(
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumRects,
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRects) = 0;

        virtual void STDMETHODCALLTYPE CopySubresourceRegion(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_  UINT DstX,
            _In_  UINT DstY,
            _In_  UINT DstZ,
            _In_  ID3D11Resource* pSrcResource,
            _In_  UINT SrcSubresource,
            _In_opt_  const D3D11_BOX* pSrcBox) = 0;

        virtual void STDMETHODCALLTYPE CopyResource(
            _In_  ID3D11Resource* pDstResource,
            _In_  ID3D11Resource* pSrcResource) = 0;

        virtual void STDMETHODCALLTYPE UpdateSubresource(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_opt_  const D3D11_BOX* pDstBox,
            _In_  const void* pSrcData,
            _In_  UINT SrcRowPitch,
            _In_  UINT SrcDepthPitch) = 0;

        virtual void STDMETHODCALLTYPE CopyStructureCount(
            _In_  ID3D11Buffer* pDstBuffer,
            _In_  UINT DstAlignedByteOffset,
            _In_  ID3D11UnorderedAccessView* pSrcView) = 0;

        virtual void STDMETHODCALLTYPE ClearRenderTargetView(
            _In_  ID3D11RenderTargetView* pRenderTargetView,
            _In_  const FLOAT ColorRGBA[ 4 ]) = 0;

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewUint(
            _In_  ID3D11UnorderedAccessView* pUnorderedAccessView,
            _In_  const UINT Values[ 4 ]) = 0;

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewFloat(
            _In_  ID3D11UnorderedAccessView* pUnorderedAccessView,
            _In_  const FLOAT Values[ 4 ]) = 0;

        virtual void STDMETHODCALLTYPE ClearDepthStencilView(
            _In_  ID3D11DepthStencilView* pDepthStencilView,
            _In_  UINT ClearFlags,
            _In_  FLOAT Depth,
            _In_  UINT8 Stencil) = 0;

        virtual void STDMETHODCALLTYPE GenerateMips(
            _In_  ID3D11ShaderResourceView* pShaderResourceView) = 0;

        virtual void STDMETHODCALLTYPE SetResourceMinLOD(
            _In_  ID3D11Resource* pResource,
            FLOAT MinLOD) = 0;

        virtual FLOAT STDMETHODCALLTYPE GetResourceMinLOD(
            _In_  ID3D11Resource* pResource) = 0;

        virtual void STDMETHODCALLTYPE ResolveSubresource(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_  ID3D11Resource* pSrcResource,
            _In_  UINT SrcSubresource,
            _In_  DXGI_FORMAT Format) = 0;

        virtual void STDMETHODCALLTYPE ExecuteCommandList(
            _In_  ID3D11CommandList* pCommandList,
            BOOL RestoreContextState) = 0;

        virtual void STDMETHODCALLTYPE HSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE HSSetShader(
            _In_opt_  ID3D11HullShader* pHullShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE HSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE DSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE DSSetShader(
            _In_opt_  ID3D11DomainShader* pDomainShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE CSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE CSSetUnorderedAccessViews(
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot)  UINT NumUAVs,
            _In_reads_opt_(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs)  const UINT* pUAVInitialCounts) = 0;

        virtual void STDMETHODCALLTYPE CSSetShader(
            _In_opt_  ID3D11ComputeShader* pComputeShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE CSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE PSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE PSGetShader(
            _Outptr_result_maybenull_  ID3D11PixelShader** ppPixelShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE VSGetShader(
            _Outptr_result_maybenull_  ID3D11VertexShader** ppVertexShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE IAGetInputLayout(
            _Outptr_result_maybenull_  ID3D11InputLayout** ppInputLayout) = 0;

        virtual void STDMETHODCALLTYPE IAGetVertexBuffers(
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppVertexBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pStrides,
            _Out_writes_opt_(NumBuffers)  UINT* pOffsets) = 0;

        virtual void STDMETHODCALLTYPE IAGetIndexBuffer(
            _Outptr_opt_result_maybenull_  ID3D11Buffer** pIndexBuffer,
            _Out_opt_  DXGI_FORMAT* Format,
            _Out_opt_  UINT* Offset) = 0;

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE GSGetShader(
            _Outptr_result_maybenull_  ID3D11GeometryShader** ppGeometryShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE IAGetPrimitiveTopology(
            _Out_  D3D11_PRIMITIVE_TOPOLOGY* pTopology) = 0;

        virtual void STDMETHODCALLTYPE VSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE VSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE GetPredication(
            _Outptr_opt_result_maybenull_  ID3D11Predicate** ppPredicate,
            _Out_opt_  BOOL* pPredicateValue) = 0;

        virtual void STDMETHODCALLTYPE GSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE GSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE OMGetRenderTargets(
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11RenderTargetView** ppRenderTargetViews,
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilView** ppDepthStencilView) = 0;

        virtual void STDMETHODCALLTYPE OMGetRenderTargetsAndUnorderedAccessViews(
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumRTVs,
            _Out_writes_opt_(NumRTVs)  ID3D11RenderTargetView** ppRenderTargetViews,
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilView** ppDepthStencilView,
            _In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT UAVStartSlot,
            _In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot)  UINT NumUAVs,
            _Out_writes_opt_(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) = 0;

        virtual void STDMETHODCALLTYPE OMGetBlendState(
            _Outptr_opt_result_maybenull_  ID3D11BlendState** ppBlendState,
            _Out_opt_  FLOAT BlendFactor[ 4 ],
            _Out_opt_  UINT* pSampleMask) = 0;

        virtual void STDMETHODCALLTYPE OMGetDepthStencilState(
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilState** ppDepthStencilState,
            _Out_opt_  UINT* pStencilRef) = 0;

        virtual void STDMETHODCALLTYPE SOGetTargets(
            _In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppSOTargets) = 0;

        virtual void STDMETHODCALLTYPE RSGetState(
            _Outptr_result_maybenull_  ID3D11RasterizerState** ppRasterizerState) = 0;

        virtual void STDMETHODCALLTYPE RSGetViewports(
            _Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumViewports,
            _Out_writes_opt_(*pNumViewports)  D3D11_VIEWPORT* pViewports) = 0;

        virtual void STDMETHODCALLTYPE RSGetScissorRects(
            _Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumRects,
            _Out_writes_opt_(*pNumRects)  D3D11_RECT* pRects) = 0;

        virtual void STDMETHODCALLTYPE HSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE HSGetShader(
            _Outptr_result_maybenull_  ID3D11HullShader** ppHullShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE HSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE DSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE DSGetShader(
            _Outptr_result_maybenull_  ID3D11DomainShader** ppDomainShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE DSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE CSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) = 0;

        virtual void STDMETHODCALLTYPE CSGetUnorderedAccessViews(
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot)  UINT NumUAVs,
            _Out_writes_opt_(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) = 0;

        virtual void STDMETHODCALLTYPE CSGetShader(
            _Outptr_result_maybenull_  ID3D11ComputeShader** ppComputeShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) = 0;

        virtual void STDMETHODCALLTYPE CSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) = 0;

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) = 0;

        virtual void STDMETHODCALLTYPE ClearState(void) = 0;

        virtual void STDMETHODCALLTYPE Flush(void) = 0;

        virtual D3D11_DEVICE_CONTEXT_TYPE STDMETHODCALLTYPE GetType(void) = 0;

        virtual UINT STDMETHODCALLTYPE GetContextFlags(void) = 0;

        virtual HRESULT STDMETHODCALLTYPE FinishCommandList(
            BOOL RestoreDeferredContextState,
            _COM_Outptr_opt_  ID3D11CommandList** ppCommandList) = 0;

    };

    MIDL_INTERFACE("bb2c6faa-b5fb-4082-8e6b-388b8cfa90e1")
        ID3D11DeviceContext1 : public ID3D11DeviceContext
    {
    public:
        virtual void STDMETHODCALLTYPE CopySubresourceRegion1(
            _In_  ID3D11Resource * pDstResource,
            _In_  UINT DstSubresource,
            _In_  UINT DstX,
            _In_  UINT DstY,
            _In_  UINT DstZ,
            _In_  ID3D11Resource * pSrcResource,
            _In_  UINT SrcSubresource,
            _In_opt_  const D3D11_BOX * pSrcBox,
            _In_  UINT CopyFlags) = 0;

        virtual void STDMETHODCALLTYPE UpdateSubresource1(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_opt_  const D3D11_BOX* pDstBox,
            _In_  const void* pSrcData,
            _In_  UINT SrcRowPitch,
            _In_  UINT SrcDepthPitch,
            _In_  UINT CopyFlags) = 0;

        virtual void STDMETHODCALLTYPE DiscardResource(
            _In_  ID3D11Resource* pResource) = 0;

        virtual void STDMETHODCALLTYPE DiscardView(
            _In_  ID3D11View* pResourceView) = 0;

        virtual void STDMETHODCALLTYPE VSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) = 0;

        virtual void STDMETHODCALLTYPE SwapDeviceContextState(
            _In_  ID3DDeviceContextState* pState,
            _Outptr_opt_  ID3DDeviceContextState** ppPreviousState) = 0;

        virtual void STDMETHODCALLTYPE ClearView(
            _In_  ID3D11View* pView,
            _In_  const FLOAT Color[ 4 ],
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRect,
            UINT NumRects) = 0;

        virtual void STDMETHODCALLTYPE DiscardView1(
            _In_  ID3D11View* pResourceView,
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRects,
            UINT NumRects) = 0;

    };

    MIDL_INTERFACE("420d5b32-b90c-4da4-bef0-359f6a24a83a")
        ID3D11DeviceContext2 : public ID3D11DeviceContext1
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE UpdateTileMappings(
            _In_  ID3D11Resource * pTiledResource,
            _In_  UINT NumTiledResourceRegions,
            _In_reads_opt_(NumTiledResourceRegions)  const D3D11_TILED_RESOURCE_COORDINATE * pTiledResourceRegionStartCoordinates,
            _In_reads_opt_(NumTiledResourceRegions)  const D3D11_TILE_REGION_SIZE * pTiledResourceRegionSizes,
            _In_opt_  ID3D11Buffer * pTilePool,
            _In_  UINT NumRanges,
            _In_reads_opt_(NumRanges)  const UINT * pRangeFlags,
            _In_reads_opt_(NumRanges)  const UINT * pTilePoolStartOffsets,
            _In_reads_opt_(NumRanges)  const UINT * pRangeTileCounts,
            _In_  UINT Flags) = 0;

        virtual HRESULT STDMETHODCALLTYPE CopyTileMappings(
            _In_  ID3D11Resource* pDestTiledResource,
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pDestRegionStartCoordinate,
            _In_  ID3D11Resource* pSourceTiledResource,
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pSourceRegionStartCoordinate,
            _In_  const D3D11_TILE_REGION_SIZE* pTileRegionSize,
            _In_  UINT Flags) = 0;

        virtual void STDMETHODCALLTYPE CopyTiles(
            _In_  ID3D11Resource* pTiledResource,
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pTileRegionStartCoordinate,
            _In_  const D3D11_TILE_REGION_SIZE* pTileRegionSize,
            _In_  ID3D11Buffer* pBuffer,
            _In_  UINT64 BufferStartOffsetInBytes,
            _In_  UINT Flags) = 0;

        virtual void STDMETHODCALLTYPE UpdateTiles(
            _In_  ID3D11Resource* pDestTiledResource,
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pDestTileRegionStartCoordinate,
            _In_  const D3D11_TILE_REGION_SIZE* pDestTileRegionSize,
            _In_  const void* pSourceTileData,
            _In_  UINT Flags) = 0;

        virtual HRESULT STDMETHODCALLTYPE ResizeTilePool(
            _In_  ID3D11Buffer* pTilePool,
            _In_  UINT64 NewSizeInBytes) = 0;

        virtual void STDMETHODCALLTYPE TiledResourceBarrier(
            _In_opt_  ID3D11DeviceChild* pTiledResourceOrViewAccessBeforeBarrier,
            _In_opt_  ID3D11DeviceChild* pTiledResourceOrViewAccessAfterBarrier) = 0;

        virtual BOOL STDMETHODCALLTYPE IsAnnotationEnabled(void) = 0;

        virtual void STDMETHODCALLTYPE SetMarkerInt(
            _In_  LPCWSTR pLabel,
            INT Data) = 0;

        virtual void STDMETHODCALLTYPE BeginEventInt(
            _In_  LPCWSTR pLabel,
            INT Data) = 0;

        virtual void STDMETHODCALLTYPE EndEvent(void) = 0;

    };

    // just for the guid :3
    D3DINTERFACE(ID3D11DeviceContextX, 48800095, 7134, 4be7, 91, 86, b8, 6b, ec, b2, 64, 77) {
    public:

    };



    //MIDL_INTERFACE("c0bfa96c-e089-44fb-8eaf-26f8796190da")
    class ID3D11DeviceContextXWrapper : public ID3D11DeviceChild_X
    {
    public:

        ID3D11DeviceContextXWrapper(::ID3D11DeviceContext2* pDeviceCtx) : m_realDeviceCtx(pDeviceCtx)
        {
            m_RefCount = 1;
            InitFunctionsTables( );
        }


        virtual void STDMETHODCALLTYPE VSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers)
        {
            m_realDeviceCtx->VSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }
        virtual void STDMETHODCALLTYPE PSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews)
        {
            m_realDeviceCtx->PSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE PSSetShader(
            _In_opt_  ID3D11PixelShader* pPixelShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) {
            m_realDeviceCtx->PSSetShader(pPixelShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE PSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) {
            m_realDeviceCtx->PSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE VSSetShader(
            _In_opt_  ID3D11VertexShader* pVertexShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) {
            m_realDeviceCtx->VSSetShader(pVertexShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE DrawIndexed(
            _In_  UINT IndexCount,
            _In_  UINT StartIndexLocation,
            _In_  INT BaseVertexLocation) {
            m_realDeviceCtx->DrawIndexed(IndexCount, StartIndexLocation, BaseVertexLocation);
        }

        virtual void STDMETHODCALLTYPE Draw(
            _In_  UINT VertexCount,
            _In_  UINT StartVertexLocation) {
            m_realDeviceCtx->Draw(VertexCount, StartVertexLocation);
        }

        virtual HRESULT STDMETHODCALLTYPE Map(
            _In_  ID3D11Resource* pResource,
            _In_  UINT Subresource,
            _In_  D3D11_MAP MapType,
            _In_  UINT MapFlags,
            _Out_opt_  D3D11_MAPPED_SUBRESOURCE* pMappedResource) {
            return m_realDeviceCtx->Map(pResource, Subresource, MapType, MapFlags, pMappedResource);
        }

        virtual void STDMETHODCALLTYPE Unmap(
            _In_  ID3D11Resource* pResource,
            _In_  UINT Subresource) {
            m_realDeviceCtx->Unmap(pResource, Subresource);
        }

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) {
            m_realDeviceCtx->PSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE IASetInputLayout(

            _In_opt_  ID3D11InputLayout* pInputLayout) {
            m_realDeviceCtx->IASetInputLayout(pInputLayout);
        }

        virtual void STDMETHODCALLTYPE IASetVertexBuffers(
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppVertexBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pStrides,
            _In_reads_opt_(NumBuffers)  const UINT* pOffsets) {
            m_realDeviceCtx->IASetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
        }

        virtual void STDMETHODCALLTYPE IASetIndexBuffer(

            _In_opt_  ID3D11Buffer* pIndexBuffer,

            _In_  DXGI_FORMAT Format,

            _In_  UINT Offset) {
            m_realDeviceCtx->IASetIndexBuffer(pIndexBuffer, Format, Offset);
        }

        virtual void STDMETHODCALLTYPE DrawIndexedInstanced(
            _In_  UINT IndexCountPerInstance,
            _In_  UINT InstanceCount,
            _In_  UINT StartIndexLocation,
            _In_  INT BaseVertexLocation,
            _In_  UINT StartInstanceLocation) {
            m_realDeviceCtx->DrawIndexedInstanced(IndexCountPerInstance, InstanceCount, StartIndexLocation, BaseVertexLocation, StartInstanceLocation);
        }

        virtual void STDMETHODCALLTYPE DrawInstanced(
            _In_  UINT VertexCountPerInstance,
            _In_  UINT InstanceCount,
            _In_  UINT StartVertexLocation,
            _In_  UINT StartInstanceLocation) {
            m_realDeviceCtx->DrawInstanced(VertexCountPerInstance, InstanceCount, StartVertexLocation, StartInstanceLocation);
        }

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) {
            m_realDeviceCtx->GSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE GSSetShader(
            _In_opt_  ID3D11GeometryShader* pShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) {
            m_realDeviceCtx->GSSetShader(pShader, ppClassInstances, NumClassInstances);
        }


        virtual void STDMETHODCALLTYPE VSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) {
            m_realDeviceCtx->VSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE VSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) {
            m_realDeviceCtx->VSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE Begin(
            _In_  ID3D11Asynchronous* pAsync) {
            m_realDeviceCtx->Begin(pAsync);
        }

        virtual void STDMETHODCALLTYPE End(
            _In_  ID3D11Asynchronous* pAsync) {
            m_realDeviceCtx->End(pAsync);
        }

        virtual HRESULT STDMETHODCALLTYPE GetData(
            _In_  ID3D11Asynchronous* pAsync,
            _Out_writes_bytes_opt_(DataSize)  void* pData,
            _In_  UINT DataSize,
            _In_  UINT GetDataFlags) {
            return m_realDeviceCtx->GetData(pAsync, pData, DataSize, GetDataFlags);
        }

        virtual void STDMETHODCALLTYPE SetPredication(
            _In_opt_  ID3D11Predicate* pPredicate,
            _In_  BOOL PredicateValue) {
            m_realDeviceCtx->SetPredication(pPredicate, PredicateValue);
        }

        virtual void STDMETHODCALLTYPE GSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) {
            m_realDeviceCtx->GSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE GSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) {
            m_realDeviceCtx->GSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE OMSetRenderTargets(
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            _In_opt_  ID3D11DepthStencilView* pDepthStencilView) {
            m_realDeviceCtx->OMSetRenderTargets(NumViews, ppRenderTargetViews, pDepthStencilView);
        }

        virtual void STDMETHODCALLTYPE OMSetRenderTargetsAndUnorderedAccessViews(
            _In_  UINT NumRTVs,
            _In_reads_opt_(NumRTVs)  ID3D11RenderTargetView* const* ppRenderTargetViews,
            _In_opt_  ID3D11DepthStencilView* pDepthStencilView,
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT UAVStartSlot,
            _In_  UINT NumUAVs,
            _In_reads_opt_(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs)  const UINT* pUAVInitialCounts) {
            m_realDeviceCtx->OMSetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, pDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
        }

        virtual void STDMETHODCALLTYPE OMSetBlendState(
            _In_opt_  ID3D11BlendState* pBlendState,
            _In_opt_  const FLOAT BlendFactor[ 4 ],
            _In_  UINT SampleMask) {
            m_realDeviceCtx->OMSetBlendState(pBlendState, BlendFactor, SampleMask);
        }

        virtual void STDMETHODCALLTYPE OMSetDepthStencilState(
            _In_opt_  ID3D11DepthStencilState* pDepthStencilState,
            _In_  UINT StencilRef) {
            m_realDeviceCtx->OMSetDepthStencilState(pDepthStencilState, StencilRef);
        }

        virtual void STDMETHODCALLTYPE SOSetTargets(
            _In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppSOTargets,
            _In_reads_opt_(NumBuffers)  const UINT* pOffsets) {
            m_realDeviceCtx->SOSetTargets(NumBuffers, ppSOTargets, pOffsets);
        }

        virtual void STDMETHODCALLTYPE DrawAuto(void) {
            m_realDeviceCtx->DrawAuto( );
        }

        virtual void STDMETHODCALLTYPE DrawIndexedInstancedIndirect(
            _In_  ID3D11Buffer* pBufferForArgs,
            _In_  UINT AlignedByteOffsetForArgs) {
            m_realDeviceCtx->DrawIndexedInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
        }

        virtual void STDMETHODCALLTYPE DrawInstancedIndirect(
            _In_  ID3D11Buffer* pBufferForArgs,
            _In_  UINT AlignedByteOffsetForArgs) {
            m_realDeviceCtx->DrawInstancedIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
        }

        virtual void STDMETHODCALLTYPE Dispatch(
            _In_  UINT ThreadGroupCountX,
            _In_  UINT ThreadGroupCountY,
            _In_  UINT ThreadGroupCountZ) {
            m_realDeviceCtx->Dispatch(ThreadGroupCountX, ThreadGroupCountY, ThreadGroupCountZ);
        }

        virtual void STDMETHODCALLTYPE DispatchIndirect(
            _In_  ID3D11Buffer* pBufferForArgs,
            _In_  UINT AlignedByteOffsetForArgs) {
            m_realDeviceCtx->DispatchIndirect(pBufferForArgs, AlignedByteOffsetForArgs);
        }

        virtual void STDMETHODCALLTYPE RSSetState(
            _In_opt_  ID3D11RasterizerState* pRasterizerState) {
            m_realDeviceCtx->RSSetState(pRasterizerState);
        }

        virtual void STDMETHODCALLTYPE RSSetViewports(
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumViewports,
            _In_reads_opt_(NumViewports)  const D3D11_VIEWPORT* pViewports) {
            m_realDeviceCtx->RSSetViewports(NumViewports, pViewports);
        }

        virtual void STDMETHODCALLTYPE RSSetScissorRects(
            _In_range_(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE)  UINT NumRects,
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRects) {
            m_realDeviceCtx->RSSetScissorRects(NumRects, pRects);
        }

        virtual void STDMETHODCALLTYPE CopySubresourceRegion(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_  UINT DstX,
            _In_  UINT DstY,
            _In_  UINT DstZ,
            _In_  ID3D11Resource* pSrcResource,
            _In_  UINT SrcSubresource,
            _In_opt_  const D3D11_BOX* pSrcBox) {
            m_realDeviceCtx->CopySubresourceRegion(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox);
        }

        virtual void STDMETHODCALLTYPE CopyResource(
            _In_  ID3D11Resource* pDstResource,
            _In_  ID3D11Resource* pSrcResource) {
            m_realDeviceCtx->CopyResource(pDstResource, pSrcResource);
        }

        virtual void STDMETHODCALLTYPE UpdateSubresource(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_opt_  const D3D11_BOX* pDstBox,
            _In_  const void* pSrcData,
            _In_  UINT SrcRowPitch,
            _In_  UINT SrcDepthPitch) {
            m_realDeviceCtx->UpdateSubresource(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch);
        }

        virtual void STDMETHODCALLTYPE CopyStructureCount(
            _In_  ID3D11Buffer* pDstBuffer,
            _In_  UINT DstAlignedByteOffset,
            _In_  ID3D11UnorderedAccessView* pSrcView) {
            m_realDeviceCtx->CopyStructureCount(pDstBuffer, DstAlignedByteOffset, pSrcView);
        }

        virtual void STDMETHODCALLTYPE ClearRenderTargetView(
            _In_  ID3D11RenderTargetView* pRenderTargetView,
            _In_  const FLOAT ColorRGBA[ 4 ]) {
            m_realDeviceCtx->ClearRenderTargetView(pRenderTargetView, ColorRGBA);
        }

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewUint(
            _In_  ID3D11UnorderedAccessView* pUnorderedAccessView,
            _In_  const UINT Values[ 4 ]) {
            m_realDeviceCtx->ClearUnorderedAccessViewUint(pUnorderedAccessView, Values);
        }

        virtual void STDMETHODCALLTYPE ClearUnorderedAccessViewFloat(
            _In_  ID3D11UnorderedAccessView* pUnorderedAccessView,
            _In_  const FLOAT Values[ 4 ]) {
            m_realDeviceCtx->ClearUnorderedAccessViewFloat(pUnorderedAccessView, Values);
        }

        virtual void STDMETHODCALLTYPE ClearDepthStencilView(
            _In_  ID3D11DepthStencilView* pDepthStencilView,
            _In_  UINT ClearFlags,
            _In_  FLOAT Depth,
            _In_  UINT8 Stencil) {
            m_realDeviceCtx->ClearDepthStencilView(pDepthStencilView, ClearFlags, Depth, Stencil);
        }

        virtual void STDMETHODCALLTYPE GenerateMips(
            _In_  ID3D11ShaderResourceView* pShaderResourceView) {
            m_realDeviceCtx->GenerateMips(pShaderResourceView);
        }

        virtual void STDMETHODCALLTYPE SetResourceMinLOD(
            _In_  ID3D11Resource* pResource,
            FLOAT MinLOD) {
            m_realDeviceCtx->SetResourceMinLOD(pResource, MinLOD);
        }

        virtual FLOAT STDMETHODCALLTYPE GetResourceMinLOD(
            _In_  ID3D11Resource* pResource) {
            return m_realDeviceCtx->GetResourceMinLOD(pResource);
        }

        virtual void STDMETHODCALLTYPE ResolveSubresource(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_  ID3D11Resource* pSrcResource,
            _In_  UINT SrcSubresource,
            _In_  DXGI_FORMAT Format) {
            m_realDeviceCtx->ResolveSubresource(pDstResource, DstSubresource, pSrcResource, SrcSubresource, Format);
        }

        virtual void STDMETHODCALLTYPE ExecuteCommandList(
            _In_  ID3D11CommandList* pCommandList,
            BOOL RestoreContextState) {
            m_realDeviceCtx->ExecuteCommandList(pCommandList, RestoreContextState);
        }

        virtual void STDMETHODCALLTYPE HSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) {
            m_realDeviceCtx->HSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE HSSetShader(
            _In_opt_  ID3D11HullShader* pHullShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) {
            m_realDeviceCtx->HSSetShader(pHullShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE HSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) {
            m_realDeviceCtx->HSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) {
            m_realDeviceCtx->HSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE DSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) {
            m_realDeviceCtx->DSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE DSSetShader(
            _In_opt_  ID3D11DomainShader* pDomainShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) {
            m_realDeviceCtx->DSSetShader(pDomainShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE DSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) {
            m_realDeviceCtx->DSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) {
            m_realDeviceCtx->DSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE CSSetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _In_reads_opt_(NumViews)  ID3D11ShaderResourceView* const* ppShaderResourceViews) {
            m_realDeviceCtx->CSSetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE CSSetUnorderedAccessViews(
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot)  UINT NumUAVs,
            _In_reads_opt_(NumUAVs)  ID3D11UnorderedAccessView* const* ppUnorderedAccessViews,
            _In_reads_opt_(NumUAVs)  const UINT* pUAVInitialCounts) {
            m_realDeviceCtx->CSSetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews, pUAVInitialCounts);
        }

        virtual void STDMETHODCALLTYPE CSSetShader(
            _In_opt_  ID3D11ComputeShader* pComputeShader,
            _In_reads_opt_(NumClassInstances)  ID3D11ClassInstance* const* ppClassInstances,
            UINT NumClassInstances) {
            m_realDeviceCtx->CSSetShader(pComputeShader, ppClassInstances, NumClassInstances);
        }

        virtual void STDMETHODCALLTYPE CSSetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _In_reads_opt_(NumSamplers)  ID3D11SamplerState* const* ppSamplers) {
            m_realDeviceCtx->CSSetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers) {
            m_realDeviceCtx->CSSetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) {
            m_realDeviceCtx->VSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE PSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) {
            m_realDeviceCtx->PSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE PSGetShader(
            _Outptr_result_maybenull_  ID3D11PixelShader** ppPixelShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) {
            m_realDeviceCtx->PSGetShader(ppPixelShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE PSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) {
            m_realDeviceCtx->PSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE VSGetShader(
            _Outptr_result_maybenull_  ID3D11VertexShader** ppVertexShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) {
            m_realDeviceCtx->VSGetShader(ppVertexShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) {
            m_realDeviceCtx->PSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE IAGetInputLayout(
            _Outptr_result_maybenull_  ID3D11InputLayout** ppInputLayout) {
            m_realDeviceCtx->IAGetInputLayout(ppInputLayout);
        }

        virtual void STDMETHODCALLTYPE IAGetVertexBuffers(
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_IA_VERTEX_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppVertexBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pStrides,
            _Out_writes_opt_(NumBuffers)  UINT* pOffsets) {
            m_realDeviceCtx->IAGetVertexBuffers(StartSlot, NumBuffers, ppVertexBuffers, pStrides, pOffsets);
        }

        virtual void STDMETHODCALLTYPE IAGetIndexBuffer(
            _Outptr_opt_result_maybenull_  ID3D11Buffer** pIndexBuffer,
            _Out_opt_  DXGI_FORMAT* Format,
            _Out_opt_  UINT* Offset) {
            m_realDeviceCtx->IAGetIndexBuffer(pIndexBuffer, Format, Offset);
        }

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) {
            m_realDeviceCtx->GSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE GSGetShader(
            _Outptr_result_maybenull_  ID3D11GeometryShader** ppGeometryShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) {
            m_realDeviceCtx->GSGetShader(ppGeometryShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE IAGetPrimitiveTopology(
            _Out_  D3D11_PRIMITIVE_TOPOLOGY* pTopology) {
            m_realDeviceCtx->IAGetPrimitiveTopology(pTopology);
        }

        virtual void STDMETHODCALLTYPE VSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) {
            m_realDeviceCtx->VSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE VSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) {
            m_realDeviceCtx->VSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE GetPredication(
            _Outptr_opt_result_maybenull_  ID3D11Predicate** ppPredicate,
            _Out_opt_  BOOL* pPredicateValue) {
            m_realDeviceCtx->GetPredication(ppPredicate, pPredicateValue);
        }

        virtual void STDMETHODCALLTYPE GSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) {
            m_realDeviceCtx->GSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE GSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) {
            m_realDeviceCtx->GSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE OMGetRenderTargets(
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11RenderTargetView** ppRenderTargetViews,
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilView** ppDepthStencilView) {
            m_realDeviceCtx->OMGetRenderTargets(NumViews, ppRenderTargetViews, ppDepthStencilView);
        }

        virtual void STDMETHODCALLTYPE OMGetRenderTargetsAndUnorderedAccessViews(
            _In_range_(0, D3D11_SIMULTANEOUS_RENDER_TARGET_COUNT)  UINT NumRTVs,
            _Out_writes_opt_(NumRTVs)  ID3D11RenderTargetView** ppRenderTargetViews,
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilView** ppDepthStencilView,
            _In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - 1)  UINT UAVStartSlot,
            _In_range_(0, D3D11_PS_CS_UAV_REGISTER_COUNT - UAVStartSlot)  UINT NumUAVs,
            _Out_writes_opt_(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) {
            m_realDeviceCtx->OMGetRenderTargetsAndUnorderedAccessViews(NumRTVs, ppRenderTargetViews, ppDepthStencilView, UAVStartSlot, NumUAVs, ppUnorderedAccessViews);
        }

        virtual void STDMETHODCALLTYPE OMGetBlendState(
            _Outptr_opt_result_maybenull_  ID3D11BlendState** ppBlendState,
            _Out_opt_  FLOAT BlendFactor[ 4 ],
            _Out_opt_  UINT* pSampleMask) {
            m_realDeviceCtx->OMGetBlendState(ppBlendState, BlendFactor, pSampleMask);
        }

        virtual void STDMETHODCALLTYPE OMGetDepthStencilState(
            _Outptr_opt_result_maybenull_  ID3D11DepthStencilState** ppDepthStencilState,
            _Out_opt_  UINT* pStencilRef) {
            m_realDeviceCtx->OMGetDepthStencilState(ppDepthStencilState, pStencilRef);
        }

        virtual void STDMETHODCALLTYPE SOGetTargets(
            _In_range_(0, D3D11_SO_BUFFER_SLOT_COUNT)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppSOTargets) {
            m_realDeviceCtx->SOGetTargets(NumBuffers, ppSOTargets);
        }

        virtual void STDMETHODCALLTYPE RSGetState(
            _Outptr_result_maybenull_  ID3D11RasterizerState** ppRasterizerState) {
            m_realDeviceCtx->RSGetState(ppRasterizerState);
        }

        virtual void STDMETHODCALLTYPE RSGetViewports(
            _Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumViewports,
            _Out_writes_opt_(*pNumViewports)  D3D11_VIEWPORT* pViewports) {
            m_realDeviceCtx->RSGetViewports(pNumViewports, pViewports);
        }

        virtual void STDMETHODCALLTYPE RSGetScissorRects(
            _Inout_ /*_range(0, D3D11_VIEWPORT_AND_SCISSORRECT_OBJECT_COUNT_PER_PIPELINE )*/   UINT* pNumRects,
            _Out_writes_opt_(*pNumRects)  D3D11_RECT* pRects) {
            m_realDeviceCtx->RSGetScissorRects(pNumRects, pRects);
        }

        virtual void STDMETHODCALLTYPE HSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) {
            m_realDeviceCtx->HSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE HSGetShader(
            _Outptr_result_maybenull_  ID3D11HullShader** ppHullShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) {
            m_realDeviceCtx->HSGetShader(ppHullShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE HSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) {
            m_realDeviceCtx->HSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) {
            m_realDeviceCtx->HSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE DSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) {
            m_realDeviceCtx->DSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE DSGetShader(
            _Outptr_result_maybenull_  ID3D11DomainShader** ppDomainShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) {
            m_realDeviceCtx->DSGetShader(ppDomainShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE DSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) {
            m_realDeviceCtx->DSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) {
            m_realDeviceCtx->DSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE CSGetShaderResources(
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_INPUT_RESOURCE_SLOT_COUNT - StartSlot)  UINT NumViews,
            _Out_writes_opt_(NumViews)  ID3D11ShaderResourceView** ppShaderResourceViews) {
            m_realDeviceCtx->CSGetShaderResources(StartSlot, NumViews, ppShaderResourceViews);
        }

        virtual void STDMETHODCALLTYPE CSGetUnorderedAccessViews(
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_1_UAV_SLOT_COUNT - StartSlot)  UINT NumUAVs,
            _Out_writes_opt_(NumUAVs)  ID3D11UnorderedAccessView** ppUnorderedAccessViews) {
            m_realDeviceCtx->CSGetUnorderedAccessViews(StartSlot, NumUAVs, ppUnorderedAccessViews);
        }

        virtual void STDMETHODCALLTYPE CSGetShader(
            _Outptr_result_maybenull_  ID3D11ComputeShader** ppComputeShader,
            _Out_writes_opt_(*pNumClassInstances)  ID3D11ClassInstance** ppClassInstances,
            _Inout_opt_  UINT* pNumClassInstances) {
            m_realDeviceCtx->CSGetShader(ppComputeShader, ppClassInstances, pNumClassInstances);
        }

        virtual void STDMETHODCALLTYPE CSGetSamplers(
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_SAMPLER_SLOT_COUNT - StartSlot)  UINT NumSamplers,
            _Out_writes_opt_(NumSamplers)  ID3D11SamplerState** ppSamplers) {
            m_realDeviceCtx->CSGetSamplers(StartSlot, NumSamplers, ppSamplers);
        }

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers) {
            m_realDeviceCtx->CSGetConstantBuffers(StartSlot, NumBuffers, ppConstantBuffers);
        }

        virtual void STDMETHODCALLTYPE ClearState(void) {
            m_realDeviceCtx->ClearState( );
        }

        virtual void STDMETHODCALLTYPE Flush(void) {
            m_realDeviceCtx->Flush( );
        }

        virtual D3D11_DEVICE_CONTEXT_TYPE STDMETHODCALLTYPE GetType(void) {
            return m_realDeviceCtx->GetType( );
        }

        virtual UINT STDMETHODCALLTYPE GetContextFlags(void) {
            return m_realDeviceCtx->GetContextFlags( );
        }

        virtual HRESULT STDMETHODCALLTYPE FinishCommandList(
            BOOL RestoreDeferredContextState,

            _COM_Outptr_opt_  ID3D11CommandList** ppCommandList) {
            return m_realDeviceCtx->FinishCommandList(RestoreDeferredContextState, ppCommandList);
        }

        virtual void STDMETHODCALLTYPE CopySubresourceRegion1(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_  UINT DstX,
            _In_  UINT DstY,
            _In_  UINT DstZ,
            _In_  ID3D11Resource* pSrcResource,
            _In_  UINT SrcSubresource,
            _In_opt_  const D3D11_BOX* pSrcBox,
            _In_  UINT CopyFlags) {
            m_realDeviceCtx->CopySubresourceRegion1(pDstResource, DstSubresource, DstX, DstY, DstZ, pSrcResource, SrcSubresource, pSrcBox, CopyFlags);
        }

        virtual void STDMETHODCALLTYPE UpdateSubresource1(
            _In_  ID3D11Resource* pDstResource,
            _In_  UINT DstSubresource,
            _In_opt_  const D3D11_BOX* pDstBox,
            _In_  const void* pSrcData,
            _In_  UINT SrcRowPitch,
            _In_  UINT SrcDepthPitch,
            _In_  UINT CopyFlags) {
            m_realDeviceCtx->UpdateSubresource1(pDstResource, DstSubresource, pDstBox, pSrcData, SrcRowPitch, SrcDepthPitch, CopyFlags);
        }

        virtual void STDMETHODCALLTYPE DiscardResource(
            _In_  ID3D11Resource* pResource) {
            m_realDeviceCtx->DiscardResource(pResource);
        }

        virtual void STDMETHODCALLTYPE DiscardView(
            _In_  ID3D11View* pResourceView) {
            m_realDeviceCtx->DiscardView(pResourceView);
        }

        virtual void STDMETHODCALLTYPE VSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) {
            m_realDeviceCtx->VSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE HSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) {
            m_realDeviceCtx->HSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE DSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) {
            m_realDeviceCtx->DSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE GSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) {
            m_realDeviceCtx->GSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE PSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) {
            m_realDeviceCtx->PSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE CSSetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _In_reads_opt_(NumBuffers)  ID3D11Buffer* const* ppConstantBuffers,
            _In_reads_opt_(NumBuffers)  const UINT* pFirstConstant,
            _In_reads_opt_(NumBuffers)  const UINT* pNumConstants) {
            m_realDeviceCtx->CSSetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE VSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) {
            m_realDeviceCtx->VSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE HSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) {
            m_realDeviceCtx->HSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE DSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) {
            m_realDeviceCtx->DSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE GSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) {
            m_realDeviceCtx->GSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE PSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) {
            m_realDeviceCtx->PSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE CSGetConstantBuffers1(
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - 1)  UINT StartSlot,
            _In_range_(0, D3D11_COMMONSHADER_CONSTANT_BUFFER_API_SLOT_COUNT - StartSlot)  UINT NumBuffers,
            _Out_writes_opt_(NumBuffers)  ID3D11Buffer** ppConstantBuffers,
            _Out_writes_opt_(NumBuffers)  UINT* pFirstConstant,
            _Out_writes_opt_(NumBuffers)  UINT* pNumConstants) {
            m_realDeviceCtx->CSGetConstantBuffers1(StartSlot, NumBuffers, ppConstantBuffers, pFirstConstant, pNumConstants);
        }

        virtual void STDMETHODCALLTYPE SwapDeviceContextState(
            _In_  ID3DDeviceContextState* pState,
            _Outptr_opt_  ID3DDeviceContextState** ppPreviousState) {
            m_realDeviceCtx->SwapDeviceContextState(pState, ppPreviousState);
        }

        virtual void STDMETHODCALLTYPE ClearView(
            _In_  ID3D11View* pView,
            _In_  const FLOAT Color[ 4 ],
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRect,
            UINT NumRects) {
            m_realDeviceCtx->ClearView(pView, Color, pRect, NumRects);
        }

        virtual void STDMETHODCALLTYPE DiscardView1(
            _In_  ID3D11View* pResourceView,
            _In_reads_opt_(NumRects)  const D3D11_RECT* pRects,
            UINT NumRects) {
            m_realDeviceCtx->DiscardView1(pResourceView, pRects, NumRects);
        }

        virtual HRESULT STDMETHODCALLTYPE UpdateTileMappings(
            _In_  ID3D11Resource* pTiledResource,
            _In_  UINT NumTiledResourceRegions,
            _In_reads_opt_(NumTiledResourceRegions)  const D3D11_TILED_RESOURCE_COORDINATE* pTiledResourceRegionStartCoordinates,
            _In_reads_opt_(NumTiledResourceRegions)  const D3D11_TILE_REGION_SIZE* pTiledResourceRegionSizes,
            _In_opt_  ID3D11Buffer* pTilePool,
            _In_  UINT NumRanges,
            _In_reads_opt_(NumRanges)  const UINT* pRangeFlags,
            _In_reads_opt_(NumRanges)  const UINT* pTilePoolStartOffsets,
            _In_reads_opt_(NumRanges)  const UINT* pRangeTileCounts,
            _In_  UINT Flags) {
            return m_realDeviceCtx->UpdateTileMappings(pTiledResource, NumTiledResourceRegions, pTiledResourceRegionStartCoordinates, pTiledResourceRegionSizes, pTilePool, NumRanges, pRangeFlags, pTilePoolStartOffsets, pRangeTileCounts, Flags);
        }

        virtual HRESULT STDMETHODCALLTYPE CopyTileMappings(
            _In_  ID3D11Resource* pDestTiledResource,
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pDestRegionStartCoordinate,
            _In_  ID3D11Resource* pSourceTiledResource,
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pSourceRegionStartCoordinate,
            _In_  const D3D11_TILE_REGION_SIZE* pTileRegionSize,
            _In_  UINT Flags) {
            return m_realDeviceCtx->CopyTileMappings(pDestTiledResource, pDestRegionStartCoordinate, pSourceTiledResource, pSourceRegionStartCoordinate, pTileRegionSize, Flags);
        }

        virtual void STDMETHODCALLTYPE CopyTiles(
            _In_  ID3D11Resource* pTiledResource,
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pTileRegionStartCoordinate,
            _In_  const D3D11_TILE_REGION_SIZE* pTileRegionSize,
            _In_  ID3D11Buffer* pBuffer,
            _In_  UINT64 BufferStartOffsetInBytes,
            _In_  UINT Flags) {
            m_realDeviceCtx->CopyTiles(pTiledResource, pTileRegionStartCoordinate, pTileRegionSize, pBuffer, BufferStartOffsetInBytes, Flags);
        }

        virtual void STDMETHODCALLTYPE UpdateTiles(
            _In_  ID3D11Resource* pDestTiledResource,
            _In_  const D3D11_TILED_RESOURCE_COORDINATE* pDestTileRegionStartCoordinate,
            _In_  const D3D11_TILE_REGION_SIZE* pDestTileRegionSize,
            _In_  const void* pSourceTileData,
            _In_  UINT Flags) {
            m_realDeviceCtx->UpdateTiles(pDestTiledResource, pDestTileRegionStartCoordinate, pDestTileRegionSize, pSourceTileData, Flags);
        }

        virtual HRESULT STDMETHODCALLTYPE ResizeTilePool(
            _In_  ID3D11Buffer* pTilePool,
            _In_  UINT64 NewSizeInBytes) {
            return m_realDeviceCtx->ResizeTilePool(pTilePool, NewSizeInBytes);
        }

        virtual void STDMETHODCALLTYPE TiledResourceBarrier(
            _In_opt_  ID3D11DeviceChild* pTiledResourceOrViewAccessBeforeBarrier,
            _In_opt_  ID3D11DeviceChild* pTiledResourceOrViewAccessAfterBarrier) {
            m_realDeviceCtx->TiledResourceBarrier(pTiledResourceOrViewAccessBeforeBarrier, pTiledResourceOrViewAccessAfterBarrier);
        }

        virtual BOOL STDMETHODCALLTYPE IsAnnotationEnabled(void) {
            return m_realDeviceCtx->IsAnnotationEnabled( );
        }

        virtual void STDMETHODCALLTYPE SetMarkerInt(
            _In_  LPCWSTR pLabel,
            INT Data) {
            m_realDeviceCtx->SetMarkerInt(pLabel, Data);
        }

        virtual void STDMETHODCALLTYPE BeginEventInt(
            _In_  LPCWSTR pLabel,
            INT Data) {
            m_realDeviceCtx->BeginEventInt(pLabel, Data);
        }

        virtual void STDMETHODCALLTYPE EndEvent(void) {
            m_realDeviceCtx->EndEvent( );
        }


        HRESULT QueryInterface(REFIID riid, void** ppvObject) override
        {
            // DEBUG
            char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
            OLECHAR iidwstr[ sizeof(iidstr) ];
            StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
            WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
            printf("[ID3D11DeviceContextXWrapperX] QueryInterface: %s\n", iidstr);

            if (riid == __uuidof(::ID3D11DeviceContext) || riid == __uuidof(::ID3D11DeviceContext1) ||
                riid == __uuidof(::ID3D11DeviceContext2) || riid == __uuidof(ID3D11DeviceContextX))
            {
                *ppvObject = this;
                AddRef( );
                return S_OK;
            }

            return m_realDeviceCtx->QueryInterface(riid, ppvObject);
        }

        ULONG AddRef( ) override
        {
            printf("[ID3D11DeviceContextXWrapperX] --> AddRef\n");
            return InterlockedIncrement(&m_RefCount);
        }

        ULONG Release( ) override
        {
            printf("[ID3D11DeviceContextXWrapperX] --> Release\n");
            ULONG refCount = InterlockedDecrement(&m_RefCount);
            if (refCount == 0)
            {
                m_realDeviceCtx->Release( );
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
            uint32_t m_Reserved[ 16 ];
        } DUMMYUNIONNAME;

        std::array<FARPROC, 270> m_FUNCTION;

        void InitFunctionsTables( )
        {
            auto virtualPTR = *reinterpret_cast<FARPROC**>(this);

            for (size_t I = 0; I < m_FUNCTION.size( ); I++)
            {
                m_FUNCTION[ I ] = virtualPTR[ I ];
            }
        }


        ::ID3D11DeviceContext2* m_realDeviceCtx;
    };
}