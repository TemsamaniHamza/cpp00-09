#ifndef Zombie_hpp
#define Zombie_hpp

#include <string>
#include <iostream>

class Zombie{
    private:
        std::string name;
    public:
        void announce( void );
        Zombie(std::string name);
        Zombie();
        ~Zombie(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );
#endif