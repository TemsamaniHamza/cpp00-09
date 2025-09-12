#include "headers.hpp"

std::string Empty(std::string msg, std::string temp)
{
    if(temp.empty() == 1)
    {
        while(temp.empty() == 1)
        {
        if (std::cin.eof()) {
            std::cout << "\nCtrl+D detected. Exiting safely!\n";
            std::cin.ignore(100000, '\n');
            exit(0); 
            }
            std::cout << msg;
            std::getline(std::cin, temp);
        }
    }
    return (temp);
}

std::string check_digits(std::string temp)
{
    for(int i = 0;temp[i] != '\0'; i++)
    {
        if(isdigit(temp[i]) == 0)
        {
            std::cout << "Please enter only digits :";
            std::getline(std::cin, temp);
            temp = check_digits(temp);
            if (std::cin.eof()) {
                std::cout << "\nCtrl+D detected. Exiting safely!\n";
                break; 
            }
        }
    }
    return (temp);
}

bool checkkk(std::string str)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isdigit(str[i]) == 0)
            return(false);
    }
    return (true);
}

char check_digits_pure(std::string str)
{
    int i = 0;
    size_t len = str.length();;
    if(checkkk(str) == false)
        return ('x');
    if(len == 1)
    {
        return (str[0]);
    }
    else if(len > 1)
    {
        return ('9');
    }
    return('0');
}
