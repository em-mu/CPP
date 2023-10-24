/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:06:50 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 16:28:38 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal created." << std::endl;
    return;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destroyed." << std::endl;
    return;
}

WrongAnimal::WrongAnimal( WrongAnimal const & copy )
{
    *this = copy;
    return;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const & rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "wrong generic sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
