/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:58:17 by emuller           #+#    #+#             */
/*   Updated: 2023/10/14 16:38:01 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main(void)
{
    Zombie  zozo("zo"); // Zo is on the heap
    zozo.announce();

	Zombie *zombie = newZombie("Zombie"); // foo is allocated on the stack with new
    zombie->announce();
	delete zombie;

	randomChump("ZoZo"); // ZoZo is on the heap

	return 0;
}