/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:03:47 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 13:30:06 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentalPardonForm", 25, 5) , _target("default_target"){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentalPardonForm", 25, 5) , _target(target){}

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
    (void)executor;
}