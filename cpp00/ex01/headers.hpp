#ifndef HEADERS_HPP
#define HEADERS_HPP

#include <iostream>
#include <string>


class Contact {
    private :
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string darkest_secret;
        std::string phone_number;       
    public :
        void setFirstName(std::string fn);
        void setLastName(std::string ln);
        void setNickName(std::string nn);
        void setDarkesSecret(std::string ds);
        void setPhoneNumber(std::string pn);
        std::string getFirstName() const;
        std::string getLastName() const;
        std::string getNickName() const;
        std::string getDarkesSecret() const;
        std::string getPhoneNumber() const;

};


class PhoneBook {
    private :
        Contact Contacts[8];
        int max = 0;
    public :
        void ADD();
        void SEARCH() const;
        void EXIT() const;
        PhoneBook();   
};

std::string Empty(std::string msg, std::string temp);
std::string check_digits(std::string temp);
char check_digits_pure(std::string i);

#endif