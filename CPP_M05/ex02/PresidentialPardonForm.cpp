/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:03:47 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 16:00:56 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) , _target("default_target"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) , _target(target){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & copy ) : AForm(copy)
{
    this->_target = copy._target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    this->_target = rhs._target;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const 
{
    if (getStatus() == 0)
        throw (std::logic_error( getName() + " is not signed."));
    if (executor.getGrade() >= getGradeToExecute())
        throw (std::logic_error( executor.getName() + " cannot execute " + getName() + ": because his grade is too low."));
    std::cout << "Informs that " << getName() <<  " has been pardoned by Zaphod Beeblebrox" << std::endl;
}