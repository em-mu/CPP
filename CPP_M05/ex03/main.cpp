/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:36:16 by emuller           #+#    #+#             */
/*   Updated: 2023/11/20 17:32:33 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include "AForm.hpp"

int main()
{
    Intern someRandomIntern;
    AForm* rrf;
    
    std::cout << "------------------- TEST 1 -------------\n" << std::endl;
    try
    {
        rrf = someRandomIntern.makeForm("yoyoyo", "Bender");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;;
    }
    
    std::cout << "------------------- TEST 2 -------------\n" << std::endl;
    try
    {
        rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;;
    }
        
    std::cout << "------------------- TEST 3 -------------\n" << std::endl;
    try
    {
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;;
    }
    
    std::cout << "------------------- TEST 4 -------------\n" << std::endl;
    try
    {
        rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
        std::cout << *rrf << std::endl;
        delete rrf;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;;
    }
    return 0;
}