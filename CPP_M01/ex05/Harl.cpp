/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:06:38 by emuller           #+#    #+#             */
/*   Updated: 2023/10/11 17:45:04 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl (void){}

Harl::~Harl (void){}

void    Harl::debug( void )
{
    std::cout << "\e[32mI love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
    std::cout << "I really do!\033[0m" << std::endl;
}
void    Harl::info( void )
{
    std::cout << "\e[33mI cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn't put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn't be asking for more!\033[0m" << std::endl;
}
void    Harl::warning( void )
{
    std::cout << "\e[31mI think I deserve to have some extra bacon for free. ";
    std::cout << "I've been coming for years whereas you started working ";
    std::cout << "here since last month.\033[0m" << std::endl;
}
void    Harl::error( void )
{
    std::cout << "\e[35mThis is unacceptable! ";
    std::cout << "I want to speak to the manager now.\033[0m" << std::endl;
}
void    Harl::complain( std::string level )
{
    void(Harl::*f[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++)
    {
        if (levels[i] == level)
        {
            (this->*f[i])();
        }
    }
}