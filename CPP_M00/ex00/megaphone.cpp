/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 17:30:07 by emuller           #+#    #+#             */
/*   Updated: 2023/10/07 17:31:52 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
    {
		for (int i = 1; argv[i]; i++)
        {
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char) toupper(argv[i][j]);
			// if (i < argc - 1)
			// 	std::cout << ' ';
		}
	}
	std::cout << std::endl;
	return 0;
}