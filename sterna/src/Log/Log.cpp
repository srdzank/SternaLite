#include "Log.h"
#include <fstream>
#include <iostream>

Log* Log::pInstance = nullptr;

// ✅ Static accessor
Log* Log::Inst(const std::string& filename) {
    if (!pInstance)
        pInstance = new Log(filename);
    return pInstance;
}

// ✅ Default constructor (можеш и да го дефинираш како празен ако не го користиш)
Log::Log() : logFile("default.log") {
    Initialize();
}

// ✅ Constructor со filename
Log::Log(const std::string& filename) : logFile(filename) {
    Initialize();
}

// ✅ Initialize
void Log::Initialize() {
    std::ofstream ofs(logFile, std::ios::app);
    if (ofs.is_open()) {
        ofs << "[Log initialized]\n";
        ofs.close();
    }
}

// ✅ Logging method
void Log::Logging(const std::string& message) {
    std::ofstream ofs(logFile, std::ios::app);
    if (ofs.is_open()) {
        ofs << message << std::endl;
        ofs.close();
    }
}

// ✅ Destructor
Log::~Log() {
    std::ofstream ofs(logFile, std::ios::app);
    if (ofs.is_open()) {
        ofs << "[Log destroyed]\n";
        ofs.close();
    }
}
