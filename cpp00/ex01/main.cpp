#include "headers.hpp"

int main()
{
    std::string userinput;
    PhoneBook handler;
    
    while(1)
    {
        std::cout << "Please enter a valid command : ";
        std::getline(std::cin, userinput);
        if (std::cin.eof()) {
            std::cout << "\nCtrl+D detected. Exiting safely!\n";
            exit(0); 
        }
        if(userinput.compare("ADD") == 0)
        {
            handler.ADD();
        }
        else if(userinput.compare("SEARCH") == 0)
        {
            handler.SEARCH();
        }
        else if(userinput.compare("EXIT") == 0)
        {
            handler.EXIT();
        }
        else
            std::cout << "the command was invalid" << std::endl;
    }
    return (0);
}
