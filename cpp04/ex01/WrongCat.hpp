#ifndef WrongCat_hpp
#define WrongCat_hpp

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    protected :
        std::string type;
    public :
        WrongCat();
        WrongCat(std::string type);
        ~WrongCat();
        WrongCat& operator=(const WrongCat& obj);
        WrongCat(const WrongCat&cpy);
        void makeSound() const;
};


#endif