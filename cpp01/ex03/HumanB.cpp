#include "HumanB.hpp"
#include <string>
#include <iostream>

HumanB::HumanB(std::string nm) : name(nm), wepn(nullptr)
{

}

void HumanB::setWeapon(Weapon& weapon)
{    
    wepn = &weapon;
};

void HumanB::attack() {
    if (wepn)
        std::cout << name << " attacks with their " << wepn->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack with!" << std::endl;
}
