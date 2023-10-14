/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:33:47 by emuller           #+#    #+#             */
/*   Updated: 2023/10/14 15:45:31 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef FIXED_H
# define FIXED_H

class Fixed {
    private: 
        int  _value;
        static const int    fract_bits_number;
    
    public:
        Fixed( void );
        Fixed( Fixed const & copy );
        Fixed& operator=(Fixed const & rhs);
        ~Fixed( void );
        int getRawBits( void ) const;
        void    setRawBits( int const raw );
};

#endif