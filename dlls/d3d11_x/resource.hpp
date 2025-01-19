#pragma once
#include "device_child_x.h"
#include "device_context_x.h"

namespace wdi
{
    D3DINTERFACE(ID3D11Resource, dc8e63f3, d12b, 4952, b4, 7b, 5e, 45, 02, 6a, 86, 2d) : public ID3D11DeviceChild{
	public:
        virtual void STDMETHODCALLTYPE GetType(
            /* [annotation] */
            _Out_  D3D11_RESOURCE_DIMENSION * pResourceDimension) PURE;

        virtual void STDMETHODCALLTYPE SetEvictionPriority(
            /* [annotation] */
            _In_  UINT EvictionPriority) PURE;

        virtual UINT STDMETHODCALLTYPE GetEvictionPriority(void) PURE;
        // xbox extra function
        virtual void STDMETHODCALLTYPE GetDescriptor(D3D11X_DESCRIPTOR_RESOURCE* descriptor) PURE;
    };

    D3DINTERFACE(ID3D11Texture1D, f8fb5c27, c6b3, 4f75, a4, c8, 43, 9a, f2, ef, 56, 4c) : public ID3D11Resource {
	public:
    	virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            _Out_  D3D11_TEXTURE1D_DESC* pDesc) PURE;
    };

    D3DINTERFACE(ID3D11Texture2D, 6f15aaf2, d208, 4e89, 9a, b4, 48, 95, 35, d3, 4f, 9c) : public ID3D11Resource {
	public:
        virtual void STDMETHODCALLTYPE GetDesc(
            /* [annotation] */
            _Out_  D3D11_TEXTURE2D_DESC * pDesc) PURE;
    };

    D3DINTERFACE(ID3D11Texture3D, 037e866e, f56d, 4357, a8, af, 9d, ab, be, 6e, 25, 0e) : public ID3D11Resource {
    	public:
		virtual void STDMETHODCALLTYPE GetDesc(
			/* [annotation] */
			_Out_  D3D11_TEXTURE3D_DESC* pDesc) PURE;
    };
}