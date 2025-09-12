#include "Zombie.hpp"

Zombie::~Zombie(void) {
    std::cout << "The name of the zombie is " << name << std::endl;
    };

Zombie::Zombie():name("Default"){};

Zombie::Zombie(std::string name) : name(name) {};

void Zombie::announce( void ) {std::cout<< name << ": BraiiiiiiinnnzzzZ.." << std::endl;};
