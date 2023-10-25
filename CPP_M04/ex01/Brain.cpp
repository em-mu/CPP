/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 13:06:09 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 14:48:43 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        this->_ideas[i] = "Default idea";
    std::cout << "Brain created." << std::endl;
    return;
}

Brain::~Brain()
{
    std::cout << "Brain destroyed." << std::endl;
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