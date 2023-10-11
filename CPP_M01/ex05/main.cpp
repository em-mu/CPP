/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 16:06:44 by emuller           #+#    #+#             */
/*   Updated: 2023/10/11 17:35:50 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl test;
    test.complain("DEBUG");
    test.complain("INFO");
    test.complain("WARNING");
    test.complain("ERROR");
    test.complain("test");
    return 0;
}