#include "Log.h"
#include <iostream>

Log* Log::pInstance = NULL;

// ✅ Fix: Use const std::string& instead of char*
Log* Log::Inst(const std::string& filename) {
    if (pInstance == NULL) {
        pInstance = new Log(filename);  // Call the correct constructor
    }
    return pInstance;
}

// ✅ New constructor to handle filename
Log::Log(const std::string& filename) : logFile(filename) {
    Initialize();
}

// ✅ Default constructor (no filename)
Log::Log() {
    Initialize();
}

// ✅ Fix Logging function to take std::string
void Log::Logging(const std::string& message) {
    std::cout << "Logging: " << message << std::endl;
}

// ✅ Destructor
Log::~Log() {
    std::cout << "Log destroyed" << std::endl;
}
