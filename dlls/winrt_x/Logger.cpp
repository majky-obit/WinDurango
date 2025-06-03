#include "Logger.h"
#include <ctime>
#include <fstream>
#include <iostream>
#include <mutex>
#include <windows.h>
#include "../common/DebugLogger.h"

static std::mutex logMutex;
static std::ofstream logFile("debug.log", std::ios::app);

static const char* ToString(LogLevel level) {
    switch (level) {
    case LogLevel::Debug:          return "DEBUG";
    case LogLevel::Info:           return "INFO";
    case LogLevel::Warning:        return "WARNING";
    case LogLevel::Error:          return "ERROR";
    case LogLevel::Fatal:          return "FATAL";
    case LogLevel::NotImplemented: return "NOT_IMPLEMENTED";
    default:                       return "UNKNOWN";
    }
}

WORD GetConsoleColor(LogLevel level) {
    switch (level) {
    case LogLevel::Debug:          return FOREGROUND_BLUE | FOREGROUND_GREEN;
    case LogLevel::Info:           return FOREGROUND_GREEN;
    case LogLevel::Warning:        return FOREGROUND_RED | FOREGROUND_GREEN;
    case LogLevel::Error:          return FOREGROUND_RED;
    case LogLevel::Fatal:          return BACKGROUND_RED | FOREGROUND_RED | FOREGROUND_INTENSITY;
    case LogLevel::NotImplemented: return FOREGROUND_RED | FOREGROUND_BLUE;
    default:                       return FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
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
    std::string func = Logger::ExtractFunctionName(function);
    std::string timeStr = CurrentTime( );
    const char* project = Logger::ExtractProjectName(file);

    // Console coloring
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    WORD originalAttributes = 0;
    if (GetConsoleScreenBufferInfo(hConsole, &csbi)) {
        originalAttributes = csbi.wAttributes;
        SetConsoleTextAttribute(hConsole, GetConsoleColor(level));
    }

    std::cout << timeStr << " - " << project << "::" << func << " - " << levelStr << " - Line " << line;
    if (!message.empty( )) std::cout << " - " << message;
    std::cout << std::endl;

    if (hConsole) SetConsoleTextAttribute(hConsole, originalAttributes);

    // File logging
    if (logFile.is_open( )) {
        logFile << timeStr << " - " << project << "::" << func << " - " << levelStr << " - Line " << line;
        if (!message.empty( )) logFile << " - " << message;
        logFile << std::endl;
    }
}

void Logger::LogNotImplemented(LogLevel level, int line, const char* file, const char* function) {
    Logger::Log(level, "Feature not implemented", file, line, function);
}

void Logger::Debug(const char* message) { Logger::Log(LogLevel::Debug, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::Info(const char* message) { Logger::Log(LogLevel::Info, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::Warning(const char* message) { Logger::Log(LogLevel::Warning, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::Error(const char* message) { Logger::Log(LogLevel::Error, message, __FILE__, __LINE__, FUNCTION_NAME); }
void Logger::Fatal(const char* message) { Logger::Log(LogLevel::Fatal, message, __FILE__, __LINE__, FUNCTION_NAME); }

void Logger::PrintWithContext(int line, const char* file, const char* function, const char* fmt, va_list args) {
    char formatted[ 1024 ];
    vsnprintf(formatted, sizeof(formatted), fmt, args);
    Logger::Log(LogLevel::NotImplemented, formatted, file, line, function);
}

void Logger::NotImplemented(const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    Logger::PrintWithContext(__LINE__, __FILE__, FUNCTION_NAME, fmt, args);
    va_end(args);
}

const char* Logger::ExtractProjectName(const char* filePath) {
    const char* lastSlash = strrchr(filePath, '/');
    if (!lastSlash) lastSlash = strrchr(filePath, '\\');
    if (lastSlash) {
        const char* secondLastSlash = filePath;
        while (secondLastSlash < lastSlash) {
            const char* temp = strpbrk(secondLastSlash + 1, "/\\");
            if (temp && temp < lastSlash)
                secondLastSlash = temp;
            else
                break;
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

const char* Logger::ExtractFunctionName(const char* fullSignature) {
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
