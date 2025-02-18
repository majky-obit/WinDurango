#include "dma_engine.h"

void __stdcall wd::D3D11DmaEngineContextX::GetDevice(::ID3D11Device** ppDevice)
{
	printf("D3D11DmaEngineContextX---> GetDevice was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT __stdcall wd::D3D11DmaEngineContextX::GetPrivateData(REFGUID guid, UINT* pDataSize, void* pData)
{
	printf("D3D11DmaEngineContextX---> GetPrivateData was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT __stdcall wd::D3D11DmaEngineContextX::SetPrivateData(REFGUID guid, UINT DataSize, const void* pData)
{
	printf("D3D11DmaEngineContextX---> SetPrivateData was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT __stdcall wd::D3D11DmaEngineContextX::SetPrivateDataInterface(REFGUID guid, const IUnknown* pData)
{
	printf("D3D11DmaEngineContextX---> SetPrivateDataInterface was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT __stdcall wd::D3D11DmaEngineContextX::SetPrivateDataInterfaceGraphics(REFGUID guid, const IGraphicsUnknown* pData)
{
	printf("D3D11DmaEngineContextX---> SetPrivateDataInterfaceGraphics was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

#if !defined(DX_VERSION) || DX_VERSION > MAKEINTVERSION(1, 11)
HRESULT __stdcall wd::D3D11DmaEngineContextX::SetName(LPCWSTR pName)
{
	printf("D3D11DmaEngineContextX---> SetName was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}
#endif

D3D11_DEVICE_CONTEXT_TYPE wd::D3D11DmaEngineContextX::GetType( )
{
	printf("D3D11DmaEngineContextX---> GetType was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return D3D11_DEVICE_CONTEXT_TYPE( );
}

void wd::D3D11DmaEngineContextX::CopyResource(ID3D11Resource*, ID3D11Resource*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> CopyResource was called!!!!!!!\n");

	throw std::logic_error("Not implemented");
}

void wd::D3D11DmaEngineContextX::CopySubresourceRegion(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Resource*, uint32_t, const D3D11_BOX*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> CopySubresourceRegion was called!!!!!!!\n");

	throw std::logic_error("Not implemented");
}

HRESULT wd::D3D11DmaEngineContextX::LZDecompressBuffer(ID3D11Buffer*, uint32_t, ID3D11Buffer*, uint32_t, uint32_t, uint32_t)
{
	printf("D3D11DmaEngineContextX---> LZDecompressBuffer was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}

HRESULT wd::D3D11DmaEngineContextX::LZDecompressTexture(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Buffer*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> LZDecompressTexture was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}

HRESULT wd::D3D11DmaEngineContextX::LZCompressBuffer(ID3D11Buffer*, uint32_t, ID3D11Buffer*, uint32_t, uint32_t, uint32_t)
{
	printf("D3D11DmaEngineContextX---> LZCompressBuffer was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}

HRESULT wd::D3D11DmaEngineContextX::LZCompressTexture(ID3D11Buffer*, ID3D11Resource*, uint32_t, const D3D11_BOX*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> LZCompressTexture was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}

HRESULT wd::D3D11DmaEngineContextX::JPEGDecode(ID3D11Resource*, uint32_t, uint32_t, uint32_t, uint32_t, ID3D11Buffer*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> JPEGDecode was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}

uint64_t wd::D3D11DmaEngineContextX::InsertFence(uint32_t)
{
	printf("D3D11DmaEngineContextX---> InsertFence was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return 0;
}

void wd::D3D11DmaEngineContextX::InsertWaitOnFence(uint32_t, uint64_t)
{
	printf("D3D11DmaEngineContextX---> InsertWaitOnFence was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::D3D11DmaEngineContextX::Submit( )
{
	printf("D3D11DmaEngineContextX---> Submit was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}

void wd::D3D11DmaEngineContextX::CopyLastErrorCodeToMemory(void*)
{
	printf("D3D11DmaEngineContextX---> CopyLastErrorCodeToMemory was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::D3D11DmaEngineContextX::CopyLastErrorCodeToBuffer(ID3D11Buffer*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> CopyLastErrorCodeToBuffer was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::D3D11DmaEngineContextX::CopyMemoryToMemory(void*, void*, uint64_t)
{
	printf("D3D11DmaEngineContextX---> CopyMemoryToMemory was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::D3D11DmaEngineContextX::FillMemoryWithValue(void*, uint64_t, uint32_t)
{
	printf("D3D11DmaEngineContextX---> FillMemoryWithValue was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::D3D11DmaEngineContextX::FillResourceWithValue(ID3D11Resource*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> FillResourceWithValue was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

HRESULT wd::D3D11DmaEngineContextX::LZDecompressMemory(void*, void*, uint32_t, uint32_t)
{
	printf("D3D11DmaEngineContextX---> LZDecompressMemory was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}

HRESULT wd::D3D11DmaEngineContextX::LZCompressMemory(void*, void*, uint32_t, uint32_t)
{
	printf("D3D11DmaEngineContextX---> LZCompressMemory was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
	return E_NOTIMPL;
}

void wd::D3D11DmaEngineContextX::WriteTimestampToMemory(void*)
{
	printf("D3D11DmaEngineContextX---> WriteTimestampToMemory was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::D3D11DmaEngineContextX::WriteTimestampToBuffer(ID3D11Buffer*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> WriteTimestampToBuffer was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::D3D11DmaEngineContextX::WriteValueBottomOfPipe(void*, uint32_t)
{
	printf("D3D11DmaEngineContextX---> WriteValueBottomOfPipe was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}

void wd::D3D11DmaEngineContextX::InsertWaitOnMemory(const void*, uint32_t, D3D11_COMPARISON_FUNC, uint32_t, uint32_t)
{
	printf("D3D11DmaEngineContextX---> InsertWaitOnMemory was called!!!!!!!\n");
	throw std::logic_error("Not implemented");
}
