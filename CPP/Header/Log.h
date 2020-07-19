#pragma once

#include "Base.h"

class Log
{
public:
    static Log *getLog();
    void Info(const string &mesg);
    // Empty Constr
    Log();
    // Copy Constr
    Log(const Log &){};

private:
    // Vars    
    static const string m_FileName;
    static Log *m_Instance;
    // Assignment Operator
    Log &operator=(const Log &) { return *this; }
};

// https://cppcodetips.wordpress.com/2014/01/02/a-simple-logger-class-in-c/