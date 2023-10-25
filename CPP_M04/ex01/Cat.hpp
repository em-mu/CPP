/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:48:27 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 14:13:49 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"

#ifndef CAT_H
# define CAT_H

class Cat : public Animal
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