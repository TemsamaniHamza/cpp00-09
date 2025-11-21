#include "Harl.hpp"

void Harl::complain(std::string level){
    const char* menu[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])();
    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;
    for(int i=0; i < 4;i++)
    {
        if (std::cin.eof()) {
            std::cout << "\nCtrl+D detected, Good Bye :)\n";
            exit(0); 
        }
        if(menu[i] == level)
        {
            (this->*ptr[i])();
            return;
        }
    }
    std::cout << "Invalid input" << std::endl;
    return ;
};


int main()
{
    Harl menu;
    std::string input;
    int cmd;
    while(1)
    {
        if (std::cin.eof()) {
            std::cout << "\nCtrl+D detected, Good Bye :)\n";
            exit(0); 
        }

        std::cout << "Enter An input here : ";
        std::cin >> input;
        menu.complain(input);
    }
}
