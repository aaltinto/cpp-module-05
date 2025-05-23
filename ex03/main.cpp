#include "includes/Bureaucrat.hpp"
#include "includes/Intern.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"
#include "includes/RobotomyRequestForm.hpp"

int main()
{  

      
    try
    {
        Bureaucrat Bruce("Bruce", 1);

        Intern intern;
        AForm *form = intern.makeForm("Presidential form", "papa");
        AForm *form2 = intern.makeForm("Shrubbery form", "home");

        Bruce.signForm(*form);
        Bruce.executeForm(*form);

        Bruce.executeForm(*form2);
        Bruce.signForm(*form2);
        Bruce.executeForm(*form2);
        delete form;
        delete form2;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}