/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:50 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 16:45:17 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_H
# define ANIMAL_H

class Animal {
    protected:
        std::string type;

    public:
        Animal();
        ~Animal();
        Animal( Animal const & copy );
        Animal& operator=(Animal const & rhs);
        void        makeSound();
        std::string getType();
};

#endif