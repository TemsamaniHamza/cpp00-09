#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat() : name("Unnamed"), grade(0)
{
    std::cout << "Default Bureaucrat constructor called\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade)
{
    std::cout << "Bureaucrat copy constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string& n, int g) : name(n)
{
    if (g < 1)
        throw std::invalid_argument("Grade too high");
    else if (g > 150)
        throw std::invalid_argument("Grade too low");
    setGrade(g);
    std::cout << "Bureaucrat parameterized constructor called\n";
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called\n";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade();
    return os;
}

int Bureaucrat::incrementGrade()
{
    if (grade - 1 < 1)
        throw std::invalid_argument("Grade too high");
    grade--;
    return grade;
}

int Bureaucrat::decrementGrade()
{
    if (grade + 1 > 150)
        throw std::invalid_argument("Grade too low");
    grade++;
    return grade;
}   

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
        grade = other.grade;
    return *this;
}

const std::string& Bureaucrat::getName() const
{
    return name;
}

int Bureaucrat::getGrade() const
{
    return grade;
}

void Bureaucrat::setGrade(int g)
{
    grade = g;
}