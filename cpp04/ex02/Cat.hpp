#ifndef Cat_hpp
#define Cat_hpp

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private :
        Brain* brain;
    public :
        Cat();
        Cat(std::string type);
        ~Cat();
        Cat& operator=(const Cat& obj);
        Cat(const Cat&cpy);
        void makeSound() const;
};


#endif