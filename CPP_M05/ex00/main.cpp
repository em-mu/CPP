/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:36:16 by emuller           #+#    #+#             */
/*   Updated: 2023/11/15 15:46:01 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat chacha("chacha", 3);
        std::cout << chacha << std::endl;
        chacha.increaseGrade();
        std::cout << chacha << std::endl;
        chacha.increaseGrade();
        std::cout << chacha << std::endl;
        chacha.increaseGrade();
        std::cout << chacha << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    
    try
    {
        Bureaucrat yoyo("yoyo", 10000);
        std::cout << yoyo << std::endl;
        yoyo.decreaseGrade();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    
    try
    {
        Bureaucrat nat("nathalie", 150);
        std::cout << nat << std::endl;
        nat.decreaseGrade();
        std::cout << nat << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}