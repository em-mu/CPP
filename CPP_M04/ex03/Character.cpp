/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:07:47 by emuller           #+#    #+#             */
/*   Updated: 2023/10/30 18:15:04 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Default name")
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    return;
}

Character::Character(std::string const name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = 0;
    return;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}
 
Character::Character( Character const & copy )
{
    _name = copy._name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = copy._inventory[i];
    return;
}
 
Character& Character::operator=(Character const & rhs)
{
    if (this == &rhs) 
        return *this;
    _name = rhs._name;
    for (int i = 0; i < 4; i++)
        _inventory[i] = rhs._inventory[i];
    return *this;
}

std::string const & Character::getName() const 
{
    return(_name);
}

void Character::equip(AMateria* m)
{
    if (!m)
        return;
    int i = 0;
    while (_inventory[i]) //a verifier
        i++;
    if (i >= 4)
    {
        std::cout << "Inventory full" << std::endl;
        return;
    }
    for (i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    (void)idx;
}
 //don't delete materia / avoid leaks
 
void Character::use(int idx, ICharacter& target)
{
    _inventory[idx]->use(target);
}
