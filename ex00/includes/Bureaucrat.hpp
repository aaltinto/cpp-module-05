#pragma once

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat(std::string const name = "Default", int grade = 150);
        Bureaucrat(int grade);
        Bureaucrat(Bureaucrat const &copy);
        ~Bureaucrat();
        Bureaucrat const &operator=(Bureaucrat const &copy);

        std::string const getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();

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

std::ostream &operator<<(std::ostream &os, const Bureaucrat &print);