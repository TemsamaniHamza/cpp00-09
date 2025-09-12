#include "Animal.hpp"

Animal::Animal() : type("Defautl")
{
    std::cout << "[Animal] default constructer called\n";
}

Animal::Animal(std::string type) : type(type) {
    std::cout <<"[Animal] is constructed with type= " << type << std::endl;
}

Animal::~Animal() {
    std::cout << type << " [Animal] is destructed\n";
}

Animal &Animal::operator=(const Animal &obj) {
    std::cout << "copy Animal opertaor is called\n";
        this->type = obj.type;
    return *this;
}

Animal::Animal(const Animal &cpy) {
    std::cout << "copy Animal operator is called\n";
    *this = cpy;
}

void Animal::makeSound() const
{
    std::cout << "Animal is making a sound\n";
}


std::string Animal::getType() const
{
    return(this->type);
}