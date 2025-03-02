// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the APPMODEL_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// APPMODEL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef APPMODEL_EXPORTS
#define APPMODEL_API __declspec(dllexport)
#else
#define APPMODEL_API __declspec(dllimport)
#endif

// This class is exported from the dll
class APPMODEL_API Cappmodel {
public:
	Cappmodel(void);
	// TODO: add your methods here.
};
LONG __fastcall GetCurrentXboxLiveInfo_X(unsigned int a1, void* a2, unsigned int a3);
__int64 __fastcall XblRegOpenModuleKey_X(HMODULE a1, __int64 a2, HKEY* a3);
__int64 __fastcall XblRegReadModuleTitleInfo_X(HINSTANCE a1, const unsigned __int16* a2, void* a3, unsigned int a4);
LSTATUS __fastcall XblRegReadTitleInfo_X(HKEY a1, struct _XBOX_LIVE_TITLE_INFO* TitleInfo);
LONG __stdcall GetCurrentApplicationUserModelId_X(UINT32* applicationUserModelIdLength, PWSTR applicationUserModelId);

extern APPMODEL_API int nappmodel;

APPMODEL_API int fnappmodel(void);
