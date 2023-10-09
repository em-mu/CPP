/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:15:40 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 17:23:26 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int N = 5;
	Zombie *horde;
	
	horde = zombieHorde(N, "member");
	for (int i = 0; i < N; i++)
		horde[i].announce();	
	delete[] horde;

    horde = zombieHorde(0, "Emma");

    horde = zombieHorde(1, "Emma");
	horde[0].announce();
    delete[] horde;
    
	return (0);
}
