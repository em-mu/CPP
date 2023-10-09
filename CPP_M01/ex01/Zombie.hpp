/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:43:28 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 17:17:51 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <iomanip>

class Zombie {
    
    private:
        std::string		_name;

    public:
        Zombie( void );
        ~Zombie( void );
        void    set_name( std::string name );
        void    announce( void ) const;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );
Zombie* zombieHorde( int N, std::string name );

#endif