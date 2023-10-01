/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:56:51 by emuller           #+#    #+#             */
/*   Updated: 2023/10/01 17:30:13 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void )
{
	return;
}

PhoneBook::~PhoneBook( void )
{
	return;
}

int PhoneBook::get_count( void )
{
    return (this->_count);
}

void PhoneBook::add_contact( void )
{
	this->_mycontacts[_count % 8].set_new_contact(_count % 8);
	this->_count += 1;
}

void PhoneBook::search_contact( void )
{
    if (this->_count == 0)
	{
		std::cout << "\033[1;31;5;221mThe PhoneBook is empty.\033[0m" << std::endl;
		return ;
	}
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "| INDEX    | F.NAME   | L.NAME   | NICKNAME |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

    for (int i = 0; (i < this->_count && i < 8); i++)
		this->_mycontacts[i].display_header();
        
    std::string input;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "Please, enter index number or press 0 to exit : ";
    
	int index = 0;
    if (std::getline(std::cin, input))
    {
        try
        {
            index = std::stoi(input);
        }
        catch(const std::exception& e)
        {
            std::cerr << "\033[1;31;5;221mError: "<< e.what() << "\033[0m" << std::endl;
            return ;
        }
        if (index == 0)
            return;
        else if (index < 0 || index > _count || index > 8)
        {
            std::cerr << "\033[1;31;5;221mError: Invalid index.\033[0m" << std::endl;
            std::cout << "Main Menu:" << std::endl;
        }
        else
            this->_mycontacts[index - 1].display_contact();
    }
    return;
}