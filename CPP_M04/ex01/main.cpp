/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:34:59 by emuller           #+#    #+#             */
/*   Updated: 2023/10/25 16:19:31 by emuller          ###   ########.fr       */
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
    
    std::cout << std::endl;
    Animal*  all[10];
    for (int i = 0; i < 5; i++)
        all[i] = new Dog();
    for (int i = 5; i < 10; i++)
        all[i] = new Cat();
    all[2]->makeSound();
    all[7]->makeSound();
    for (int i = 0; i < 10; i++)
        delete all[i];
            
    std::cout << std::endl;
    Dog dog;
    Dog dog2(dog);
    Dog dog3;
    dog3 = dog;
    
    std::cout << dog.getType() << std::endl;
    std::cout << dog2.getType() << std::endl;
    std::cout << dog3.getType() << std::endl;
    
    return 0;
}