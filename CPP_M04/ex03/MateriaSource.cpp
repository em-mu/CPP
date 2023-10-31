/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:49:03 by emuller           #+#    #+#             */
/*   Updated: 2023/10/31 13:50:41 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _memory[i] = 0;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_memory[i])
            delete _memory[i];
}

MateriaSource::MateriaSource( MateriaSource const & copy )
{
    for(int i = 0; i < 4; i++)
    {
        if(copy._memory[i])
            this->_memory[i] = copy._memory[i]->clone();
    }
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs)
{
    for(int i = 0; i < 4; i++)
    {
        if(this->_memory[i])
            delete this->_memory[i];
        if(rhs._memory[i])
            this->_memory[i] = rhs._memory[i]->clone();
    }
    return(*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
        return;
        
    for(int i = 0; i < 4; i++)
    {
        if(!this->_memory[i])
        {
            this->_memory[i] = m;
            std::cout << m->getType() << " learned." << std::endl;
            break;
        }
        else if (i == 3)
        {
            std::cout << "Memory full: cannot learn " << m->getType() << "." << std::endl;
            delete m;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    if (type != "ice" && type != "cure")
    {
        std::cout << type << ": does not exist." << std::endl;
        return 0;
    }
    for (int i = 0 ; i < 4 ; i++)
    {
        if (type == this->_memory[i]->getType())
        {
            std::cout << type << " created." << std::endl;
            return (this->_memory[i]->clone());
        }
    }
    return 0;
}
