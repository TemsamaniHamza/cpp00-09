#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "Default [WrongCat] is constructed\n";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type) {
    std::cout << type << " [WrongCat] is constructed\n";
}

WrongCat::~WrongCat() {
    std::cout << type << " [WrongCat] is destructed\n";
}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
    std::cout << "copy WrongCat opertaor is called\n";
    this->type = obj.type;
    return *this;
}

WrongCat::WrongCat(const WrongCat &cpy) {
    std::cout << "copy WrongCat operator is called\n";
    *this = cpy;
}

void WrongCat::makeSound() const
{
    std::cout << "meow meow MEOOOOOW\n";
}