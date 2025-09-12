#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
}


const std::string& Weapon::getType()  {return type;}
