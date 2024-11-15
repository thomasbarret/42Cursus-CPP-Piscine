/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:24:32 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/12 19:02:44 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Animal.hpp"
#include "./Class/Dog.hpp"
#include "./Class/Cat.hpp"
	
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

void testCopyConstructor() {
    Dog original;
    Dog copy(original);
}

void testAssignmentOperator() {
    Cat a;
    Cat b;
    b = a;
}

int main() {
    std::cout << RED << "Testing copy constructor:" << RESET << std::endl;
    testCopyConstructor();

    std::cout << "Testing assignment operator:" << std::endl;
    testAssignmentOperator();

    std::cout << GREEN << "Testing dynamic allocation:" << RESET << std::endl;
    Cat* dynamicCat = new Cat();
    delete dynamicCat;

    std::cout << BLUE << "Testing polymorphism:" << RESET << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j; 
    delete i;

    Animal* animals[4];
    animals[0] = new Dog();
    animals[1] = new Cat();
    animals[2] = new Dog();
    animals[3] = new Cat();

    for (int k = 0; k < 4; k++) {
        delete animals[k];
    }
    std::cout << BLUE << "Testing brain:" << RESET << std::endl;
    Cat cat;
    Brain* brain = cat.getBrain();
    brain->setIdea(0, "I am a cat.");
    std::cout << brain->getIdea(0) << std::endl;

    return 0;
}
