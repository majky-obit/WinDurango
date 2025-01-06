// ReSharper disable CppInconsistentNaming
// ReSharper disable CppParameterMayBeConst
// ReSharper disable CppClangTidyClangDiagnosticMicrosoftCast
// ReSharper disable CppClangTidyClangDiagnosticUndefinedReinterpretCast
// ReSharper disable CppClangTidyClangDiagnosticShadow
// ReSharper disable CppClangTidyClangDiagnosticCastFunctionTypeStrict
// ReSharper disable CppFunctionalStyleCast
// ReSharper disable CppClangTidyClangDiagnosticCastAlign
// ReSharper disable CppClangTidyClangDiagnosticCastQual
// ReSharper disable CppZeroConstantCanBeReplacedWithNullptr
#pragma once

void debug_printf(const char* format, ...) {
	char buffer[1024];  // Temporary buffer to hold the formatted string
	va_list args;

	// Start handling the variable argument list
	va_start(args, format);

	// Format the input string and store it in the buffer
	vsnprintf(buffer, sizeof(buffer), format, args);

	// End argument handling
	va_end(args);

	// Send the formatted string to the debugger
	OutputDebugStringA(buffer);
}

inline bool IsClassName(HSTRING classId, const char* classIdName)
{
	const wchar_t* classIdString = WindowsGetStringRawBuffer(classId, nullptr);
	std::wstring classIdWString(classIdString);
	const std::string classIdStringUTF8(classIdWString.begin(), classIdWString.end());

	return (classIdStringUTF8 == classIdName);
}

typedef HRESULT(*DllGetForCurrentThreadFunc) (ICoreWindowStatic*, CoreWindow**);
typedef HRESULT(*DllGetActivationFactoryFunc) (HSTRING, IActivationFactory**);

DllGetForCurrentThreadFunc pDllGetForCurrentThread = nullptr;
DllGetActivationFactoryFunc pDllGetActivationFactory = nullptr;

HRESULT(STDMETHODCALLTYPE* TrueGetForCurrentThread)(ICoreWindowStatic* staticWindow, CoreWindow** window);
HRESULT(WINAPI* TrueRoGetActivationFactory)(HSTRING classId, REFIID iid, void** factory) = RoGetActivationFactory;

inline HRESULT STDMETHODCALLTYPE GetForCurrentThread_Hook(ICoreWindowStatic* paramThis, CoreWindow** window)
{
	// ReSharper disable once CppLocalVariableMayBeConst
	HRESULT hr = TrueGetForCurrentThread(paramThis, window);

	//*reinterpret_cast<void**>(window) = new CoreWindowX(*window);
	auto p = *reinterpret_cast<void**>(window);

	p = new CoreWindowX(*window);

	return hr;
}

inline HRESULT WINAPI RoGetActivationFactory_Hook(HSTRING classId, REFIID iid, void** factory)
{
	auto hr = TrueRoGetActivationFactory(classId, iid, factory);

	if (FAILED(hr))
	{
		auto library = LoadPackagedLibrary(L"winrt_x.dll", 0);

		if (!library) library = LoadLibraryW(L"winrt_x.dll");

		if (!library) return hr;

		pDllGetActivationFactory = reinterpret_cast<DllGetActivationFactoryFunc>
			(GetProcAddress(library, "DllGetActivationFactory"));

		if (!pDllGetActivationFactory)
			return hr;

		ComPtr<IActivationFactory> _factory;


		if (IsClassName(classId, "Windows.UI.Core.CoreWindow"))
		{
			ComPtr<ICoreWindowStatic> coreWindowStatic;

			hr = RoGetActivationFactory(HStringReference(RuntimeClass_Windows_UI_Core_CoreWindow).Get(), IID_PPV_ARGS(&coreWindowStatic));

			*reinterpret_cast<void**>(&TrueGetForCurrentThread) = (*reinterpret_cast<void***>(coreWindowStatic.Get()))[6];

			DetourAttach(&TrueGetForCurrentThread, GetForCurrentThread_Hook);
			//return coreWindowStatic.CopyTo(iid, factory);
		}
		else if (IsClassName(classId, "Windows.ApplicationModel.Core.CoreApplication")) {
			ComPtr<ICoreApplication>
		}
		else
		{
			hr = pDllGetActivationFactory(classId, _factory.GetAddressOf());
		}

		if (FAILED(hr)) return hr;

		return _factory.CopyTo(iid, factory);
	}

	return hr;
}