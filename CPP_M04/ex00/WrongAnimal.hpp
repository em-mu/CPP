/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:00:34 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 16:29:11 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

class WrongAnimal {
    protected:
        std::string type;

    public:
        WrongAnimal();
        ~WrongAnimal();
        WrongAnimal( WrongAnimal const & copy );
        WrongAnimal& operator=(WrongAnimal const & rhs);
        void        makeSound() const;
        std::string getType() const;
};

#endif