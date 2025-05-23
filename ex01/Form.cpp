#include "includes/Form.hpp"
#include <iostream>
Form::Form(std::string name, int gradeToSign, int gradeToExecute):
    _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Form " << _name << " default constructor called" << std::endl;
    if (gradeToExecute < 1 || gradeToSign < 1)
        throw (Form::GradeTooHighException());
    if (gradeToExecute > 150 || gradeToSign > 150)
        throw (Form::GradeTooLowException());
    this->_isSigned = 0;
}

Form::Form(Form const &copy):
    _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign),
        _gradeToExecute(copy._gradeToExecute)
{
    std::cout << "Copy constructor called" << std::endl;
    if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
        throw (Form::GradeTooHighException());
    if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
        throw (Form::GradeTooLowException());
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

Form &Form::operator=(Form const &copy)
{
    this->_isSigned = copy._isSigned;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw (Form::GradeTooLowException());
    else
        this->_isSigned = 1;
}

int Form::getGradeToSign()
{
    return this->_gradeToSign;
}
int Form::getGradeToExecute()
{
    return this->_gradeToExecute;
}

bool Form::isSigned()
{
    return this->_isSigned;
}

std::string Form::getName()
{
    return this->_name;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "\e[1;31m Grade too high!\e[0m";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "\e[1;31m Grade too low!\e[0m";
}

std::ostream &operator<<(std::ostream &os, Form& print)
{
    if (print.isSigned())
        return os << "Form " << print.getName()\
            << " needs min " << print.getGradeToSign() << " grade to be signed and min "\
            << print.getGradeToExecute() << " grade to be executed. It's signed";
    else
        return os << "Form " << print.getName()\
            << " needs min " << print.getGradeToSign() << " grade to be signed and min "\
            << print.getGradeToExecute() << " grade to be executed. It's not signed";
}