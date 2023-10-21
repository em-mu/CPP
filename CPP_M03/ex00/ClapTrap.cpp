/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:47 by emuller           #+#    #+#             */
/*   Updated: 2023/10/21 14:28:58 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _energy_points(10) , _attack_damage(0), _hit_points(10)
{
    this->_name = "default name";
    std::cout << this->_name << "created." << std::endl;
    return; 
}

ClapTrap::ClapTrap(std::string name) : _energy_points(10) , _attack_damage(0), _hit_points(10)
{
    this->_name = name;
    std::cout << this->_name << "created." << std::endl;
    return; 
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << "destroyed." << std::endl;
}

std::string ClapTrap::get_name( void ) const 
{
    return (this->_name);
}

int ClapTrap::get_hit_points( void ) const
{
    return (this->_hit_points);
}

int ClapTrap::get_energy_points( void ) const
{
    return (this->_energy_points);
}

int ClapTrap::get_attack_damage( void ) const
{
    return (this->_attack_damage);
}

void    ClapTrap::attack(const std::string& target)
{}

void    ClapTrap::takeDamage(unsigned int amount)
{}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->_hit_points += amount;
    this->_energy_points -= 1;
    std::cout << "ClapTrap " << this->_name << "repaired itself, " << this->_name << " now has " << this->_hit_points << "." << std::endl;
