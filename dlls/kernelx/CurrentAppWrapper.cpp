#include "pch.h"
#include "CurrentAppWrapper.hpp"

HRESULT __stdcall CurrentAppWrapperX::QueryInterface(REFIID riid, void** ppvObject)
{
	if (riid == __uuidof(ICurrentAppX))
	{
		*ppvObject = reinterpret_cast<ICurrentAppX*>(this);
		AddRef();
		return S_OK;
	}

	HRESULT hr = m_realCurrentApp->QueryInterface(riid, ppvObject);
	if (FAILED(hr))
	{
		char iidstr[sizeof("{AAAAAAAA-BBBB-CCCC-DDEE-FFGGHHIIJJKK}")];
		OLECHAR iidwstr[sizeof(iidstr)];
		StringFromGUID2(riid, iidwstr, ARRAYSIZE(iidwstr));
		WideCharToMultiByte(CP_UTF8, 0, iidwstr, -1, iidstr, sizeof(iidstr), nullptr, nullptr);
		printf("[CurrentAppWrapperX] Interface Not Implemented: %s\n", iidstr);
	}

	*ppvObject = nullptr;
	return E_NOINTERFACE;
}

ULONG __stdcall CurrentAppWrapperX::AddRef()
{
	return InterlockedIncrement(&m_RefCount);
}

ULONG __stdcall CurrentAppWrapperX::Release()
{
	ULONG refCount = InterlockedDecrement(&m_RefCount);
	if (refCount == 0)
	{
		m_realCurrentApp->Release();
		delete this;
	}
	return refCount;
}

HRESULT CurrentAppWrapperX::GetIids(ULONG* iidCount, IID** iids)
{
	printf("[CurrentAppWrapperX] GetIids\n");
	return m_realCurrentApp->GetIids(iidCount, iids);
}

HRESULT CurrentAppWrapperX::GetRuntimeClassName(HSTRING* className)
{
	printf("[CurrentAppWrapperX] GetRuntimeClassName\n");
	return m_realCurrentApp->GetRuntimeClassName(className);
}

HRESULT CurrentAppWrapperX::GetTrustLevel(TrustLevel* trustLevel)
{
	printf("[CurrentAppWrapperX] GetTrustLevel\n");
	return m_realCurrentApp->GetTrustLevel(trustLevel);
}

HRESULT CurrentAppWrapperX::get_LicenseInformation(ABI::Windows::ApplicationModel::Store::ILicenseInformation** value)
{
	printf("[CurrentAppWrapperX] get_LicenseInformation\n");
	return E_NOTIMPL;
}

HRESULT CurrentAppWrapperX::get_LinkUri(ABI::Windows::Foundation::IUriRuntimeClass** value)
{
	return m_realCurrentApp->get_LinkUri(value);
}

HRESULT CurrentAppWrapperX::get_AppId(GUID* value)
{
	return m_realCurrentApp->get_AppId(value);
}

HRESULT CurrentAppWrapperX::RequestAppPurchaseAsync(boolean includeReceipt,
	ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t** requestAppPurchaseOperation)
{
	return m_realCurrentApp->RequestAppPurchaseAsync(includeReceipt, requestAppPurchaseOperation);
}

HRESULT CurrentAppWrapperX::RequestProductPurchaseAsync(HSTRING productId, boolean includeReceipt,
	ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t** requestProductPurchaseOperation)
{
	return S_OK;
}

HRESULT CurrentAppWrapperX::LoadListingInformationAsync(
	ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CStore__CListingInformation_t**
	loadListingOperation)
{
	return m_realCurrentApp->LoadListingInformationAsync(loadListingOperation);
}

HRESULT CurrentAppWrapperX::GetAppReceiptAsync(
	ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t** appReceiptOperation)
{
	return m_realCurrentApp->GetAppReceiptAsync(appReceiptOperation);
}

HRESULT CurrentAppWrapperX::GetProductReceiptAsync(HSTRING productId,
	ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t** getProductReceiptOperation)
{
	return m_realCurrentApp->GetProductReceiptAsync(productId, getProductReceiptOperation);
}
