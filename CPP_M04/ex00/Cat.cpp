/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:41:23 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 17:42:03 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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

Cat::Cat& operator=(Cat const & rhs)
{
    this->type = rhs.get_type();
    return (*this);
}

void    Cat::makeSound()
{
    std::cout << "miaou" << std::endl;
    return;
}
