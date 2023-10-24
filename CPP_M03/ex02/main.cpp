/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:40 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 13:58:06 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap yoyo("yoyo");
    ScavTrap zouzou("zouzou");
    FragTrap grr("grr");
    std::cout << std::endl;
    
    for (int i = 0; i < 3; i++)
        yoyo.attack("l'asticot");
    std::cout << std::endl;

    for (int i = 0; i < 3; i++)
        zouzou.attack("bibi");
    std::cout << std::endl;

    for (int i = 0; i < 2; i++)
        grr.attack("tutu");
    std::cout << std::endl;

    zouzou.beRepaired(15);
    zouzou.takeDamage(10);
    zouzou.takeDamage(20);
    zouzou.attack("argh");
    zouzou.beRepaired(3);
    zouzou.guardGate();
    std::cout << std::endl;

    grr.highFivesGuys();
    grr.beRepaired(6);
    grr.takeDamage(50);
    grr.takeDamage(90);
    grr.highFivesGuys();
    return 0;
}
