/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:37 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 13:30:54 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_H
# define AFORM_H

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm 
{
    private:
        std::string const   _name;
        bool                _is_signed;
        int const           _grade_to_sign;
        int const           _grade_to_execute;
        
    public:
        AForm();
        AForm(std::string name, int grade_to_sign, int grade_to_execute);
        virtual ~AForm();
        AForm( AForm const & copy ); 
        AForm& operator=(AForm const & rhs);

        class GradeTooHighException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char* what() const throw();
        };
        
        std::string     getName() const;
        bool            getStatus() const;
        int             getGradeToSign() const;
        int             getGradeToExecute() const;
        void            beSigned(Bureaucrat bubu);
        virtual void    execute(Bureaucrat const & executor) const = 0;
};

std::ostream& operator<<(std::ostream &str, AForm & ref);

#endif