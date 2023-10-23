/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:33:47 by emuller           #+#    #+#             */
/*   Updated: 2023/10/18 15:48:15 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#ifndef FIXED_H
# define FIXED_H

class Fixed {
    private: 
        int  _value;
        static const int    _fract_bits_number;
    
    public:
        Fixed( void );
        Fixed( Fixed const & copy );
        Fixed( const int );
        Fixed( const float );
        Fixed& operator=(Fixed const & rhs);
        ~Fixed( void );
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream &str, Fixed const &ref);

#endif