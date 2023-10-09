/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:38:15 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 19:26:09 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon &w ):_weapon(w)
{
    this->_name = name;
    return;
}

HumanA::~HumanA()
{
    return;
}
void  HumanA::attack( void ) const
{
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << "." << std::endl;
    return ;
}