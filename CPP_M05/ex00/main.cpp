/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:36:16 by emuller           #+#    #+#             */
/*   Updated: 2023/11/10 16:56:19 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat chacha("chacha", 3);
    Bureaucrat yoyo("yoyo", 10000);
    
    std::cout << chacha << std::endl;
    chacha.increaseGrade();
    yoyo.decreaseGrade();
    yoyo.decreaseGrade();
    std::cout << chacha << std::endl;
    std::cout << yoyo << std::endl;
    chacha.increaseGrade();
    std::cout << chacha << std::endl;
    chacha.increaseGrade();
    std::cout << chacha << std::endl;

    return 0;
}