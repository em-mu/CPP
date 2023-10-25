/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:41:23 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 16:21:18 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "\e[32mCat created.\033[0m" << std::endl;
    return;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "\e[31mCat destroyed.\033[0m" << std::endl;
    return;
}

Cat::Cat( Cat const & copy )
{
    this->type = copy.type;
    this->_brain = new Brain(*(copy._brain));    
    std::cout << "Cat Constructor copy called" << std::endl;
    return;
}

Cat& Cat::operator=(Cat const & rhs)
{
    if (this == &rhs) 
        return *this;  // Self-assignment check
    delete _brain;  // Delete the old Brain
    type = rhs.type;
    _brain = new Brain(*(rhs._brain));  
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

void    Cat::makeSound() const
{
    std::cout << "miaou" << std::endl;
    return;
}
