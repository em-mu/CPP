/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:38:17 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 18:58:56 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

#include "Weapon.hpp"

class   HumanA {
    private:
        Weapon      &_weapon;
        std::string _name;
    
    public:
        HumanA( std::string name, Weapon &w );
        ~HumanA( void );
        void    attack( void ) const;
};

#endif