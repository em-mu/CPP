/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:41:01 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 14:55:59 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog created." << std::endl;
    return;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destroyed." << std::endl;
    return;
}

Dog::Dog( Dog const & copy ) : _brain(new Brain(*(copy._brain)))
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
