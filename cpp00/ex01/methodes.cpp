#include "headers.hpp"


PhoneBook::PhoneBook()
{
    max = 0;
}

void Addset_fn(Contact &c)
{
    std::string temp;
    std::cout << "First_name : ";
    std::getline(std::cin, temp);
    temp = Empty("Please enter a valid last name : ", temp);
    c.setFirstName(temp);
}

void Addset_ln(Contact &c) {
    std::string temp;
    std::cout << "Last name : ";
    std::getline(std::cin, temp);
    temp = Empty("Please enter a valid last name : ", temp);
    c.setLastName(temp);
}

void Addset_nn(Contact &c) {
    std::string temp;
    std::cout << "Nickname : ";
    std::getline(std::cin, temp);
    temp = Empty("Please enter a valid nickname : ", temp);
    c.setNickName(temp);
}

void Addset_ds(Contact &c) {
    std::string temp;
    std::cout << "Darkest_secret : ";
    std::getline(std::cin, temp);
    temp = Empty("Please enter a valid darkest_secret : ", temp);
    c.setDarkesSecret(temp);
}

void Addset_pn(Contact &c) {
    std::string temp;
    std::cout << "Phone_number : ";
    std::getline(std::cin, temp);
    if (std::cin.eof()) {
        std::cout << "\nCtrl+D detected. Exiting safely!\n";
        exit(0); 
    }
    temp = Empty("Please enter a valid phone_number: ", temp);
    temp = check_digits(temp);
    c.setPhoneNumber(temp);
}

void PhoneBook::ADD() {
    static int i = 0;

    Contact& contact = this->Contacts[i];
    Addset_fn(contact);
    Addset_ln(contact);
    Addset_nn(contact);
    Addset_ds(contact);
    Addset_pn(contact);
    i++;
    if (this->max != 8)
    this->max++;
    if (i == 8)
        i = 0;
};

std::string Check_len(std::string str)
{
    size_t len = str.length();;
    if(len > 9)
    {
        return (str.substr(0, 9) + ".");
    }
    else if(len <= 9)
    {
        while(len <= 9)
        {
            str = str.substr(0,len) + " ";
            len++;
        }
        str = str.substr(0, len) + '\0';
        return(str);
    }
    return (str);
}

void PhoneBook::SEARCH() const{
    std::string i;

    char x = '0';
    if(this->max == 0)
    {
        std::cout << "The phonebook is empty" << std::endl;
        return ;
    }
    std::cout << "index     |first_name|last_name |nickname  " << std::endl;
    for(int j = 0; j < this->max; j++)
    {
        std::cout << "         " << j <<"|" <<  Check_len(this->Contacts[j].getFirstName())
        << "|" << Check_len(this->Contacts[j].getLastName()) << "|"
        << Check_len(this->Contacts[j].getNickName()) << std::endl;
    }
    std::cout << "Please insert an index from above: ";
    std::getline(std::cin, i);
    x = check_digits_pure(i);
    if(x == 'x')
    {
        std::cout << "Error: you entered a non digit character or 9 :" << std::endl;
        return ;
    }
    if(x < '0' || x >= this->max + '0')
    {
        std::cout << "the number is out of range" << std::endl;
        return ;
    }
    std::cout << " index : " << x - '0' <<  std::endl 
    << "First_name : " << this->Contacts[x - '0'].getFirstName() <<  std::endl
    << "Last_name : " << this->Contacts[x - '0'].getLastName() <<  std::endl
    << "Nickname : " << this->Contacts[x - '0'].getNickName() << std::endl
    << "Darkest_secret : " << this->Contacts[x - '0'].getDarkesSecret() << std::endl
    << "Phone_number : " << this->Contacts[x - '0'].getPhoneNumber()<< std::endl;
};

void PhoneBook::EXIT() const {
    exit(1);
};