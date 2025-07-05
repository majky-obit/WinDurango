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
#include "EtwPlus.h"
#include "pch.h"
#include <stdio.h>
#include "../common/Logger.h"
          
VOID __stdcall EtxFillCommonFields_v7_X(EVENT_DATA_DESCRIPTOR* eventDataDescriptors, UINT8* buffer, UINT32 bufferSize) {
	LOG_NOT_IMPLEMENTED("[EtxFillCommonFields_v7_X] Not implemented yet.");
    // Implementation here
}

ULONG __stdcall EtxRegister_X(EVENT_PROVIDER_DESCRIPTOR* provider, REGHANDLE* handle) {
	LOG_NOT_IMPLEMENTED("[EtxRegister_X] Not implemented yet.");
    return 0;
}

ULONG __stdcall EtxUnregister_X(EVENT_PROVIDER_DESCRIPTOR* provider, REGHANDLE* handle) {
	LOG_NOT_IMPLEMENTED("[EtxUnregister_X] Not implemented yet.");
    REGHANDLE v3; // rcx

    v3 = *handle;
    if (*handle)
    {
        *handle = 0i64;
        EventUnregister(v3);
        //sub_180001658(provider);
    }
    return 0;
}

ULONG __stdcall EtxEventWrite_X(
    __in const EVENT_DESCRIPTOR_STRUCT* eventDescriptor,
    __in const EVENT_PROVIDER_DESCRIPTOR* providerDescriptor,
    __in REGHANDLE handle,
    __in ULONG dataCount,
    __in const EVENT_DATA_DESCRIPTOR* eventData
) {
	LOG_NOT_IMPLEMENTED("[EtxEventWrite_X] Not implemented yet.");
    // Implementation here
    return 0;
}

void __stdcall EtxSuspendUploading_X( ) {
	LOG_NOT_IMPLEMENTED("[EtxSuspendUploading_X] Not implemented yet.");
    // Implementation here
}

void __stdcall
EtxResumeUploading_X( ) {
	LOG_NOT_IMPLEMENTED("[EtxResumeUploading_X] Not implemented yet.");
    // Implementation here
}
