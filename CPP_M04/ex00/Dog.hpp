/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:48:55 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 17:28:21 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef DOG_H
# define DOG_H

class Dog : public Animal
{
    public: 
        Dog();
        ~Dog();
        Dog( Dog const & copy );
        Dog& operator=(Dog const & rhs);
        void    makeSound();
};

#endif