#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    this->brain = new Brain();
    std::cout << "[Dog] default constructer called\n";
}

Dog::Dog(std::string type) : Animal(type) 
{
    this->brain = new Brain();
    std::cout << type << " [Dog] is constructed\n";
}

Dog::~Dog() {
    delete this->brain;
    std::cout << type << " [Dog] is destructed\n";
}

Dog &Dog::operator=(const Dog &obj) {
    std::cout << "copy Dog operator is called\n";
    if (this != &obj) {
        this->type = obj.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain(*obj.brain);
    }
    return *this;
}


Dog::Dog(const Dog &cpy) : Animal(cpy) {
    std::cout << "copy constructor Dog is called\n";
    this->brain = new Brain(*cpy.brain);
}


void Dog::makeSound() const
{
    std::cout << "BARK BARK BARK BARK BAAAAARK\n";
}
