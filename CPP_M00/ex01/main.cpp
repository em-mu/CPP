/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:42:32 by emuller           #+#    #+#             */
/*   Updated: 2023/10/01 15:04:23 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook   my_phonebook;
    
    std::cout << "Ici on met un super message d'accueil\n" << std::endl;
    while (1)
    {
        std::cout << ">>";
        if(!std::getline(std::cin, input))
            break;
        if (input.compare("EXIT") == 0)
			break;
        if (input != "" && input != "ADD" && input != "SEARCH")
            std::cout << "tu fais de la merde" << std::endl;
        if (input == "ADD")
			my_phonebook.add_contact();
        if (input == "SEARCH")
			my_phonebook.search_contact();
    }
    return (0);
}
