/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:41:01 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 16:07:07 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog created." << std::endl;
    return;
}

Dog::~Dog()
{
    std::cout << "Dog destroyed." << std::endl;
    return;
}

Dog::Dog( Dog const & copy )
{
    *this = copy;
    return;
}

Dog& Dog::operator=(Dog const & rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "wouf" << std::endl;
    return;
}
