/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:49:03 by emuller           #+#    #+#             */
/*   Updated: 2023/10/30 18:23:41 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){}

MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource( MateriaSource const & copy )
{
    (void)copy;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
    (void)rhs;
    return *this;
}

void MateriaSource::learnMateria(AMateria*){}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type == "ice")
        return (new Ice());
    if (type == "cure")
        return (new Cure());
    else 
        std::cout << 
}
