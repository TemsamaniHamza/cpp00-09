#ifndef WrongAnimal_hpp
#define WrongAnimal_hpp

#include <iostream>
#include <string>


class WrongAnimal {
    protected : 
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(std::string type);
        ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& obj);
        WrongAnimal(const WrongAnimal&cpy);
        void makeSound() const;
        std::string getType() const;
};


#endif