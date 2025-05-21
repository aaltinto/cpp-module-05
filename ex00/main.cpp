#include "includes/Bureaucrat.hpp"

int main()
{  
    try
    {
        Bureaucrat const *b1 = new Bureaucrat("Osman", 2);
        std::cout << *b1 << std::endl;
        delete b1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat const *b1 = new Bureaucrat("huseyin", 162);
        std::cout << *b1 << std::endl;
        delete b1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat const *b1 = new Bureaucrat("pembe", 0);
        std::cout << *b1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
      
    try
    {
        Bureaucrat const *b1 = new Bureaucrat("Fatma", 149);
        std::cout << *b1 << std::endl;
        delete b1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
      

}