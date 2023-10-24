/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:05:11 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 13:59:05 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap " << this->_name << " created." << std::endl;
    return;
}

FragTrap::FragTrap() : ClapTrap("Default name")
{
    this->_hit_points = 100;
    this->_energy_points = 100;
    this->_attack_damage = 30;
    std::cout << "FragTrap " << this->_name << " created." << std::endl;
    return;
}

FragTrap::FragTrap( FragTrap const & copy ) : ClapTrap(copy)
{
    *this = copy;
    std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const & rhs)
{
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    std::cout << "FragTrap copy assignement operator called." << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_name << " destroyed." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (get_hit_points() <= 0)
    {
        std::cout << "FragTrap " << this->_name << " cannot request high fives because he is dead." << std::endl;
        return;
    }
    if (get_energy_points() <= 0)
    {
        std::cout << "FragTrap " << this->_name << " does not have enough energy to request high fives." << std::endl;
        return;
    }
    this->_energy_points -= 1;
    std::cout << "FragTrap Give me a high five! 🖐️" << std::endl;
}
