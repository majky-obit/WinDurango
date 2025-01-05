#pragma once
#include "ID3DX.h"
#include "ID3DDeviceContext.h"
#include <array>



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

}