/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:02:07 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 16:27:32 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat created." << std::endl;
    return;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destroyed." << std::endl;
    return;
}

WrongCat::WrongCat( WrongCat const & copy )
{
    *this = copy;
    return;
}

WrongCat& WrongCat::operator=(WrongCat const & rhs)
{
    this->type = rhs.type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "wrong miaou" << std::endl;
    return;
}
