/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:25:23 by emuller           #+#    #+#             */
/*   Updated: 2023/10/30 16:56:12 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type): _type(type){}

AMateria::~AMateria(){}

AMateria::AMateria( AMateria const & copy )
{
    *this = copy;
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    return;
}

// AMateria& operator=(AMateria const & rhs);