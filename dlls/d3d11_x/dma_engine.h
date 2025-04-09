#pragma once
#include "device_child_x.h"

namespace wdi
{
	D3DINTERFACE(ID3D11DmaEngineContextX, A6332DDB, 8E02, 427D, B0, B7, 34, A1, E6, 1A, 64, 88) : public wdi::ID3D11DeviceChild
	{
		virtual D3D11_DEVICE_CONTEXT_TYPE GetType() = 0;
		virtual void CopyResource(ID3D11Resource*, ID3D11Resource*, uint32_t) = 0;
		virtual void CopySubresourceRegion(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Resource*, uint32_t, const D3D11_BOX*, uint32_t) = 0;
		virtual HRESULT LZDecompressBuffer(ID3D11Buffer*, uint32_t, ID3D11Buffer*, uint32_t, uint32_t, uint32_t) = 0;
		virtual HRESULT LZDecompressTexture(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Buffer*, uint32_t) = 0;
		virtual HRESULT LZCompressBuffer(ID3D11Buffer*, uint32_t, ID3D11Buffer*, uint32_t, uint32_t, uint32_t) = 0;
		virtual HRESULT LZCompressTexture(ID3D11Buffer*, ID3D11Resource*, uint32_t, const D3D11_BOX*, uint32_t) = 0;
		virtual HRESULT JPEGDecode(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Buffer*, uint32_t) = 0;
		virtual uint64_t InsertFence(uint32_t) = 0;
		virtual void InsertWaitOnFence(uint32_t, uint64_t) = 0;
		virtual HRESULT Submit() = 0;
		virtual void CopyLastErrorCodeToMemory(void*) = 0;
		virtual void CopyLastErrorCodeToBuffer(ID3D11Buffer*, uint32_t) = 0;
		virtual void CopyMemoryToMemory(void*, void*, uint64_t) = 0;
		virtual void FillMemoryWithValue(void*, uint64_t, uint32_t) = 0;
		virtual void FillResourceWithValue(ID3D11Resource*, uint32_t) = 0;
		virtual HRESULT LZDecompressMemory(void*, void*, uint32_t, uint32_t) = 0;
		virtual HRESULT LZCompressMemory(void*, void*, uint32_t, uint32_t) = 0;
		virtual void WriteTimestampToMemory(void*) = 0;
		virtual void WriteTimestampToBuffer(ID3D11Buffer*, uint32_t) = 0;
		virtual void WriteValueBottomOfPipe(void*, uint32_t) = 0;
		virtual void InsertWaitOnMemory(const void*, uint32_t, D3D11_COMPARISON_FUNC, uint32_t, uint32_t) = 0;
	};

}

namespace wd 
{
	class D3D11DmaEngineContextX : public wdi::ID3D11DmaEngineContextX
	{
	public:
		D3D11DmaEngineContextX() 
		{
			m_RefCount = 1;
		}

		ULONG AddRef() override
		{
			return InterlockedIncrement(&m_RefCount);
		}

		ULONG Release() override
		{
			ULONG refCount = InterlockedDecrement(&m_RefCount);
			if (refCount == 0) {
				delete this;
			}
			return refCount;
		}

		HRESULT QueryInterface(REFIID riid, void** ppvObject) override
		{
			if (riid == _uuidof(wdi::ID3D11DmaEngineContextX))
			{
				*ppvObject = this;
				AddRef();
				return S_OK;
			}

			if (riid == __uuidof(wdi::IGraphicsUnknown))
			{
				*ppvObject = static_cast<wdi::IGraphicsUnknown*>(this);
				AddRef();
				return S_OK;
			}

			TRACE_NOT_IMPLEMENTED("D3D11DmaEngineContextX");
			*ppvObject = nullptr;
			return E_NOINTERFACE;
		}

		void STDMETHODCALLTYPE GetDevice(::ID3D11Device** ppDevice) override;
		HRESULT STDMETHODCALLTYPE GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateData(REFGUID guid, UINT DataSize, const void* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterface(REFGUID guid, const IUnknown* pData) override;
		HRESULT STDMETHODCALLTYPE SetPrivateDataInterfaceGraphics(REFGUID guid, const IGraphicsUnknown* pData) override;
#if !defined(DX_VERSION) || DX_VERSION > MAKEINTVERSION(1, 11)
	    HRESULT STDMETHODCALLTYPE SetName(LPCWSTR pName) override;
#endif


		D3D11_DEVICE_CONTEXT_TYPE GetType() override;
		void CopyResource(ID3D11Resource*, ID3D11Resource*, uint32_t) override;
		void CopySubresourceRegion(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Resource*, uint32_t, const D3D11_BOX*, uint32_t) override;
		HRESULT LZDecompressBuffer(ID3D11Buffer*, uint32_t, ID3D11Buffer*, uint32_t, uint32_t, uint32_t) override;
		HRESULT LZDecompressTexture(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Buffer*, uint32_t) override;
		HRESULT LZCompressBuffer(ID3D11Buffer*, uint32_t, ID3D11Buffer*, uint32_t, uint32_t, uint32_t) override;
		HRESULT LZCompressTexture(ID3D11Buffer*, ID3D11Resource*, uint32_t, const D3D11_BOX*, uint32_t) override;
		HRESULT JPEGDecode(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Buffer*, uint32_t) override;
		uint64_t InsertFence(uint32_t) override;
		void InsertWaitOnFence(uint32_t, uint64_t) override;
		HRESULT Submit() override;
		void CopyLastErrorCodeToMemory(void*) override;
		void CopyLastErrorCodeToBuffer(ID3D11Buffer*, uint32_t) override;
		void CopyMemoryToMemory(void*, void*, uint64_t) override;
		void FillMemoryWithValue(void*, uint64_t, uint32_t) override;
		void FillResourceWithValue(ID3D11Resource*, uint32_t) override;
		HRESULT LZDecompressMemory(void*, void*, uint32_t, uint32_t) override;
		HRESULT LZCompressMemory(void*, void*, uint32_t, uint32_t) override;
		void WriteTimestampToMemory(void*) override;
		void WriteTimestampToBuffer(ID3D11Buffer*, uint32_t) override;
		void WriteValueBottomOfPipe(void*, uint32_t) override;
		void InsertWaitOnMemory(const void*, uint32_t, D3D11_COMPARISON_FUNC, uint32_t, uint32_t) override;

	private:
		ULONG m_refcount = 0;
	};
}


