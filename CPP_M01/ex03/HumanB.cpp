/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:38:19 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 19:37:30 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) :  _weapon(NULL), _name(name){}

HumanB::~HumanB(){}

void    HumanB::setWeapon( Weapon &w )
{
    this->_weapon = &w;
    return;   
}
void    HumanB::attack( void ) const
{
    if (!this->_weapon)
        std::cout << this->_name << " attacks with nothing." << std::endl;
    else
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << "." << std::endl;
    return ;
}