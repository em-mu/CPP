/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 17:49:23 by emuller           #+#    #+#             */
/*   Updated: 2023/10/31 11:08:19 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private: 
        AMateria *_memory[4];
        
    public:    
        MateriaSource();
        ~MateriaSource();
        MateriaSource( MateriaSource const & copy ); 
        MateriaSource& operator=(MateriaSource const & rhs); 
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif