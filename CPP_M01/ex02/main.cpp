/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:26:56 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 17:31:06 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string emmaMa = "HI THIS IS BRAIN";
    std::string *stringPTR = &emmaMa;
    std::string &stringREF = emmaMa;

    std::cout << &emmaMa << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << emmaMa << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}