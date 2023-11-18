/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:36:57 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 16:41:22 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default name") , _grade(1) {}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
    if(grade < 1)
        throw GradeTooHighException();
    if(grade > 150)
        throw GradeTooLowException();
    else
        _grade = grade;
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if (this == &rhs) {
        return *this; 
    }
    _grade = rhs.getGrade();
    return *this;
}

std::string Bureaucrat::getName() const 
{
    return (_name);    
}

int         Bureaucrat::getGrade() const
{
    return (_grade);
}

void        Bureaucrat::setGrade(int new_grade) 
{
    if (new_grade < 1)
        throw GradeTooHighException();
    else if (new_grade > 150)
        throw GradeTooLowException();
    else
        _grade = new_grade;
}

void        Bureaucrat::increaseGrade() 
{
    if (_grade - 1 < 1)
        throw GradeTooHighException();
    else
        _grade--;
}

void        Bureaucrat::decreaseGrade() 
{
    if (_grade + 1 > 150)
        throw GradeTooLowException();
    else
        _grade++;
}

void        Bureaucrat::signForm(AForm& form)
{
    try
    {
        form.beSigned(*this);
        std::cout << _name << " signed " << form.getName() << "." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void        Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
        std::cout << _name << " executed " << form.getName() << "." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    } 
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Error : Grade too high");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Error : Grade too low");
}

std::ostream& operator<<(std::ostream &str, Bureaucrat const & ref)
{
    str << ref.getName() << ", bureaucrat grade " << ref.getGrade() << "." << std::endl;
    return(str);
}