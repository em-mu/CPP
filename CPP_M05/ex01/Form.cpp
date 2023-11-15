/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:40 by emuller           #+#    #+#             */
/*   Updated: 2023/11/15 16:27:40 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default name") , _is_signed(0) , _grade_to_sign(150), _grade_to_execute(150){}

Form::Form(std::string name, int grade_to_sign, int grade_to_execute) : _name(name) , _is_signed(0) , _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
    if(_grade_to_sign < 1 || grade_to_execute < 1)
    {
        throw GradeTooHighException();
    }
    if(grade_to_sign > 150 || grade_to_execute > 150)
    {
        throw GradeTooLowException();
    }
}

Form::~Form()
{
    std::cout << "Form destroyed." << std::endl;
}

Form::Form( Form const & copy ) : _name(copy._name), _is_signed(copy._is_signed), _grade_to_sign(copy._grade_to_sign), _grade_to_execute(copy._grade_to_execute) {}

Form& Form::operator=(Form const & rhs)
{
    (void)rhs;
    return *this;
}

std::string Form::getName() const
{
    return (_name);
}

bool        Form::getStatus() const
{
    return (_is_signed);
}

int         Form::getGradeToSign() const
{
    return (_grade_to_sign);
}

int         Form::getGradeToExecute() const
{
    return (_grade_to_execute);
}

void        Form::beSigned(Bureaucrat bubu)
{
    if(bubu.getGrade() >= _grade_to_sign)
        throw (std::logic_error( bubu.getName() + " couldn't sign " + _name + ": because his grade is too low."));
    else if (_is_signed == 1)
        throw (std::logic_error("Error : Form already signed"));
    else
        _is_signed = 1;
}

std::ostream& operator<<(std::ostream &str, Form & ref)
{
    str << "The form " << ref.getName() << ":\n";
    if (ref.getStatus() == 1)
        str << "- is signed\n";
    else
        str << "- the form is not signed\n";
    str << "- can be signed by a Bureaucrate grade " << ref.getGradeToSign() << "or more.\n";
    str << "- can be executed by a Bureaucrate grade " << ref.getGradeToExecute() << "or more." << std::endl;;
    return(str);
}

const char* Form::GradeTooHighException::what() const throw()
{
    return("Error : Form : Grade too high");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return("Error : Form : Grade too low");
}