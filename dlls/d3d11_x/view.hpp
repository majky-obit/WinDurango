#pragma once
#include <emmintrin.h>
#include "device_child_x.h"

namespace wdi
{
    #define D3D11X_DESCRIPTOR_TEXTURE_VIEW_SIZE_IN_OWORDS 2
    #define D3D11X_DESCRIPTOR_TEXTURE_VIEW_SIZE_IN_QWORDS 4
    #define D3D11X_DESCRIPTOR_TEXTURE_VIEW_SIZE_IN_DWORDS 8
    #define D3D11X_DESCRIPTOR_TEXTURE_VIEW_SIZE_IN_BYTES 32

    typedef struct D3D11X_DESCRIPTOR_TEXTURE_VIEW
    {
        union
        {
            __m128i Oword[ D3D11X_DESCRIPTOR_TEXTURE_VIEW_SIZE_IN_OWORDS ];
            UINT64 Qword[ D3D11X_DESCRIPTOR_TEXTURE_VIEW_SIZE_IN_QWORDS ];
            UINT32 Dword[ D3D11X_DESCRIPTOR_TEXTURE_VIEW_SIZE_IN_DWORDS ];
        };

    } D3D11X_DESCRIPTOR_TEXTURE_VIEW;

	D3DINTERFACE(ID3D11View, 839d1216, bb2e, 412b, b7, f4, a9, db, eb, e0, 8e, d1) : public ID3D11DeviceChild
	{
	public:
		ID3D11Resource* m_pResource;
		unsigned int m_Type;

		virtual void STDMETHODCALLTYPE GetResource(
			/* [annotation] */
			_Outptr_  ID3D11Resource** ppResource) PURE;
	};

    D3DINTERFACE(ID3D11RenderTargetView, dfdba067, 0b8d, 4865, 87, 5b, d7, b4, 51, 6c, c1, 64) : public ID3D11View
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            _Out_  D3D11_RENDER_TARGET_VIEW_DESC* pDesc) PURE;

    };

    D3DINTERFACE(ID3D11DepthStencilView, 9fdac92a, 1876, 48c3, af, ad, 25, b9, 4f, 84, a9, b6) : public ID3D11View
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            _Out_  D3D11_DEPTH_STENCIL_VIEW_DESC* pDesc) PURE;

    };

    D3DINTERFACE(ID3D11ShaderResourceView, b0e06fe0, 8192, 4e1a, b1, ca, 36, d7, 41, 47, 10, b2) : public ID3D11View
    {
    public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            _Out_  D3D11_SHADER_RESOURCE_VIEW_DESC* pDesc) PURE;

    };

    D3DINTERFACE(ID3D11UnorderedAccessView, 28acf509, 7f5c, 48f6, 86, 11, f3, 16, 01, 0a, 63, 80) : public ID3D11View
    {
    public:
        D3D11X_DESCRIPTOR_TEXTURE_VIEW m_Descriptor;
        void* m_pAllocationStart;

        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            _Out_  D3D11_UNORDERED_ACCESS_VIEW_DESC* pDesc) PURE;

    };
}