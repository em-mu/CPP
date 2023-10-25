/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:06:13 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 13:47:44 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef BRAIN_H
# define BRAIN_H

class Brain 
{
    private:
        std::string _ideas[100];

    public:
        Brain();
        ~Brain();
        Brain( Brain const & copy );
        Brain& operator=(Brain const & rhs);
};

#endif