/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:40 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 13:42:23 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap yoyo("yoyo");
    ClapTrap test("titi");

    for (int i = 0; i < 12; i++)
        yoyo.attack("l'asticot");

    test.beRepaired(15);
    test.takeDamage(10);
    test.takeDamage(20);
    test.attack("argh");
    test.beRepaired(3);
    return 0;
}