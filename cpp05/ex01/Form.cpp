#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default") , sign(false) , grade_exec(1), grade_sign(20){
    std::cout << "Default constructor called" << std::endl;
}

Form::~Form(){
    std::cout << "Destructor called" << std::endl;
}

Form::Form(const Form& other) : name(other.name), sign(other.sign), grade_exec(other.grade_exec), grade_sign(other.grade_sign){
    std::cout << "Copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& other) {
    if (this != &other)
        sign = other.sign;
    return *this;
}

const std::string& Form::getName() const{
    return name;
}

bool Form::isSigned() const{
    return sign;
}

int Form::getGradeSign() const{
    return grade_sign;
}

int Form::getGradeExec() const{
    return grade_exec;
}

void Form::beSigned(const Bureaucrat& bureaucrat){
    if (bureaucrat.getGrade() > grade_sign)
        throw GradeTooLowException();
    sign = true;
}

Form::Form(std::string n, int g_sign, int g_exec) : name(n), sign(false), grade_sign(g_sign), grade_exec(g_exec){
    if (g_sign < 1 || g_exec < 1)
        throw GradeTooHighException();
    else if (g_sign > 150 || g_exec > 150)
        throw GradeTooLowException();
    std::cout << "Parameterized constructor called" << std::endl;
}

