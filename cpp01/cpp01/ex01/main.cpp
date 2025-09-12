#include "Zombie.hpp"

int main()
{
    Zombie *t;
    int N = 50;
    t = zombieHorde(N, "Hamza");
    for(int i =0; i < N; i++)
    {
        t[i].announce();
    }
    delete[] t;
    return(1);
}