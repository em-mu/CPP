/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:14:42 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 15:26:17 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();

        void    attack(const std::string& target);
        void    guardGate();
};

#endif