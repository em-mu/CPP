/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:27:08 by emuller           #+#    #+#             */
/*   Updated: 2023/10/31 13:48:47 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << " --------------- Test du sujet ------------------------" << std::endl;
    std::cout << std::endl;
    
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    
    ICharacter* me = new Character("me");
    
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    
    delete bob;
    delete me;
    delete src;
    
    std::cout << " --------------- Test supplemantaire------------------------" << std::endl;
    std::cout << std::endl;

    IMateriaSource* s = new MateriaSource();
    s->learnMateria(new Ice());
    s->learnMateria(new Cure());
    s->learnMateria(new Cure());
    s->learnMateria(new Cure());
    s->learnMateria(new Cure());
    s->learnMateria(new Cure());
    
    std::cout << std::endl;
    ICharacter* yoyo = new Character("yoyo");
    ICharacter* asticot = new Character("l'asticot");

    AMateria* cure;
    cure = s->createMateria("cure");
    AMateria* ice;
    ice = s->createMateria("ice");
    AMateria* test;
    test = s->createMateria("prout");

    std::cout << std::endl;
    yoyo->equip(cure);
    yoyo->equip(ice);
    yoyo->equip(test);

    std::cout << std::endl;
    yoyo->use(0, *asticot);
    yoyo->use(1, *asticot);
    yoyo->use(2, *asticot);
    yoyo->use(10, *asticot);

    std::cout << std::endl;
    yoyo->unequip(0);
    yoyo->use(0, *asticot);
    yoyo->equip(cure);
    yoyo->use(0, *asticot);
    yoyo->unequip(0);

    delete cure;    
    delete yoyo;
    delete asticot;
    delete s;
    
    return 0;
}