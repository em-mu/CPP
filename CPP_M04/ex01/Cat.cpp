/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:41:23 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 14:24:54 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat created." << std::endl;
    return;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destroyed." << std::endl;
    return;
}

Cat::Cat( Cat const & copy )
{
    *this = copy;
    return;
}

Cat& Cat::operator=(Cat const & rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "miaou" << std::endl;
    return;
}
