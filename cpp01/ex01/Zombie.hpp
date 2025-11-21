#ifndef Zombie_hpp
#define Zombie_hpp

#include <string>
#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        void announce( void );
        void setNameZombie(std::string x);
};

Zombie* zombieHorde( int N, std::string name );

#endif 