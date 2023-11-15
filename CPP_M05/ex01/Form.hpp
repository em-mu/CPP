/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:37 by emuller           #+#    #+#             */
/*   Updated: 2023/11/15 16:14:45 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form 
{
    private:
        std::string const   _name;
        bool                _is_signed;
        int const           _grade_to_sign;
        int const           _grade_to_execute;
        
    public:
        Form();
        Form(std::string name, int grade_to_sign, int grade_to_execute);
        ~Form();
        Form( Form const & copy ); 
        Form& operator=(Form const & rhs);

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
        
        std::string getName() const;
        bool        getStatus() const;
        int         getGradeToSign() const;
        int         getGradeToExecute() const;
        void        beSigned(Bureaucrat bubu);
};

std::ostream& operator<<(std::ostream &str, Form & ref);

#endif