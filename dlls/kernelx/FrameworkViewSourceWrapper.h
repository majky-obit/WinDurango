/*
================================================================================
DISCLAIMER AND LICENSE REQUIREMENT

This code is provided with the condition that if you use, modify, or distribute
this code in your project, you are required to make your project open source
under a license compatible with the GNU General Public License (GPL) or a
similarly strong copyleft license.

By using this code, you agree to:
1. Disclose your complete source code of any project incorporating this code.
2. Include this disclaimer in any copies or substantial portions of this file.
3. Provide clear attribution to the original author.

If you do not agree to these terms, you do not have permission to use this code.

================================================================================
*/
#pragma once
#include "ICoreApplicationX.h"

class FrameworkViewSourceWrapper : public IFrameworkViewSource
{
public:

	FrameworkViewSourceWrapper(IFrameworkViewSource* windowViewSource)
		: m_realViewSource(windowViewSource)
	{

	}

	HRESULT STDMETHODCALLTYPE CreateView(ABI::Windows::ApplicationModel::Core::IFrameworkView** viewProvider) override;

	// IActivationFactory (IInspectable + IUnknown)
	HRESULT QueryInterface(const IID& riid, void** ppvObject) override;
	ULONG AddRef() override;
	ULONG Release() override;

	HRESULT GetIids(ULONG* iidCount, IID** iids) override;
	HRESULT GetRuntimeClassName(HSTRING* className) override;
	HRESULT GetTrustLevel(TrustLevel* trustLevel) override;

private:
	long m_RefCount = 1;
	IFrameworkViewSource* m_realViewSource;
};