/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:40 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 16:18:12 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "\e[32mAnimal created.\033[0m" << std::endl;
    return;
}

Animal::~Animal()
{
    std::cout << "\e[31mAnimal destroyed.\033[0m" << std::endl;
    return;
}

Animal::Animal( Animal const & copy )
{
    *this = copy;
    return;
}

Animal& Animal::operator=(Animal const & rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "generic sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
