/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 20:07:08 by emuller           #+#    #+#             */
/*   Updated: 2023/10/16 16:38:09 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string    my_replace(std::string line, std::string s1, std::string s2)
{
	size_t	pos_search = 0;

	pos_search = line.find(s1);
	while (pos_search != std::string::npos)
	{
		line.erase(pos_search, s1.length());
		line.insert(pos_search, s2);
		pos_search = line.find(s1, pos_search + s2.length());
	}
	return (line);
}

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
        std::cout << "\033[1;31;5;221mError: " << argv[1] << ":" << "\033[0m" << std::endl;
        return 1;
    }

    std::string content;

    outfile.open((filename + ".replace").c_str());
    if (outfile.fail())
    {
        infile.close();
        return 1;
    }
    
    while (std::getline(infile, content))
    {
        content = my_replace(content, s1, s2);
        outfile << content;
        if (infile.peek() != EOF)
            outfile << std::endl;
    }
    
    outfile.close();
    return 0;
}