/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:07:47 by emuller           #+#    #+#             */
/*   Updated: 2023/10/31 13:55:10 by emuller          ###   ########.fr       */
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
    {
        std::cout << "Error: materia does not exist. " << std::endl;
        return;
    }
    int i = 0;
    while (_inventory[i])
        i++;
    if (i >= 4)
    {
        std::cout << "Error: Inventory full." << std::endl;
        return;
    }
    for (i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            std::cout << _name << " : equiped " << _inventory[i]->getType() << " at the slot " << i << "." << std::endl;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4)
    {
        std::cout << "Error: invalid index." << std::endl;
        return;
    }
    std::cout << _name << " : unequiped " << _inventory[idx]->getType() << " at the slot " << idx << "." << std::endl;
    _inventory[idx] = 0;
}
 
void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4)
        std::cout << "Error: invalid index." << std::endl;
    else if (_inventory[idx])
        _inventory[idx]->use(target);
    else
        std::cout << _name << " : cannot use an empty slot." << std::endl;
}
