/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:16:11 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 17:24:06 by emuller          ###   ########.fr       */
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
    return (*this);
}

AForm*   Intern::makeForm(std::string form_name, std::string target)
{
    
}