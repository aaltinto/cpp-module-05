#include "includes/Bureaucrat.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"

int main()
{  

    try
    {
        Bureaucrat b2("Huseyin", 162);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat b3("Pembe", 0);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

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
        ShrubberyCreationForm a("home");
        RobotomyRequestForm f("Robert");
        Bureaucrat b1("Ons", 2);
        std::cout << b1 << std::endl;
        Bureaucrat b4("Korn", 149);
        std::cout << b4 << std::endl;
        b4.signForm(a);
        std::cout << a << std::endl;
        b1.signForm(a);
        std::cout << a << std::endl;
        b1.executeForm(a);
        b1.signForm(f);
        b1.executeForm(f);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}