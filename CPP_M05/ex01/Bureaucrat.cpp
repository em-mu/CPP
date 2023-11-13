/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:36:57 by emuller           #+#    #+#             */
/*   Updated: 2023/11/13 20:15:24 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default name") , _grade(1) {}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
    try
    {
        if(grade < 1)
        {
            _grade = 1;
            throw GradeTooHighException();
        }
        if(grade > 150)
        {
            _grade = 150;
            throw GradeTooLowException();
        }
        else
            _grade = grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << ": bureaucrate created with grade " << _grade << std::endl;
    }
}

Bureaucrat::~Bureaucrat()
{
    std::cout << _name << "died." << std::endl;
}

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
    try
    {
        if (new_grade < 1)
            throw GradeTooHighException();
        else if (new_grade > 150)
            throw GradeTooLowException();
        else
            _grade = new_grade;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void        Bureaucrat::increaseGrade() 
{
    try
    {
        if (_grade - 1 < 1)
            throw GradeTooHighException();
        else
            _grade--;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void        Bureaucrat::decreaseGrade() 
{
    try
    {
        if (_grade + 1 > 150)
            throw GradeTooLowException();
        else
            _grade++;
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