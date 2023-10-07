/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:42:32 by emuller           #+#    #+#             */
/*   Updated: 2023/10/07 17:26:02 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "PhoneBook.hpp"

int main()
{
    std::string input;
    PhoneBook   my_phonebook;

    std::cout << "\x1b[32m _________________________________________ \033[0m" << std::endl;
    std::cout << "\x1b[32m *    Welcome to the AWSOME PhoneBook    * \033[0m" << std::endl;
    std::cout << "\x1b[32m _________________________________________ \033[0m" << std::endl;
    std::cout << "\x1b[33mPlease entre your command\033[0m\n \x1b[33m[ADD] [SEARCH] [EXIT]\033[0m\n" << std::endl;
    my_phonebook.set_count(0);
    while (1)
    {
        std::cout << ">>";
        if(!std::getline(std::cin, input))
        {
            std::cout << "\nsalut bande de nazes" << std::endl;
            break;
        }
        if (input.compare("EXIT") == 0)
			break;
        if (input != "" && input != "ADD" && input != "SEARCH")
            std::cout << "You're doing sh*t" << std::endl;
        if (input == "ADD")
			my_phonebook.add_contact();
        if (input == "SEARCH")
			my_phonebook.search_contact();
    }
    return (0);
}
