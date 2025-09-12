#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {
    this->brain = new Brain();
    std::cout << "[Cat] default constructor called\n";
}


Cat::Cat(std::string type) : Animal(type) {
    this->brain = new Brain();
    std::cout << type << " [Cat] is constructed\n";
}


Cat::~Cat() {
    if (this->brain)
        delete this->brain;
    std::cout << type << " [Cat] is destructed\n";
}

Cat &Cat::operator=(const Cat &obj) {
    std::cout << "copy Cat operator is called\n";
    if (this != &obj) {
        this->type = obj.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}


Cat::Cat(const Cat &cpy) : Animal(cpy) {
    std::cout << "copy Cat constructor is called\n";
    this->brain = new Brain(*cpy.brain);
}


void Cat::makeSound() const
{
    std::cout << "meow meow MEOOOOOW\n";
}