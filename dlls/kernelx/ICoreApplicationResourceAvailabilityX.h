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
#include <winrt/Windows.ApplicationModel.h>
#include <windows.ui.core.h>

using namespace ABI::Windows::ApplicationModel;
using namespace ABI::Windows::ApplicationModel::Activation;
using namespace ABI::Windows::ApplicationModel::Core;
using namespace ABI::Windows::Foundation;
using namespace ABI::Windows::System;

enum ResourceAvailability
{
	ResourceAvailability_Full,
	ResourceAvailability_Constrained,
	ResourceAvailability_FullWithExtendedSystemReserve,
};

MIDL_INTERFACE("9FF3799E-6E83-468C-A5B0-501CE6BB0FA1")
ICoreApplicationResourceAvailabilityX : public IInspectable
{
public:
	STDMETHOD(_abi_get_ResourceAvailability)(ResourceAvailability *) PURE;
	STDMETHOD(_abi_add_ResourceAvailabilityChanged)(winrt::Windows::Foundation::EventHandler<IInspectable>* handler, EventRegistrationToken* token) PURE;
	STDMETHOD(_abi_remove_ResourceAvailabilityChanged)(EventRegistrationToken) PURE;
};