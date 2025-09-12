#include "headers.hpp"


        void Contact::setFirstName(std::string fn) {first_name = fn;};
        void Contact::setLastName(std::string ln) { last_name = ln;};
        void Contact::setNickName(std::string nn) { nickname = nn;};
        void Contact::setDarkesSecret(std::string ds) { darkest_secret = ds;};
        void Contact::setPhoneNumber(std::string pn) {phone_number = pn;};

        std::string Contact::getFirstName() const { return first_name;};
        std::string Contact::getLastName() const { return last_name;};
        std::string Contact::getNickName() const { return nickname;};
        std::string Contact::getDarkesSecret() const { return darkest_secret;};
        std::string Contact::getPhoneNumber() const { return phone_number;};