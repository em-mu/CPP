/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:54:33 by emuller           #+#    #+#             */
/*   Updated: 2023/10/01 17:44:43 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void )
{
	return;
}

Contact::~Contact( void )
{
	return;
}

int Contact::get_index( void ) const
{
	return this->_index;
}

std::string Contact::get_first_name( void ) const
{
	return this->_first_name;
}

std::string Contact::get_last_name( void ) const
{
	return this->_last_name;
}

std::string Contact::get_nickname( void ) const
{
	return this->_nickname;
}

std::string Contact::get_phone_number( void ) const
{
	return this->_phone_number;
}

void Contact::set_new_contact( int i )
{
    std::string     buff;
    
    this->_index = i + 1;
    while (1)
    {
        std::cout << "First Name: ";
        std::getline(std::cin, buff);
        if (buff.find('\t') != std::string::npos || buff.find('^') != std::string::npos || buff.find('[') != std::string::npos || buff.length() <= 0 || buff.length() > 50)
        {
            std::cout << "Please, try again." << std::endl;
        }
        else
        {
            this->_first_name = buff;
            break;
        }
    }
    std::cout << "Last Name: ";
    std::getline(std::cin, this->_last_name);
    std::cout << "Nickname: ";
    std::getline(std::cin, this->_nickname);
    std::cout << "Phone Number: ";
    std::getline(std::cin, this->_phone_number);
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, this->_darkest_secret);
    std::cout << "\033[1;38;5;221m" << this->_nickname << " created.\033[0m" << std::endl;  
}

void Contact::display_header( void ) const
{
	std::cout << "|" << std::setw(10) << this->_index;
    std::cout << "|";
    if (this->_first_name.length() > 10)
        std::cout << this->_first_name.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << this->_first_name;
    std::cout << "|";
    if (this->_last_name.length() > 10)
        std::cout << this->_last_name.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << this->_last_name;
    std::cout << "|";
    if (this->_nickname.length() > 10)
        std::cout << this->_nickname.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << this->_nickname;
	std::cout << "|" << std::endl;
}

void Contact::display_contact( void ) const
{
    std::cout << "First Name: " << this->_first_name << std::endl;
    std::cout << "Last Name: " << this->_last_name << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Phone Number: " << this->_phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;  
    return;
}