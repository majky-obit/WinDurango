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
#ifndef PCH_H
#define PCH_H

#include "framework.h"
#include "kernelx.h"

#include "CoreWindowWrapperX.h"
#include "ICoreWindowX.h"
#include "../../Thirdparty/Detours/src/detours.h"
#include "..\common\Logger.h"
#include <intrin.h>
#include <winternl.h>
#include <cstdint>
#include <cstdlib>
#include <roapi.h>
#include <wrl.h>
#include <string>
#include <string_view>
// #include <__msvc_string_view.hpp>
#include <ntstatus.h>

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

#endif //PCH_H