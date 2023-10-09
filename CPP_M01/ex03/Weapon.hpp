/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:38:34 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 19:12:09 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>
#include <iomanip>

class Weapon {
    private:
        std::string    _type;
        
    public:
        Weapon(const std::string &w );
        Weapon();
        ~Weapon( void );
        const std::string&  getType( void ) const;
        void                setType( std::string new_type );
};

#endif