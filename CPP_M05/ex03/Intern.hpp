/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:16:14 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 17:24:20 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <iostream>
# include <stdexcept>
# include "AForm.hpp"

class AForm;

class Intern 
{
    public:
        Intern();
        ~Intern();
        Intern( Intern const & copy ); 
        Intern& operator=(Intern const & rhs);
        
        AForm*   makeForm(std::string form_name, std::string target);
};

#endif