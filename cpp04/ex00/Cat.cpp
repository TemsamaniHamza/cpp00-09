#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "[Cat] default constructer called\n";
}

Cat::Cat(std::string type) : Animal(type) {
    std::cout << type << " [Cat] is constructed\n";
}

Cat::~Cat() {
    std::cout << type << " [Cat] is destructed\n";
}

Cat &Cat::operator=(const Cat &obj) {
    std::cout << "copy Cat opertaor is called\n";
    this->type = obj.type;
    return *this;
}

Cat::Cat(const Cat &cpy) {
    std::cout << "copy Cat operator is called\n";
    *this = cpy;
}

void Cat::makeSound() const
{
    std::cout << "meow meow MEOOOOOW\n";
}