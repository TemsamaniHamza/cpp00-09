#ifndef Dog_hpp
#define Dog_hpp

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog& operator=(const Dog& obj);
        Dog(const Dog&cpy);    
        void makeSound() const;
};


#endif