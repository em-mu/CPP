/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:14:38 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 13:29:35 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap " << get_name() << " created." << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << get_name() << " destroyed." << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (get_hit_points() <= 0)
    {
        std::cout << "ScavTrap " << get_name() << " is dead, he cannot attack anyone. " << std::endl;
        return ;
    }
    if (get_energy_points() <= 0)
    {
        std::cout << "ScavTrap " << get_name() << " does not have enough energy to repare himself." << std::endl;
        return ;
    }
    set_energy_points(get_energy_points() - 1);
    std::cout << "ScavTrap " << get_name() << " attacks " << target << ", " ;
    std::cout << "causing " << get_attack_damage() << " points of damage!" << std::endl;
}


void    ScavTrap::guardGate()
{
    set_energy_points(get_energy_points() - 1);
    std::cout << "ScavTrap " << get_name() << " is now in Gate keeper mode. " << std::endl;
    return; 
}