/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:38:22 by emuller           #+#    #+#             */
/*   Updated: 2023/10/16 16:46:15 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

class   HumanB {
    private:
        Weapon      *_weapon;
        std::string _name;
    
    public:
        HumanB( std::string name );
        ~HumanB( void );
        void    setWeapon( Weapon &w );
        void    removeWeapon( void );
        void    attack( void ) const;

};

#endif