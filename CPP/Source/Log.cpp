#include "../Header/Log.h"

Log::Log(){};

Log *Log::m_Instance = nullptr;

Log *Log::getLog()
{
    if (m_Instance == NULL)
    {
        m_Instance = new Log();
    }
    return m_Instance;
}

void Log::Info(const string &msg)
{
    cout << "---Log: " << msg << endl;
}