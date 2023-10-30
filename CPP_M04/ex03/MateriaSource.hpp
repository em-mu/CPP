/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:49:23 by emuller           #+#    #+#             */
/*   Updated: 2023/10/30 17:54:23 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:    
        MateriaSource();
        ~MateriaSource();
        MateriaSource( MateriaSource const & copy ); 
        MateriaSource& operator=(MateriaSource const & rhs); 
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif