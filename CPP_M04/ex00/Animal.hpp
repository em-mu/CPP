/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:50 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 15:57:27 by emuller          ###   ########.fr       */
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
        virtual ~Animal();
        Animal( Animal const & copy );
        Animal& operator=(Animal const & rhs);
        virtual void        makeSound() const;
        std::string getType() const;
};

#endif