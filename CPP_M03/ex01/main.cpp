/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:40 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 13:49:41 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap yoyo("yoyo");
    ScavTrap zouzou("zouzou");
    ScavTrap zou;
    std::cout << std::endl;
    
    zou=zouzou;
    std::cout << zou.get_name() << std::endl;
    zou.guardGate();
    std::cout << std::endl;

    for (int i = 0; i < 3; i++)
        yoyo.attack("l'asticot");
    std::cout << std::endl;

    for (int i = 0; i < 3; i++)
        zouzou.attack("bibi");
    std::cout << std::endl;

    zouzou.beRepaired(15);
    zouzou.takeDamage(10);
    zouzou.takeDamage(20);
    zouzou.attack("argh");
    zouzou.beRepaired(3);
    zouzou.guardGate();
    std::cout << std::endl;

    return 0;
}
