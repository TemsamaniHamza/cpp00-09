#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default [Brain] is constructed\n";
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "Default ideas";
    }
}

Brain::Brain(std::string type){
    std::cout << type << " [Brain] is constructed\n";
}

Brain::~Brain() {
    std::cout << " [Brain] is destructed\n";
}

const std::string Brain::getBrain(int i) const
{
    if (i<100)
        return (this->ideas[i]);
    return ("indes is invalid");
}


void Brain::setBrain(int i, const std::string& idea) {
    if (i >= 0 && i < 100) {
        this->ideas[i] = idea;
    }
}

Brain::Brain(const Brain& other) {
    std::cout << "copy Brain constructor is called\n";
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "copy Brain operator is called\n";
    if (this != &other) {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}


// void Brain::makeSound() const
// {
//     std::cout << "meow meow MEOOOOOW\n";
// }