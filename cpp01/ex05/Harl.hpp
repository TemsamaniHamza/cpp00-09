#ifndef Harl_hpp
#define Harl_hpp

#include <iostream>
#include <string>

class Harl
{
    private :
        void debug();
        void info();
        void warning();
        void error();
    public :
        void complain(std::string level);
};

#endif