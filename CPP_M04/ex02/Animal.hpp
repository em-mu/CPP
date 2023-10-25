/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:35:50 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 17:10:54 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_H
# define ANIMAL_H

class AAnimal {
    protected:
        std::string type;

    public:
        AAnimal();
        virtual ~AAnimal();
        AAnimal( AAnimal const & copy );
        AAnimal& operator=(AAnimal const & rhs);
        virtual void        makeSound() const = 0;
        std::string         getType() const;
};

#endif