/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:25:26 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 17:53:59 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ICharacter.hpp"

#ifndef MATERIA_H
# define MATERIA_H

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria( AMateria const & copy );
        AMateria& operator=(AMateria const & rhs);
        
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif