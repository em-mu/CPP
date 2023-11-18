/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:04:22 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 16:20:19 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) , _target("default_target"){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) , _target(target){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & copy ) : AForm(copy)
{
    this->_target = copy._target;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    this->_target = rhs._target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const 
{
    if (getStatus() == 0)
        throw (std::logic_error( getName() + " is not signed."));
    if (executor.getGrade() >= getGradeToExecute())
        throw (std::logic_error( executor.getName() + " cannot execute " + getName() + ": because his grade is too low."));
    std::cout << "~~BRRRR~~RATATATATA~~BZZZZ~~" << std::endl;
    srand (time(NULL));
	if (!(rand() % 2))
		std::cout << _target << " has been robotomized." << std::endl;
    else
        std::cout << _target << " robotomy failed." << std::endl;
}