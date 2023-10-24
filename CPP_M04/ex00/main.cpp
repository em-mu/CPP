/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:34:59 by emuller           #+#    #+#             */
/*   Updated: 2023/10/24 16:32:25 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

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

    //WrongAnimal test: La meme chose mais sans mettre makeSound en virtuel
    std::cout << std::endl;
    const WrongAnimal* w = new WrongCat();

    std::cout << w->getType() << " " << std::endl;
    w->makeSound();
    delete w;
    
    return 0;
}