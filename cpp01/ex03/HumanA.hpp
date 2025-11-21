#ifndef HumanA_hpp
#define HumanA_hpp

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& t;
    public:
        HumanA(std::string nm,Weapon& t);
        void attack();
        void HumsetName(std::string nm);
};  

#endif