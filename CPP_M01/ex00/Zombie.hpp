/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:43:28 by emuller           #+#    #+#             */
/*   Updated: 2023/10/01 17:10:58 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
#include <string>
#include <iomanip>

class Zombie {
    
    private:
        std::string		_name;

    public:
        Zombie( std::string name );
        ~Zombie( void );
        void    announce( void ) const;
        Zombie* newZombie( std::string name );
        void    randomChump( std::string name );
};

#endif