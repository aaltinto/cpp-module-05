#include "includes/Bureaucrat.hpp"

int main()
{
    std::cout << "\n\n----------------------------\n\n";
    try
    {
        Form f1("Top Secret", 320, 1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
      
    try
    {
        Form f2("Top Secret", 3, 1);
        std::cout << f2 << std::endl;
        Bureaucrat b1("Osman", 2);
        std::cout << b1 << std::endl;
        Bureaucrat b4("Fatma", 149);
        std::cout << b4 << std::endl;
        b4.signForm(f2);
        std::cout << f2 << std::endl;
        b1.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}