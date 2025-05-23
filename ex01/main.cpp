#include "includes/Bureaucrat.hpp"

int main()
{
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

        std::cout << "\n----------------------------\n\n";

        Bureaucrat b1("Osman", 2);
        std::cout << b1 << std::endl;

        std::cout << "\n----------------------------\n\n";

        Bureaucrat b4("Fatma", 149);
        std::cout << b4 << std::endl;

        std::cout << "\n----------------------------\n\n";

        b4.signForm(f2);
        std::cout << f2 << std::endl;
        std::cout << "\n----------------------------\n\n";
        b1.signForm(f2);
        std::cout << f2 << std::endl;
        std::cout << "\n----------------------------\n\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}