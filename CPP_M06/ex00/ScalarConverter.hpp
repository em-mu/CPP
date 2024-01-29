/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:49:58 by emuller           #+#    #+#             */
/*   Updated: 2024/01/29 17:38:10 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include <limits>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <cctype>

#define NAN 1
#define INF 2
#define ERROR 3
#define CHAR 4
#define INT 5
#define FLOAT 6
#define DOUBLE 7

class ScalarConverter
{
    private: 
        static char 	theChar;
        static int		theInt
        static float	theFloat;
        static double	theDouble;
        static int  input_type(const std::string str);

		ScalarConverter(void);
		ScalarConverter(ScalarConverter const &src);
		ScalarConverter&	operator=(ScalarConverter const &assign);
		~ScalarConverter(void);


    public: 
        static void convert(const std::string str);
};