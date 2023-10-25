/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:41:01 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 16:21:02 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "\e[32mDog created.\033[0m" << std::endl;
    return;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "\e[31mDog destroyed.\033[0m" << std::endl;
    return;
}

Dog::Dog( Dog const & copy )
{
    this->type = copy.type;
    this->_brain = new Brain(*(copy._brain));    
    std::cout << "Dog Constructor copy called" << std::endl;
    return;
}

Dog& Dog::operator=(Dog const & rhs)
{
    if (this == &rhs) 
        return *this;  // Self-assignment check
    delete _brain;  // Delete the old Brain
    type = rhs.type;
    _brain = new Brain(*(rhs._brain));  
    std::cout << "Dog assignment operator called" << std::endl;
    return *this;
}

void    Dog::makeSound() const
{
    std::cout << "wouf" << std::endl;
    return;
}
