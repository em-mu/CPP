/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:25:35 by emuller           #+#    #+#             */
/*   Updated: 2023/10/31 12:15:00 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    _type = "ice";
}

Ice::~Ice(){}

Ice::Ice( Ice const & copy )
{
    *this = copy;
}

Ice& Ice::operator=(Ice const & rhs)
{
    _type = rhs._type;
    return *this;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}