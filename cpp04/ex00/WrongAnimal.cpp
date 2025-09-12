#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Defautl")
{
    std::cout << "Default [WrongAnimal] is constructed\n";
}

WrongAnimal::WrongAnimal(std::string type) : type(type) {
    std::cout << type << " [WrongAnimal] is constructed\n";
}

WrongAnimal::~WrongAnimal() {
    std::cout << type << " [WrongAnimal] is destructed\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
    std::cout << "copy WrongAnimal opertaor is called\n";
        this->type = obj.type;
    return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) {
    std::cout << "copy WrongAnimal operator is called\n";
    *this = cpy;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal is making a sound\n";
}


std::string WrongAnimal::getType() const
{
    return(this->type);
}