/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:14:38 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 13:57:33 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap " << this->_name << " created." << std::endl;
    return;
}

ScavTrap::ScavTrap( void ): ClapTrap("Default name")
{
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_attack_damage = 20;
    std::cout << "ScavTrap " << this->_name << " created." << std::endl;
    return;
}

ScavTrap::ScavTrap( ScavTrap const & copy ) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const & rhs)
{
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    std::cout << "ScavTrap copy assignement operator called." << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->_name << " destroyed." << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (get_hit_points() <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " is dead, he cannot attack anyone. " << std::endl;
        return ;
    }
    if (get_energy_points() <= 0)
    {
        std::cout << "ScavTrap " << this->_name << " does not have enough energy to repare himself." << std::endl;
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ScavTrap " << this->_name << " attacks " << target << ", " ;
    std::cout << "causing " << this->_attack_damage << " points of damage!" << std::endl;
}


void    ScavTrap::guardGate()
{
    this->_energy_points -= 1;
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode. " << std::endl;
    return; 
}