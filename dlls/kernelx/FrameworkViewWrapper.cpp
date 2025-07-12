#include "pch.h"
#include "FrameworkViewWrapper.h"




HRESULT __stdcall FrameworkViewWrapper::Initialize(ABI::Windows::ApplicationModel::Core::ICoreApplicationView* applicationView)
{
	return m_realView->Initialize(applicationView);
}

HRESULT STDMETHODCALLTYPE FrameworkViewWrapper::SetWindow(ABI::Windows::UI::Core::ICoreWindow* window)
{
	Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow> original(window);
	Microsoft::WRL::ComPtr<ABI::Windows::UI::Core::ICoreWindow> wrapped;

	// Create the wrapper using MakeAndInitialize
	HRESULT hr = Microsoft::WRL::MakeAndInitialize<CoreWindowWrapperX>(&wrapped, original);
	if (FAILED(hr))
	{
		return hr;
	}

	// Forward to the real view with the wrapped ICoreWindow
	return m_realView->SetWindow(wrapped.Get());
}


HRESULT __stdcall FrameworkViewWrapper::Load(HSTRING entryPoint)
{
	return m_realView->Load(entryPoint);
}

#include <winrt/Windows.Foundation.h> // Include necessary namespace for Platform::COMException  

HRESULT __stdcall FrameworkViewWrapper::Run()  
{  
   try  
   {  
       wprintf(L"Entering Run()\n");  
       return m_realView->Run();  
   }  
   catch (winrt::hresult_error const& ex) // Replace Platform::COMException with winrt::hresult_error  
   {  
       wprintf(L"COMException caught in Run: HRESULT=0x%08X\n", ex.code());  
       throw; // Re-throw for debugger, or return E_FAIL  
   }  
}


HRESULT __stdcall FrameworkViewWrapper::Uninitialize(void)
{
	return m_realView->Uninitialize();
}

HRESULT FrameworkViewWrapper::QueryInterface(const IID& riid, void** ppvObject)
{
	LPOLESTR str = nullptr;
	StringFromIID(riid, &str);
	wprintf(L"FrameworkViewWrapper [QI] IID Requested: %s\n", str);
	CoTaskMemFree(str);

	if (riid == __uuidof(IFrameworkView) ||
		riid == __uuidof(ICoreApplicationExit) ||
		riid == __uuidof(IUnknown) ||
		riid == __uuidof(IInspectable))
	{
		*ppvObject = this;
		AddRef();
		return S_OK;
	}
	else
	{
		/*/ DEBUG
		char iidstr[sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}")];
		OLECHAR iidwstr[sizeof(iidstr)];
		StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
		WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
		MessageBoxA(nullptr, iidstr, typeid(*this).name(), MB_OK);*/
	}

	return m_realView->QueryInterface(riid, ppvObject);
}

ULONG FrameworkViewWrapper::AddRef()
{
	return InterlockedIncrement(&m_RefCount);
}

ULONG FrameworkViewWrapper::Release()
{
	ULONG refCount = InterlockedDecrement(&m_RefCount);
	if (refCount == 0)
		delete this;
	return refCount;
}

HRESULT FrameworkViewWrapper::GetIids(ULONG* iidCount, IID** iids)
{
	return m_realView->GetIids(iidCount, iids);
}

HRESULT FrameworkViewWrapper::GetRuntimeClassName(HSTRING* className)
{
	return m_realView->GetRuntimeClassName(className);
}

HRESULT FrameworkViewWrapper::GetTrustLevel(TrustLevel* trustLevel)
{
	return m_realView->GetTrustLevel(trustLevel);
}