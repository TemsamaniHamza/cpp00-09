#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

// int main()
// {
//     const Animal *meta = new Animal();
//     const Animal *j = new Dog();
//     const Animal *i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); // will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     delete meta;
//     delete i;
//     delete j;
//     // -----------------------------------

//     // const WrongAnimal *k = new WrongAnimal();
//     // const WrongAnimal *w = new WrongCat();

//     // k->makeSound();
//     // w->makeSound();

    
//     return 0;
// }


int main()
{
    Animal a;
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    j->makeSound(); // attack lih atack lih hh
    i->makeSound(); // tsab hh
    delete j;
    delete i;
    return 0;
}