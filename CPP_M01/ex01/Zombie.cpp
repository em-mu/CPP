/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:15:31 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 17:15:32 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie( void )
{
	std::cout << "Zombie created" << std::endl;
    return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed" << std::endl;
    return;
}

void    Zombie::announce( void ) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::set_name( std::string name )
{
	this->_name = name;
}