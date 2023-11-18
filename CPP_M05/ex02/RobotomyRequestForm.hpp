/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:04:24 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 16:21:44 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
    private:
        std::string     _target;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm( RobotomyRequestForm const & copy ); 
        RobotomyRequestForm& operator=(RobotomyRequestForm const & rhs);
        
        void    execute(Bureaucrat const & executor) const;
};
