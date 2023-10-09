/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:07:08 by emuller           #+#    #+#             */
/*   Updated: 2023/10/09 20:21:55 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    
    if (argc == 4)
    {
        const std::string filename    = argv[1];
        const std::string s1          = argv[2];
        const std::string s2          = argv[3];
        std::ifstream   infile;
        
        infile.open(argv[1]);
        
        
    }
    else
        std::cerr << "\033[1;31;5;221mError: Invalid number of arguments\033[0m" << std::endl;
    return 0;
}