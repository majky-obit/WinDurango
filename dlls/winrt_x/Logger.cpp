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

    std::string timeStr = CurrentTime( );
    std::string func = Logger::ExtractFunctionName(function);
    const char* project = Logger::ExtractProjectName(file);
    const char* levelStr = ToString(level);

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    WORD originalAttributes = 0;
    if (GetConsoleScreenBufferInfo(hConsole, &csbi)) {
        originalAttributes = csbi.wAttributes;
        SetConsoleTextAttribute(hConsole, GetConsoleColor(level));
    }

    switch (level) {
    case LogLevel::Debug:
        std::cout << timeStr << " - Debug - " << project << " - " << func;
        break;
    case LogLevel::Info:
        std::cout << timeStr << " - Info";
        break;
    case LogLevel::Warning:
        std::cout << timeStr << " - Warning - " << project << " - " << func;
        break;
    case LogLevel::Error:
    case LogLevel::Fatal:
        std::cout << timeStr << " - " << levelStr << " - " << project << " - " << func << " - Line " << line;
        break;
    case LogLevel::NotImplemented:
        std::cout << timeStr << " - " << project << " - " << func << " - NOT_IMPLEMENTED";
        break;
    default:
        std::cout << timeStr << " - " << levelStr;
        break;
    }

    if (!message.empty( )) std::cout << " - " << message;
    std::cout << std::endl;

    if (hConsole) SetConsoleTextAttribute(hConsole, originalAttributes);

    // File log (flat format)
    if (logFile.is_open( )) {
        logFile << timeStr
            << " - " << project
            << " - " << func
            << " - " << levelStr;
        if (level == LogLevel::Error || level == LogLevel::Fatal)
            logFile << " - Line " << line;
        if (!message.empty( ))
            logFile << " - " << message;
        logFile << std::endl;
    }
}

#if __cpp_lib_source_location >= 201907L
#include <source_location>

void Logger::Log(LogLevel level, const std::string& message, const std::source_location& location) {
    Logger::Log(level, message,
                location.file_name( ),
                static_cast<int>(location.line( )),
                location.function_name( ));
}
#endif

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

void Logger::NotImplemented(const char* file, int line, const char* function, const char* fmt, ...) {
    va_list args;
    va_start(args, fmt);
    Logger::PrintWithContext(line, file, function, fmt, args);
    va_end(args);
}

const char* Logger::ExtractProjectName(const char* filePath) {
    const char* lastSlash = strrchr(filePath, '/');
    if (!lastSlash) lastSlash = strrchr(filePath, '\\');
    const char* fileName = lastSlash ? lastSlash + 1 : filePath;

    const char* dot = strrchr(fileName, '.');
    static char project[ 256 ];
    size_t length = dot ? (size_t) (dot - fileName) : strlen(fileName);
    length = (length < sizeof(project) - 1) ? length : sizeof(project) - 1;

#ifdef _MSC_VER
    strncpy_s(project, sizeof(project), fileName, length);
#else
    strncpy(project, fileName, length);
    project[ length ] = '\0';
#endif
    return project;
}


const char* Logger::ExtractFunctionName(const char* fullSignature) {
    const char* paren = strchr(fullSignature, '(');
    if (!paren)
        return fullSignature;

    const char* end = paren;
    const char* lastColon = nullptr;

    for (const char* p = fullSignature; p < end; ++p) {
        if (p[ 0 ] == ':' && p[ 1 ] == ':')
            lastColon = p;
    }

    const char* start = lastColon ? lastColon + 2 : fullSignature;

    static char functionName[ 256 ];
    size_t length = (size_t) (end - start);
    length = (length < sizeof(functionName) - 1) ? length : sizeof(functionName) - 1;

#ifdef _MSC_VER
    strncpy_s(functionName, sizeof(functionName), start, length);
#else
    strncpy(functionName, start, length);
    functionName[ length ] = '\0';
#endif

    return functionName;
}

