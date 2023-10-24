/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:05:30 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 16:09:36 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

class WrongCat : public WrongAnimal
{
    public: 
        WrongCat();
        ~WrongCat();
        WrongCat( WrongCat const & copy );
        WrongCat& operator=(WrongCat const & rhs);
        void    makeSound() const;
};

#endif