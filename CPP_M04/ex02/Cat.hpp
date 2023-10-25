/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:48:27 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 17:06:12 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_H
# define CAT_H

class Cat : public AAnimal
{
    private:
        Brain   *_brain;
        
    public: 
        Cat();
        ~Cat();
        Cat( Cat const & copy );
        Cat& operator=(Cat const & rhs);
        void    makeSound() const;
};

#endif