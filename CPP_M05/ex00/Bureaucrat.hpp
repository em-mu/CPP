/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:03:46 by emuller           #+#    #+#             */
/*   Updated: 2023/11/02 16:26:46 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <iostream>
# include <stdexcept>

class Bureaucrat 
{
    private:
        const std::string  _name;
        int               _grade;
    
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();
        Bureaucrat( Bureaucrat const & copy ); 
        Bureaucrat& operator=(Bureaucrat const & rhs);

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
        int         getGrade() const;
        void        setGrade(int new_grade);
        void        increaseGrade();
        void        decreaseGrade();
};

std::ostream& operator<<(std::ostream &str, Bureaucrat const & ref);

#endif