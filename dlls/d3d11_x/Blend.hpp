#include "device_child_x.h"

namespace wdi
{
	D3DINTERFACE(ID3D11BlendState, 75b68faa, 347d, 4159, 8f, 45, a0, 64, 0f, 01, cd, 9a) : public ID3D11DeviceChild
	{
	public:
		virtual void STDMETHODCALLTYPE GetDesc(
			/* [annotation] */
			_Out_  D3D11_BLEND_DESC* pDesc) PURE;
	};
}

namespace wd
{
	class blend_state : public wdi::ID3D11BlendState
	{
	public:
		blend_state(::ID3D11BlendState* blendState) : wrapped_interface(blendState)
		{
			wrapped_interface->AddRef();
		}
		IGU_DEFINE_REF

		HRESULT QueryInterface(const IID& riid, void** ppvObject) override
		{
			if (riid == __uuidof(wdi::ID3D11BlendState))
			{
				*ppvObject = this;
				AddRef();
				return S_OK;
			}

			TRACE_INTERFACE_NOT_HANDLED("blend_state");
			*ppvObject = nullptr;
			return E_NOINTERFACE;
		}
		void STDMETHODCALLTYPE GetDesc(D3D11_BLEND_DESC* pDesc) override
		{
			wrapped_interface->GetDesc(pDesc);
		}

		void GetDevice(ID3D11Device** ppDevice) override
		{
			printf("WARN: texture_2d::GetDevice returns a PC device!!\n");
			wrapped_interface->GetDevice(ppDevice);
		}

		HRESULT GetPrivateData(const GUID& guid, UINT* pDataSize, void* pData) override
		{
			return wrapped_interface->GetPrivateData(guid, pDataSize, pData);
		}

		HRESULT SetPrivateData(const GUID& guid, UINT DataSize, const void* pData) override
		{
			return wrapped_interface->SetPrivateData(guid, DataSize, pData);
		}

		HRESULT SetPrivateDataInterface(const GUID& guid, const IUnknown* pData) override
		{
			return wrapped_interface->SetPrivateDataInterface(guid, pData);
		}

		HRESULT SetPrivateDataInterfaceGraphics(const GUID& guid, const IGraphicsUnknown* pData) override
		{
			TRACE_NOT_IMPLEMENTED("blend_state");
			return E_NOTIMPL;
		}

		::ID3D11BlendState *wrapped_interface;
	};
}