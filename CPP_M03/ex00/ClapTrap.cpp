/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:47 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 15:22:57 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hit_points(10) , _energy_points(10), _attack_damage(0)
{
    this->_name = name;
    std::cout << this->_name << " created." << std::endl;
    return; 
}

ClapTrap::ClapTrap( void ) : _hit_points(10) , _energy_points(10), _attack_damage(0)
{
    this->_name = "Default name";
    std::cout << this->_name << " created." << std::endl;
    return; 
}

ClapTrap::ClapTrap( ClapTrap const & copy )
{
    *this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap const & rhs)
{
    this->_name = rhs.get_name();
    this->_hit_points = rhs.get_hit_points();
    this->_energy_points = rhs.get_energy_points();
    this->_attack_damage = rhs.get_attack_damage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << this->_name << " destroyed." << std::endl;
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
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " is dead, he cannot attack anyone. " << std::endl;
        return ;
    }
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " does not have enough energy to repare himself." << std::endl;
        return ;
    }
    this->_energy_points -= 1;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", " ;
    std::cout << "causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->_hit_points -= amount;
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " died." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " loses " << amount << " hit points, ";
    std::cout << this->_name << " now has " << this->_hit_points << " hit points." << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_hit_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " cannot heal himself because he's already dead." << std::endl;
        return ;
    }
    if (this->_energy_points <= 0)
    {
        std::cout << "ClapTrap " << this->_name << " does not have enough energy to repare himself." << std::endl;
        return ;
    }
    this->_hit_points += amount;
    this->_energy_points -= 1;
    std::cout << "ClapTrap " << this->_name << " repaired himself, ";
    std::cout << this->_name << " now has " << this->_hit_points << " hit points." << std::endl;
}
