//// Config.h
//#pragma once
//
//#include <string>
//#include <mutex>
//#include <iostream>
//#include <filesystem>
//#include <toml++/toml.h>
//
//struct Config {
//private:
//    static inline toml::table configTable;
//    static inline std::mutex configMutex;
//    static inline bool initialized = false;
//
//public:
//    static void Load(const std::string& filename = "config.toml") {
//        std::lock_guard<std::mutex> lock(configMutex);
//
//        if (!std::filesystem::exists(filename)) {
//            std::cerr << "[Config] Config file " << filename << " does not exist. Using defaults." << std::endl;
//            configTable = toml::table{};
//            initialized = true;
//            return;
//        }
//
//        try {
//            configTable = toml::parse_file(filename);
//        }
//        catch (const toml::parse_error& err) {
//            std::cerr << "[Config] Failed to parse " << filename << ": " << err.description( ) << std::endl;
//            configTable = toml::table{};
//        }
//
//        initialized = true;
//    }
//
//    template<typename T>
//    static T Get(const std::string& key, const T& defaultValue) {
//        std::lock_guard<std::mutex> lock(configMutex);
//        if (!initialized) Load( );
//
//        auto val = configTable[ key ];
//        if constexpr (std::is_same_v<T, std::string>) {
//            if (val && val.is_string( )) return val.value_or(defaultValue);
//        }
//        else if constexpr (std::is_same_v<T, int>) {
//            if (val && val.is_integer( )) return static_cast<int>(val.value_or(defaultValue));
//        }
//        else if constexpr (std::is_same_v<T, bool>) {
//            if (val && val.is_boolean( )) return val.value_or(defaultValue);
//        }
//        else if constexpr (std::is_same_v<T, double>) {
//            if (val && val.is_floating_point( )) return val.value_or(defaultValue);
//        }
//        else if constexpr (std::is_same_v<T, float>) {
//            if (val && val.is_floating_point( )) return static_cast<float>(val.value_or(defaultValue));
//        }
//        return defaultValue;
//    }
//
//    static void Set(const std::string& key, const toml::node& value) {
//        std::lock_guard<std::mutex> lock(configMutex);
//        configTable.insert_or_assign(key, value);
//    }
//
//    static void Save(const std::string& filename = "config.toml") {
//        std::lock_guard<std::mutex> lock(configMutex);
//        try {
//            std::ofstream file(filename);
//            file << configTable;
//        }
//        catch (...) {
//            std::cerr << "[Config] Failed to write config to " << filename << std::endl;
//        }
//    }
//};
//
///*
//Usage Example:
//
//#include "Config.h"
//
//int main() {
//    Config::Load("myproject_config.toml");
//
//    bool enableLogging = Config::Get<bool>("Logger.EnableLogging", true);
//    int maxFPS = Config::Get<int>("Graphics.MaxFPS", 60);
//    std::string username = Config::Get<std::string>("User.Name", "Guest");
//    double gamma = Config::Get<double>("Graphics.Gamma", 2.2);
//
//    Config::Set("User.LastLogin", toml::value("2025-06-30T20:30:00"));
//    Config::Save("myproject_config.toml");
//}
//*/
