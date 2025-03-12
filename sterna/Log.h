#pragma once

#include <string>

class Log {
public:
    static Log* Inst(const std::string& filename); // Fix parameter type
    void Logging(const std::string& message);
    void Initialize();
    ~Log();

protected:
    Log(); // Default constructor
    Log(const std::string& filename); // ✅ Add constructor with filename

private:
    static Log* pInstance;
    std::string logFile;
};
