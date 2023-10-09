/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:38:31 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 19:34:15 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &w )
{
    this->setType(w);
    return;
}

Weapon::~Weapon( void )
{
    return;
}
const std::string&  Weapon::getType( void ) const
{
    return (this->_type);
}

void    Weapon::setType( std::string new_type )
{
    this->_type = new_type;
    return;
}