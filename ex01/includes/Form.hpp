#pragma once

#include <ostream>
#include "Bureaucrat.hpp"

#define RED "\e[1;31m"
#define reset "\e[0m"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool        _isSigned;
        int const   _gradeToSign;
        int const   _gradeToExecute;
    public:
        Form(std::string name = "Default", int gradeToSign = 150, int gradeToExecute = 150);
        Form(Form const &copy);
        ~Form();
        Form &operator=(Form const &copy);
        void beSigned(Bureaucrat& bureaucrat);
        int getGradeToSign();
        int getGradeToExecute();
        std::string getName();
        bool isSigned();

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &os, Form &print);