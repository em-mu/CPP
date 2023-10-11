/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:06:40 by emuller           #+#    #+#             */
/*   Updated: 2023/10/11 16:59:46 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef HARL_H
# define HARL_H

class   Harl {
    private: 
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        
    public:
        Harl( void );
        ~Harl( void );
        void    complain( std::string level );
};

#endif