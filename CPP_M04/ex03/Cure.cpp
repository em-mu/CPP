/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:25:29 by emuller           #+#    #+#             */
/*   Updated: 2023/10/30 17:00:03 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>

Cure::Cure(){}

Cure::~Cure(){}

Cure::Cure( Cure const & copy )
{
    *this = copy;
}

Cure& Cure::operator=(Cure const & rhs)
{
    _type = rhs._type;
    return *this;
}

AMateria* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}