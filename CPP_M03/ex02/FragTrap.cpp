/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:05:11 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 13:32:06 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap " << get_name() << " created." << std::endl;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << get_name() << " destroyed." << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    if (get_hit_points() <= 0)
    {
        std::cout << "FragTrap " << get_name() << " cannot request high fives because he is dead." << std::endl;
        return;
    }
    if (get_energy_points() <= 0)
    {
        std::cout << "FragTrap " << get_name() << " does not have enough energy to request high fives." << std::endl;
        return;
    }
    set_energy_points(get_energy_points() - 1);
    std::cout << "FragTrap Give me a high five! 🖐️" << std::endl;
}
