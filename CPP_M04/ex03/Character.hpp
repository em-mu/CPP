/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:07:29 by emuller           #+#    #+#             */
/*   Updated: 2023/10/30 17:22:29 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        AMateria    *_inventory[4];
        std::string _name;
    
    public:
        Character();
        Character(std::string const name);
        ~Character(); //free Materia
        Character( Character const & copy ); //deepcopy
        Character& operator=(Character const & rhs); //deepcopy

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx); //don't delete materia / avoid leaks
        void use(int idx, ICharacter& target);
};

#endif