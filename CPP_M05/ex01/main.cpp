/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:36:16 by emuller           #+#    #+#             */
/*   Updated: 2023/11/15 16:25:06 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "------------------------ TEST 1 ------------------------" << std::endl;
    try
    {
        Bureaucrat  chacha("chacha", 3);
        Form        foufou("foufou", 2, 160);
        std::cout << chacha << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "------------------------ TEST 2 ------------------------" << std::endl;

    try
    {
        Bureaucrat  chacha("chacha", 1);
        Form        foufou("foufou", 2, 10);
        chacha.signForm(foufou);
        chacha.signForm(foufou);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    std::cout << "------------------------ TEST 3 ------------------------" << std::endl;

    try
    {
        Bureaucrat  chacha("chacha", 4);
        Form        foufou("foufou", 2, 10);
        std::cout << chacha << std::endl;
        chacha.signForm(foufou);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}