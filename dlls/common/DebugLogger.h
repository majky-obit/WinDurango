#ifndef DEBUG_H
#define DEBUG_H

#include <cstdio>
#include <cstring>

// Function to extract the last folder name (project/module name)
inline const char* RetrieveProjectName(const char* filePath) {
    const char* lastSlash = strrchr(filePath, '/');  // UNIX-like path
    if (!lastSlash) lastSlash = strrchr(filePath, '\\');  // Windows path

    if (lastSlash) {
        const char* secondLastSlash = filePath;  // Start from beginning
        while (secondLastSlash < lastSlash) {  // Find second-to-last slash
            const char* temp = strpbrk(secondLastSlash + 1, "/\\");
            if (temp && temp < lastSlash) secondLastSlash = temp;
            else break;
        }

        if (secondLastSlash != filePath) {
            static char projectName[ 256 ];  // Buffer to store project/module name
            size_t length = lastSlash - secondLastSlash - 1;  // Get only folder name
            length = (length < sizeof(projectName) - 1) ? length : sizeof(projectName) - 1;

#ifdef _MSC_VER
            strncpy_s(projectName, sizeof(projectName), secondLastSlash + 1, length);  // MSVC-safe
#else
            strncpy(projectName, secondLastSlash + 1, length);  // GCC/Clang-safe
            projectName[ length ] = '\0';  // Null-terminate
#endif
            return projectName;
        }
    }
    return "UnknownProject";  // Fallback if no directory structure found
}

#ifdef _DEBUG

#if defined(__GNUC__) || defined(__clang__)  // GCC/Clang
#define FUNCTION_NAME __PRETTY_FUNCTION__
#elif defined(_MSC_VER)  // MSVC
#define FUNCTION_NAME __FUNCSIG__
#else
#define FUNCTION_NAME __FUNCTION__
#endif

// Function to extract only the function name from the full signature
inline const char* RetrieveFunctionName(const char* fullSignature) {
    const char* paren = strchr(fullSignature, '('); // Find first '('
    if (paren) {
        static char functionName[ 256 ]; // Buffer to store function name
        size_t length = paren - fullSignature; // Length before '('
        length = (length < sizeof(functionName) - 1) ? length : sizeof(functionName) - 1;

#ifdef _MSC_VER
        strncpy_s(functionName, sizeof(functionName), fullSignature, length); // Safe for MSVC
#else
        strncpy(functionName, fullSignature, length); // Safe for GCC/Clang
        functionName[ length ] = '\0'; // Null-terminate
#endif
        return functionName;
    }
    return fullSignature; // Fallback if '(' not found
}

// Debug Print Macro (Basic)
#define DEBUG_LOG() printf("Line: %d --> %s --> %s \r\n", __LINE__, RetrieveProjectName(__FILE__) ,RetrieveFunctionName(FUNCTION_NAME) )

// Debug Print Macro (Custom Message)
#define DEBUGLOG(fmt, ...) printf("Line: %d --> %s --> %s " fmt "\r\n", __LINE__ , RetrieveProjectName(__FILE__), __FUNCTION__ , ##__VA_ARGS__)

#else
#define DEBUG_LOG() // No-op in release mode
#define DEBUGLOG(fmt, ...) // No-op in release mode
#endif

#endif // DEBUG_H