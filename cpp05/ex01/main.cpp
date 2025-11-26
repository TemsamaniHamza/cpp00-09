#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b1;
    Bureaucrat b2;

    try
    {
        Bureaucrat b1("Alice", 1);
        b1.decrementGrade();
        std::cout << b1 << std::endl;
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}



