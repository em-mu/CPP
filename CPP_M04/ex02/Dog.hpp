/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:48:55 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 17:06:22 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef DOG_H
# define DOG_H

class Dog : public AAnimal
{
    private:
        Brain   *_brain;
        
    public: 
        Dog();
        ~Dog();
        Dog( Dog const & copy );
        Dog& operator=(Dog const & rhs);
        
        void    makeSound() const;
};

#endif