/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:40 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 17:36:24 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    type = "Animal";
    std::cout << "Animal created." << std::endl;
    return;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed." << std::endl;
    return;
}

Animal::Animal( Animal const & copy )
{
    *this = copy;
    return;
}

Animal::Animal& operator=(Animal const & rhs)
{
    this->type = rhs.get_type();
    return (*this);
}

void    Animal::makeSound()
{
    std::cout << "No sound" << std::endl;
}

std::string Animal::getType()
{
    return (this->type);
}
