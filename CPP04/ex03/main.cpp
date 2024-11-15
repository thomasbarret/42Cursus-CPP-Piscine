/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:24:32 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/12 21:55:25 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/AMateria.hpp"
#include "./Class/Ice.hpp"
#include "./Class/Cure.hpp"
#include "./Class/Character.hpp"
#include "./Class/MateriaSource.hpp"


#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

void testCharacter() {
    std::cout << GREEN << "Testing Character Creation:" << RESET << std::endl;
    Character* character = new Character("Hero");
    std::cout << YELLOW << "Character Name: " << character->getName() << RESET << std::endl;

    std::cout << GREEN << "Testing Materia Creation and Usage:" << RESET << std::endl;
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();
    AMateria* caca = new Cure();
    std::cout << GREEN << "Equipping Materia:" << RESET << std::endl;
    character->equip(ice);
    character->equip(cure);
    character->unequip(1);
    character->equip(cure);
    character->equip(caca);
    
    Character* villain = new Character("Villain");
    character->use(0, *villain);
    character->use(1, *villain);

    std::cout << GREEN << "Unequipping Materia:" << RESET << std::endl;
    character->unequip(0);
    character->use(0, *villain);

    delete villain;
    delete character;
}

void testMateriaSource() {
    std::cout << GREEN << "Testing Materia Source:" << RESET << std::endl;
    MateriaSource* source = new MateriaSource();
    
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    std::cout << GREEN << "Learning Materia:" << RESET << std::endl;
    source->learnMateria(ice);
    source->learnMateria(cure);

    std::cout << GREEN << "Creating Materia from Source:" << RESET << std::endl;
    AMateria* newIce = source->createMateria("ice");
    AMateria* newCure = source->createMateria("cure");

    Character* character = new Character("Hero");
    character->equip(newIce);
    character->equip(newCure);

    Character* villain = new Character("Villain");
    character->use(0, *villain);
    character->use(1, *villain);

    delete villain;
    delete character;
    delete source;
}

int main() {
    std::cout << BLUE << "Starting tests..." << RESET << std::endl;
    
    testCharacter();
    testMateriaSource();
    
    // std::cout << BLUE << "Tests completed." << RESET << std::endl;
    return 0;
}

// int main()
// {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }