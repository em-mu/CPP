/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:25:26 by emuller           #+#    #+#             */
/*   Updated: 2023/10/30 17:00:26 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_H
# define MATERIA_H

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;
        
    public:
        AMateria();
        AMateria(std::string const & type);
        virtual ~AMateria();
        AMateria( AMateria const & copy );
        // AMateria& operator=(AMateria const & rhs);
        
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif