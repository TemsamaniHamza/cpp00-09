#ifndef Beureaucrat_hpp
#define Beureaucrat_hpp

#include <iostream>
#include <string>

class Bureaucrat {
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat& operator=(const Bureaucrat& other);
        Bureaucrat(const std::string& n, int grade);
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat& other);
        const std::string& getName() const;
        int getGrade() const;
        void setGrade(int g);
        int incrementGrade();
        int decrementGrade();

};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif