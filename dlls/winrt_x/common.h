#pragma once
#define PRINT_FUNCTION_NAME() printf("[%s]\n", __FUNCSIG__)
#define CONVERT_TO_HSTRING(str) winrt::hstring(std::wstring(str, (str) + strlen(str)))