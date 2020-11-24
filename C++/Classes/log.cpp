#include <iostream>

class Log {

public:

    // const int LogLevelError = 0;
    // const int LogLevelWarning = 1;
    // const int LogLevelInfo = 2;

    enum Level { LogLevelError = 0, LogLevelWarning, LogLevelInfo };

private:

    Level m_LogLevel = LogLevelInfo; // m_ é uma convenção que diz que isso é uma variavel membro de uma classe que é Private. 

public:

    void SetLevel(Level level) {

        m_LogLevel = level;
    }

    void Error(const char *message) {

        if(m_LogLevel >= LogLevelError) {

            std::cout << "[ERROR]:" << message << std::endl;

        }

    }

    void Warn(const char *message) {

        if(m_LogLevel >= LogLevelWarning) {

            std::cout << "[WARNING]:" << message << std::endl;

        }

    }

    void Info(const char *message) {

        if(m_LogLevel >= LogLevelInfo) {

            std::cout << "[INFO]:" << message << std::endl;
    
        }

    }

};

int main(void) {
    
    Log log;

    // log.SetLevel(log.LogLevelWarning);

    log.SetLevel(Log::LogLevelWarning);

    log.Warn("Hello!");

    log.Error("Hey!");

    // // log.SetLevel(log.LogLevelInfo);

    log.Info("Hi!");

    return 0;
}