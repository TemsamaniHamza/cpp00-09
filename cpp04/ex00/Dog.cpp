#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "[Dog] default constructer called\n";
}

Dog::Dog(std::string type) : Animal(type) {
    std::cout << type << " [Dog] is constructed\n";
}

Dog::~Dog() {
    std::cout << type << " [Dog] is destructed\n";
}

Dog &Dog::operator=(const Dog &obj) {
    std::cout << "copy Dog opertaor is called\n";
        this->type = obj.type;
    return *this;
}

Dog::Dog(const Dog &cpy) {
    std::cout << "copy Dog operator is called\n";
    *this = cpy;
}

void Dog::makeSound() const
{
    std::cout << "BARK BARK BARK BARK BAAAAARK\n";
}