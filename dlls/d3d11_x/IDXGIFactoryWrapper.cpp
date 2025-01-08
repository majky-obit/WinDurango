#include "pch.h"
#include "IDXGIWrappers.h"
#include "ID3DWrappers.h"
#include <windows.ui.core.h>
#include "../kernelx/CoreWindowWrapperX.h"

namespace d3d11x
{

	HRESULT d3d11x::IDXGIFactoryWrapper::QueryInterface(REFIID riid, void** ppvObject)
		{
			if (riid == __uuidof(IDXGIFactory) ||
				riid == __uuidof(IDXGIFactory1) ||
				riid == __uuidof(IDXGIFactory2))
			{
				*ppvObject = this;
				AddRef( );
				return S_OK;
			}

			// DEBUG
			char iidstr[ sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}") ];
			OLECHAR iidwstr[ sizeof(iidstr) ];
			StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
			WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
			printf("[IDXGIFactoryWrapper] QueryInterface: %s\n", iidstr);

			
			return m_realFactory->QueryInterface(riid, ppvObject);
		}

	

	ULONG IDXGIFactoryWrapper::AddRef( )
	{
		return InterlockedIncrement(&m_refCount);
	}

	ULONG IDXGIFactoryWrapper::Release( )
	{
		ULONG refCount = InterlockedDecrement(&m_refCount);
		if (refCount == 0)
			delete this;
		return refCount;
	}



	HRESULT __stdcall IDXGIFactoryWrapper::SetPrivateData(REFGUID Name, UINT DataSize, const void* pData)
	{
		return m_realFactory->SetPrivateData(Name, DataSize, pData);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::SetPrivateDataInterface(REFGUID Name, const IUnknown* pUnknown)
	{
		return m_realFactory->SetPrivateDataInterface(Name, pUnknown);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::GetPrivateData(REFGUID Name, UINT* pDataSize, void* pData)
	{
		return m_realFactory->GetPrivateData(Name, pDataSize, pData);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::GetParent(REFIID riid, void** ppParent)
	{
		return m_realFactory->GetParent(riid, ppParent);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::EnumAdapters(UINT Adapter, IDXGIAdapter** ppAdapter)
	{
		return m_realFactory->EnumAdapters(Adapter, ppAdapter);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::MakeWindowAssociation(HWND WindowHandle, UINT Flags)
	{
		return m_realFactory->MakeWindowAssociation(WindowHandle, Flags);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::GetWindowAssociation(HWND* pWindowHandle)
	{
		return m_realFactory->GetWindowAssociation(pWindowHandle);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::CreateSwapChain(IGraphicsUnknown* pDevice, DXGI_SWAP_CHAIN_DESC* pDesc, IDXGISwapChain** ppSwapChain)
	{
		return m_realFactory->CreateSwapChain(reinterpret_cast<IUnknown*>(pDevice), pDesc, ppSwapChain);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::CreateSoftwareAdapter(HMODULE Module, IDXGIAdapter** ppAdapter)
	{
		return m_realFactory->CreateSoftwareAdapter(Module, ppAdapter);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::EnumAdapters1(UINT Adapter, IDXGIAdapter1** ppAdapter)
	{
		return m_realFactory->EnumAdapters1(Adapter, ppAdapter);
	}

	BOOL __stdcall IDXGIFactoryWrapper::IsCurrent(void)
	{
		return m_realFactory->IsCurrent( );
	}

	BOOL __stdcall IDXGIFactoryWrapper::IsWindowedStereoEnabled(void)
	{
		return m_realFactory->IsWindowedStereoEnabled( );
	}

	HRESULT __stdcall IDXGIFactoryWrapper::CreateSwapChainForHwnd(IGraphicsUnknown* pDevice, HWND hWnd, const DXGI_SWAP_CHAIN_DESC1* pDesc, const DXGI_SWAP_CHAIN_FULLSCREEN_DESC* pFullscreenDesc, IDXGIOutput* pRestrictToOutput, IDXGISwapChain1** ppSwapChain)
	{
		return m_realFactory->CreateSwapChainForHwnd(reinterpret_cast<IUnknown*>(pDevice), hWnd, pDesc, pFullscreenDesc, pRestrictToOutput, ppSwapChain);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::CreateSwapChainForCoreWindow(IGraphicsUnknown* pDevice, IUnknown* pWindow, const DXGI_SWAP_CHAIN_DESC1* pDesc, IDXGIOutput* pRestrictToOutput, IDXGISwapChain1_X** ppSwapChain)
	{

		IDXGISwapChain1* swap = nullptr;
		HRESULT hr = m_realFactory->CreateSwapChainForCoreWindow(reinterpret_cast<IUnknown*>(pDevice), reinterpret_cast<CoreWindowWrapperX*>(pWindow)->m_realWindow, pDesc, pRestrictToOutput, &swap);

		*ppSwapChain = new IDXGISwapChainWrapper(swap);
		return hr;
	}

	HRESULT __stdcall IDXGIFactoryWrapper::GetSharedResourceAdapterLuid(HANDLE hResource, LUID* pLuid)
	{
		return m_realFactory->GetSharedResourceAdapterLuid(hResource, pLuid);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::RegisterStereoStatusWindow(HWND WindowHandle, UINT wMsg, DWORD* pdwCookie)
	{
		return m_realFactory->RegisterStereoStatusWindow(WindowHandle, wMsg, pdwCookie);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::RegisterStereoStatusEvent(HANDLE hEvent, DWORD* pdwCookie)
	{
		return m_realFactory->RegisterStereoStatusEvent(hEvent, pdwCookie);
	}

	void __stdcall IDXGIFactoryWrapper::UnregisterStereoStatus(DWORD dwCookie)
	{
		return m_realFactory->UnregisterStereoStatus(dwCookie);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::RegisterOcclusionStatusWindow(HWND WindowHandle, UINT wMsg, DWORD* pdwCookie)
	{
		return m_realFactory->RegisterOcclusionStatusWindow(WindowHandle, wMsg, pdwCookie);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::RegisterOcclusionStatusEvent(HANDLE hEvent, DWORD* pdwCookie)
	{
		return m_realFactory->RegisterOcclusionStatusEvent(hEvent, pdwCookie);
	}

	void __stdcall IDXGIFactoryWrapper::UnregisterOcclusionStatus(DWORD dwCookie)
	{
		return m_realFactory->UnregisterOcclusionStatus(dwCookie);
	}

	HRESULT __stdcall IDXGIFactoryWrapper::CreateSwapChainForComposition(IGraphicsUnknown* pDevice, const DXGI_SWAP_CHAIN_DESC1* pDesc, IDXGIOutput* pRestrictToOutput, IDXGISwapChain1** ppSwapChain)
	{
		return m_realFactory->CreateSwapChainForComposition(reinterpret_cast<IUnknown*>(pDevice), pDesc, pRestrictToOutput, ppSwapChain);
	}

}
