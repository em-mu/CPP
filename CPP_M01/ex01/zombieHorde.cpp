/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:15:36 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 17:15:37 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1)
	{
		std::cout << "A Horde can not contain less than 1 Zombie." << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (horde == NULL)
	{
		std::cout << "Allocation of the horde failed." << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].set_name(name);
	return (horde);
}