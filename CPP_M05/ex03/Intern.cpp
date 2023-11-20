/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:16:11 by emuller           #+#    #+#             */
/*   Updated: 2023/11/20 17:18:23 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::~Intern(){}

Intern::Intern( Intern const & copy )
{
    *this = copy;
}

Intern& Intern::operator=(Intern const & rhs)
{
    (void)rhs;
    return (*this);
}

AForm*   Intern::makeForm(std::string form_name, std::string target)
{
    AForm*      form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
    AForm*      tmp = 0;
    std::string form_type[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

    for (int i = 0; i < 3; i++)
    {
        if (form_name == form_type[i])
        {
            tmp = form[i];
            std::cout << "Intern creates " << form_name << "." << std::endl;
        }
        else
            delete form[i];
    }
    if (!tmp)
        throw (std::logic_error("Error : the form " + form_name + " does not exist."));
    return tmp;
}