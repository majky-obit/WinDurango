#include "pch.h"
#include <string>
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

    // Logging APIs
    static void Debug(const char* message = "");
    static void Info(const char* message = "");
    static void Warning(const char* message = "");
    static void Error(const char* message = "");
    static void Fatal(const char* message = "");
    static void NotImplemented(const char* message = "");
};

#if defined(__GNUC__) || defined(__clang__)
#define FUNCTION_NAME __PRETTY_FUNCTION__
#elif defined(_MSC_VER)
#define FUNCTION_NAME __FUNCSIG__
#else
#define FUNCTION_NAME __FUNCTION__
#endif

// Debug macros
#ifdef _DEBUG
#define DEBUG_LOG() Logger::Debug()
#define DEBUGLOG(fmt, ...) Logger::Debug(fmt, ##__VA_ARGS__)
#else
#define DEBUG_LOG()
#define DEBUGLOG(fmt, ...)
#endif

const char* ExtractProjectName(const char* filePath);
const char* ExtractFunctionName(const char* fullSignature);

#endif // DEBUG_LOGGER_H
