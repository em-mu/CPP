/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:33:50 by emuller           #+#    #+#             */
/*   Updated: 2023/10/16 17:36:00 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int    Fixed::_fract_bits_number = 8;

Fixed::Fixed( void ): _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed( const int nb ): _value(nb << _fract_bits_number)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nb ): _value(roundf(nb * (1 << _fract_bits_number)))
{
    std::cout << "Float constructor called" << std::endl;   
}

Fixed& Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    // std::cout << "getRawBits member function called" << std::endl;   
    return (this->_value); 
}

void    Fixed::setRawBits( int const raw )
{
    // std::cout << "setRawBits member function called" << std::endl; 
    this->_value = raw;
}

float Fixed::toFloat( void ) const
{
    return (static_cast<float>(_value) / (1 << _fract_bits_number));
}

int Fixed::toInt( void ) const
{
    return (_value >> _fract_bits_number);
}

std::ostream& operator<<(std::ostream &str, Fixed const &ref)
{
    str << ref.toFloat();
    return(str);
}

