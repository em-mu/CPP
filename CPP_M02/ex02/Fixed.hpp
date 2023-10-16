/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:33:47 by emuller           #+#    #+#             */
/*   Updated: 2023/10/16 18:36:47 by emuller          ###   ########.fr       */
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
        ~Fixed( void );
        
        Fixed& operator=(Fixed const & rhs);

        bool    operator>(Fixed const & rhs);
        bool    operator<(Fixed const & rhs);
        bool    operator>=(Fixed const & rhs);
        bool    operator<=(Fixed const & rhs);
        bool    operator==(Fixed const & rhs);
        bool    operator!=(Fixed const & rhs);

        Fixed&  operator++( void ); //Prefix (void)
        Fixed   operator++( int ); //Postfix (int)
        Fixed&  operator--( void ); //Prefix (void)
        Fixed   operator--( int ); //Postfix (int)
        Fixed   operator+(Fixed const & rhs);
        Fixed   operator-(Fixed const & rhs);
        Fixed   operator*(Fixed const & rhs);
        Fixed   operator/(Fixed const & rhs);
        
        static Fixed&        min(Fixed &n1, Fixed &n2);
        static const Fixed&  min(const Fixed &n1, const Fixed &n2);
        static Fixed&        max(Fixed &n1, Fixed &n2);
        static const Fixed&  max(const Fixed &n1, const Fixed &n2);
        
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream& operator<<(std::ostream &str, Fixed const &ref);

#endif