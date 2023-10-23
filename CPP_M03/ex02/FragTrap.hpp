/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:05:18 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 15:29:31 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef FRAGTRAP_H
# define FRAGTRAP_H

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();

        void    highFivesGuys(void);
};

#endif