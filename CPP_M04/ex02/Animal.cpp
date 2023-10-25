/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:40 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 17:06:01 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal()
{
    this->type = "Animal";
    std::cout << "\e[32mAnimal created.\033[0m" << std::endl;
    return;
}

AAnimal::~AAnimal()
{
    std::cout << "\e[31mAnimal destroyed.\033[0m" << std::endl;
    return;
}

AAnimal::AAnimal( AAnimal const & copy )
{
    *this = copy;
    return;
}

AAnimal& AAnimal::operator=(AAnimal const & rhs)
{
    this->type = rhs.type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}
