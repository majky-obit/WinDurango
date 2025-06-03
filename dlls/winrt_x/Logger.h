#pragma once

#include <string>
#include <cstdarg>
#include <source_location> // C++20 support

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
    // Main logging entry point
    static void Log(LogLevel level, const std::string& message, const char* file, int line, const char* function);

    // Optional C++20 overload using std::source_location
#if __cpp_lib_source_location >= 201907L
    static void Log(LogLevel level,
                    const std::string& message,
                    const std::source_location& location = std::source_location::current( ));
#endif

    // Helper for NotImplemented logging
    static void LogNotImplemented(LogLevel level, int line, const char* file, const char* function);

    // Convenience logging APIs
    static void Debug(const char* message = "");
    static void Info(const char* message = "");
    static void Warning(const char* message = "");
    static void Error(const char* message = "");
    static void Fatal(const char* message = "");

    // NotImplemented (with formatting)
    static void NotImplemented(const char* file, int line, const char* function, const char* fmt = "", ...);

    static void PrintWithContext(int line, const char* file, const char* function, const char* fmt, va_list args);

    // Internal helpers
    static const char* ExtractFunctionName(const char* fullSignature);
    static const char* ExtractProjectName(const char* filePath);
};

// ------------------------------------------------------------------------------------------------
// Compiler-specific macro for full function signature
// ------------------------------------------------------------------------------------------------
#if defined(__GNUC__) || defined(__clang__)
#define FUNCTION_NAME __PRETTY_FUNCTION__
#elif defined(_MSC_VER)
#define FUNCTION_NAME __FUNCSIG__
#else
#define FUNCTION_NAME __FUNCTION__
#endif

// ------------------------------------------------------------------------------------------------
// Macro-based log wrappers (captures callsite info)
// ------------------------------------------------------------------------------------------------
#define LOG_DEBUG(msg, ...)           Logger::Log(LogLevel::Debug, msg, __FILE__, __LINE__, FUNCTION_NAME)
#define LOG_INFO(msg, ...)            Logger::Log(LogLevel::Info, msg, __FILE__, __LINE__, FUNCTION_NAME)
#define LOG_WARNING(msg, ...)         Logger::Log(LogLevel::Warning, msg, __FILE__, __LINE__, FUNCTION_NAME)
#define LOG_ERROR(msg, ...)           Logger::Log(LogLevel::Error, msg, __FILE__, __LINE__, FUNCTION_NAME)
#define LOG_FATAL(msg, ...)           Logger::Log(LogLevel::Fatal, msg, __FILE__, __LINE__, FUNCTION_NAME)
#define LOG_NOT_IMPLEMENTED(...)      Logger::NotImplemented(__FILE__, __LINE__, FUNCTION_NAME, ##__VA_ARGS__)

// ------------------------------------------------------------------------------------------------
// Debug-only short macros (auto-disables in Release)
// ------------------------------------------------------------------------------------------------
#ifdef _DEBUG
#define DEBUG_PRINT()             Logger::Debug()
#define DEBUGPRINT(fmt, ...)      Logger::Debug(fmt, ##__VA_ARGS__)
#else
#define DEBUG_PRINT()
#define DEBUGPRINT(fmt, ...)
#endif

#endif // DEBUG_LOGGER_H
