/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:07:08 by emuller           #+#    #+#             */
/*   Updated: 2023/10/11 16:04:21 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{   
    if (argc != 4)
    {
        std::cerr << "\033[1;31;5;221mError: Invalid number of arguments\033[0m" << std::endl;
        return 1;
    }
    
    const std::string filename    = argv[1];
    const std::string s1          = argv[2];
    const std::string s2          = argv[3];
    std::ifstream   infile;
    std::ofstream   outfile;
    
    infile.open(argv[1]);
    if (infile.fail())
    {
        std::cout << "\033[1;31;5;221mError: " << argv[1] << ":" << " no such file or directory\033[0m" << std::endl;
        return 1;
    }

    // Copy the input file in a string
    std::string content;
    char        c;
    while (!infile.eof() && infile >> std::noskipws >> c)
        content += c;

    // Create an output file and fill it
    outfile.open((filename + ".replace").c_str());
    if (outfile.fail())
        return 1;

        // replace words while filling the output 
    int pos = 0;
    for (int i = 0; i < (int)content.size(); i++)
    {
        pos = content.find(s1, i);
        if (pos == i && pos != -1)
        {
            outfile << s2;
            i += s1.size() - 1;
        }
        else
            outfile << content[i];
    }
    outfile.close();
    return 0;
}