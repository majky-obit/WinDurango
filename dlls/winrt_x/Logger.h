#pragma once

#include <string>
#include <cstdarg>

#ifndef DEBUG_LOGGER_H
#define DEBUG_LOGGER_H

enum class LogLevel {
    Debug,
    Info,
    Warning,
    Error,
    Fatal,
    NotImplemented
};

class Logger {
public:
    static void Log(LogLevel level, const std::string& message, const char* file, int line, const char* function);
    static void LogNotImplemented(LogLevel level, int line, const char* file, const char* function);

    // Logging APIs
    static void Debug(const char* message = "");
    static void Info(const char* message = "");
    static void Warning(const char* message = "");
    static void Error(const char* message = "");
    static void Fatal(const char* message = "");

    // Updated NotImplemented with caller context
    static void NotImplemented(const char* fmt, ...);

    static void PrintWithContext(int line, const char* file, const char* function, const char* fmt, va_list args);

    static const char* ExtractFunctionName(const char* fullSignature);
    static const char* ExtractProjectName(const char* filePath);
};

// Function name macro (compiler-specific)
#if defined(__GNUC__) || defined(__clang__)
#define FUNCTION_NAME __PRETTY_FUNCTION__
#elif defined(_MSC_VER)
#define FUNCTION_NAME __FUNCSIG__
#else
#define FUNCTION_NAME __FUNCTION__
#endif

// NotImplemented macro for correct callsite info
#define LOG_NOTIMPLEMENTED(...) Logger::NotImplemented(__FILE__, __LINE__, FUNCTION_NAME, ##__VA_ARGS__)

// Debug macros
#ifdef _DEBUG
#define DEBUG_PRINT() Logger::Debug()
#define DEBUGPRINT(fmt, ...) Logger::Debug(fmt, ##__VA_ARGS__)
#else
#define DEBUG_PRINT()
#define DEBUGPRINT(fmt, ...)
#endif

#endif // DEBUG_LOGGER_H
