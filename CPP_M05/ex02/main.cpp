/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:36:16 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 17:13:34 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

int main()
{
    std::cout << "------------------------ TEST 1 ------------------------" << std::endl;
    try
    {
        Bureaucrat                   chacha("chacha", 3);
        PresidentialPardonForm       foufou("Helizer");
        RobotomyRequestForm          robot("roro");
        ShrubberyCreationForm        bubu("buisson");
        
        std::cout << chacha << std::endl;
        std::cout << foufou << std::endl;
        chacha.signForm(foufou);
        chacha.executeForm(foufou);
        
        std::cout << std::endl;
        std::cout << robot << std::endl;
        chacha.signForm(robot);
        chacha.executeForm(robot);

        std::cout << std::endl;
        std::cout << bubu << std::endl;
        chacha.signForm(bubu);
        chacha.executeForm(bubu);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "------------------------ TEST 2 ------------------------" << std::endl;

    try
    {
        Bureaucrat                   chacha("chacha", 3);
        PresidentialPardonForm       foufou("Helizer");
        
        std::cout << chacha << std::endl;
        std::cout << foufou << std::endl;
        chacha.executeForm(foufou);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "------------------------ TEST 3 ------------------------" << std::endl;

    try
    {
        Bureaucrat                   chacha("chacha", 70);
        RobotomyRequestForm          robot("roro");
        
        std::cout << std::endl;
        std::cout << robot << std::endl;
        chacha.signForm(robot);
        chacha.executeForm(robot);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    std::cout << "------------------------ TEST 4 ------------------------" << std::endl;

    try
    {
        Bureaucrat                   chacha("chacha", 30);
        RobotomyRequestForm          robot("roro");
        PresidentialPardonForm       foufou("Helizer");
        
        std::cout << std::endl;
        std::cout << robot << std::endl;
        chacha.signForm(robot);
        chacha.executeForm(robot);
        chacha.signForm(foufou);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}