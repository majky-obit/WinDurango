
#include "Logger.h"
#include <ctime>
#include <fstream>
#include <iostream>
#include <mutex>

static std::mutex logMutex;
static std::ofstream logFile("debug.log", std::ios::app);

static const char* ToString(LogLevel level) {
    switch (level) {
    case LogLevel::Debug: return "DEBUG";
    case LogLevel::Info: return "INFO";
    case LogLevel::Warning: return "WARNING";
    case LogLevel::Error: return "ERROR";
    case LogLevel::Fatal: return "FATAL";
    case LogLevel::NotImplemented: return "NOT_IMPLEMENTED";
    default: return "UNKNOWN";
    }
}

static const char* LevelColor(LogLevel level) {
    switch (level) {
    case LogLevel::Debug: return "\x1B[36m"; // Cyan
    case LogLevel::Info: return "\x1B[32m";  // Green
    case LogLevel::Warning: return "\x1B[33m"; // Yellow
    case LogLevel::Error: return "\x1B[31m"; // Red
    case LogLevel::Fatal: return "\x1B[41m"; // Red Background
    case LogLevel::NotImplemented: return "\x1B[35m"; // Magenta
    default: return "\x1B[0m";
    }
}

static std::string CurrentTime( ) {
    std::time_t now = std::time(nullptr);
    char buffer[ 32 ];
    std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %I:%M:%S %p", std::localtime(&now));
    return buffer;
}

void Logger::Log(LogLevel level, const std::string& message, const char* file, int line, const char* function) {
    std::lock_guard<std::mutex> lock(logMutex);

    const char* levelStr = ToString(level);
    const char* color = LevelColor(level);
    const char* reset = "\x1B[0m";

    std::string func = ExtractFunctionName(function);
    std::string timeStr = CurrentTime( );

    // Console
    std::cout << color << timeStr << " - " << func << " - " << levelStr << " - Line " << line;
    if (!message.empty( )) std::cout << " - " << message;
    std::cout << reset << std::endl;

    // File
    if (logFile.is_open( )) {
        logFile << timeStr << " - " << func << " - " << levelStr << " - Line " << line;
        if (!message.empty( )) logFile << " - " << message;
        logFile << std::endl;
    }
}

// Shortcuts
void Logger::Debug(const char* message) { Log(LogLevel::Debug, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::Info(const char* message) { Log(LogLevel::Info, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::Warning(const char* message) { Log(LogLevel::Warning, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::Error(const char* message) { Log(LogLevel::Error, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::Fatal(const char* message) { Log(LogLevel::Fatal, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::NotImplemented(const char* message) { Log(LogLevel::NotImplemented, message, __FILE__, __LINE__, FUNCTION_NAME); }

// Utility
const char* ExtractProjectName(const char* filePath) {
    const char* lastSlash = strrchr(filePath, '/');
    if (!lastSlash) lastSlash = strrchr(filePath, '\\');
    if (lastSlash) {
        const char* secondLastSlash = filePath;
        while (secondLastSlash < lastSlash) {
            const char* temp = strpbrk(secondLastSlash + 1, "/\\");
            if (temp && temp < lastSlash) secondLastSlash = temp;
            else break;
        }
        if (secondLastSlash != filePath) {
            static char projectName[ 256 ];
            size_t length = lastSlash - secondLastSlash - 1;
            length = (length < sizeof(projectName) - 1) ? length : sizeof(projectName) - 1;
#ifdef _MSC_VER
            strncpy_s(projectName, sizeof(projectName), secondLastSlash + 1, length);
#else
            strncpy(projectName, secondLastSlash + 1, length);
            projectName[ length ] = '\0';
#endif
            return projectName;
        }
    }
    return "UnknownProject";
}

const char* ExtractFunctionName(const char* fullSignature) {
    const char* paren = strchr(fullSignature, '(');
    if (paren) {
        static char functionName[ 256 ];
        size_t length = paren - fullSignature;
        length = (length < sizeof(functionName) - 1) ? length : sizeof(functionName) - 1;
#ifdef _MSC_VER
        strncpy_s(functionName, sizeof(functionName), fullSignature, length);
#else
        strncpy(functionName, fullSignature, length);
        functionName[ length ] = '\0';
#endif
        return functionName;
    }
    return fullSignature;
}
