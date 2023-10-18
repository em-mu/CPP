/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 14:33:50 by emuller           #+#    #+#             */
/*   Updated: 2023/10/16 18:32:13 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int    Fixed::_fract_bits_number = 8;

Fixed::Fixed( void ): _value(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy )
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed( const int nb ): _value(nb << _fract_bits_number)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float nb ): _value(roundf(nb * (1 << _fract_bits_number)))
{
    // std::cout << "Float constructor called" << std::endl;   
}

Fixed::~Fixed( void )
{
    // std::cout << "Destructor called" << std::endl;
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

Fixed& Fixed::operator=(Fixed const & rhs)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    this->_value = rhs.getRawBits();
    return (*this);
}

bool Fixed::operator>(Fixed const & rhs)
{
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs)
{
    return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs)
{
    return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs)
{
    return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs)
{
    return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs)
{
    return (this->getRawBits() != rhs.getRawBits());
}

Fixed&  Fixed::operator++( void )
{
    ++this->_value;
    return (*this);
}

Fixed   Fixed::operator++( int )
{
    Fixed copy(*this);
    copy._value = this->_value++;
    return (copy);

}

Fixed&  Fixed::operator--( void )
{
    --this->_value;
    return (*this);
} 

Fixed   Fixed::operator--( int )
{
    Fixed copy(*this);
    copy._value = this->_value--;
    return (copy);
}

Fixed   Fixed::operator+(Fixed const & rhs)
{
	return(Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed   Fixed::operator-(Fixed const & rhs)
{
	return(Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed   Fixed::operator*(Fixed const & rhs)
{
	return(Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed   Fixed::operator/(Fixed const & rhs)
{
    return(Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed&        Fixed::min(Fixed &n1, Fixed &n2)
{
    if (n1.getRawBits() > n2.getRawBits())
        return (n2);
    return (n1);
}

const Fixed&  Fixed::min(const Fixed &n1, const Fixed &n2)
{
    if (n1.getRawBits() > n2.getRawBits())
        return (n2);
    return (n1);
}

Fixed&        Fixed::max(Fixed &n1, Fixed &n2)
{
    if (n1.getRawBits() < n2.getRawBits())
        return (n2);
    return (n1);
}

const Fixed&  Fixed::max(const Fixed &n1, const Fixed &n2)
{
    if (n1.getRawBits() < n2.getRawBits())
        return (n2);
    return (n1);
}

std::ostream& operator<<(std::ostream &str, Fixed const &ref)
{
    str << ref.toFloat();
    return(str);
}

