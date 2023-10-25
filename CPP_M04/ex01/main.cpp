/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:34:59 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 14:38:56 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;
    
    Animal*  all[100];
    for (int i = 0; i < 50; i++)
        all[i] = new Dog();
    for (int i = 50; i < 100; i++)
        all[i] = new Cat();
    
    for (int i = 0; i < 100; i++)
        delete all[i];
            
    return 0;
}