#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

class Form {
    private:
        const std::string name;
        bool sign;
        const int grade_sign;
        const int grade_exec;
    public:
        Form();
        ~Form();
        Form(std::string n, int g_sign, int g_exec);
        Form(const Form& other);
        Form& operator=(const Form& other);
        const std::string& getName() const;
        bool isSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;
        void beSigned(const Bureaucrat& bureaucrat);
};

class GradeTooHighException : public std::exception {
    public:
        const char* what() const throw() {
            return "Grade too high";
        }
};

class GradeTooLowException : public std::exception {
    public:
        const char* what() const throw() {
            return "Grade too low";
        }
};
    
#endif