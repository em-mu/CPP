/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:41:23 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 16:08:14 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat created." << std::endl;
    return;
}

Cat::~Cat()
{
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
