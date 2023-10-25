/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:06:09 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 16:18:08 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = "Default idea";
    std::cout << "\e[32mBrain created.\033[0m" << std::endl;
    return;
}

Brain::~Brain()
{
    std::cout << "\e[31mBrain destroyed.\033[0m" << std::endl;
    return;
}

Brain::Brain( Brain const & copy )
{
    for (int i = 0; i < 100; i++)
        _ideas[i] = copy._ideas[i]; //Deep copy
    std::cout << "Brain Constructor copy called" << std::endl;
    return;
}

Brain& Brain::operator=(Brain const & rhs)
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];
    std::cout << "Brain assignment operator called" << std::endl;
    return(*this);
}

std::string Brain::getIdea(int i)
{
    return(this->_ideas[i]);
}

void    Brain::setIdea(int i, std::string idea)
{
    this->_ideas[i] = idea;
    return;
}