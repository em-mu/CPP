/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:50:00 by emuller           #+#    #+#             */
/*   Updated: 2024/01/22 16:50:09 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int ScalarConverter::input_type(const std::string str)
{
	if (str.compare("nan") == 0 || str.compare("nanf") == 0)
		return (NAN);
	else if (str.compare("+inf") == 0 || str.compare("-inf") == 0 
        || str.compare("+inff") == 0 || str.compare("-inff") == 0)
		return (INF);
    return (ERROR);
};

void ScalarConverter::convert(const std::string str)
{
    int type;
    type = ScalarConverter::input_type(str);
    std::cout << str << "  type " << type << std::endl;

};