#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie t(name);
    t.announce();
}